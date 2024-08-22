// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHEALTHWRAPMESSAGE_H
#define HKHEALTHWRAPMESSAGE_H

@class NSUUID, NSURL, NSOutputStream, NSError;
@protocol _HKStreamingDestination, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HKHealthWrapCodablePayloadHeader.h"
#import "_HKCompressionEngine.h"
#import "HKHealthWrapEncryptor.h"
#import "HKHealthWrapMessageConfiguration.h"

@interface HKHealthWrapMessage : NSObject <_HKStreamingDestination>

 {
    HKHealthWrapCodablePayloadHeader *_payloadHeader;
    NSUUID *_studyUUID;
    *__SecCertificate _certificate;
    _HKCompressionEngine *_compressionEngine;
    HKHealthWrapEncryptor *_encryptor;
    NSURL *_outputURL;
    NSOutputStream *_outputStream;
    NSObject<OS_dispatch_queue> *_encryptQueue;
    BOOL _compressionEnabled;
    BOOL _lastSuccess;
    NSError *_lastError;
}


@property (readonly, nonatomic) HKHealthWrapMessageConfiguration *configuration; // ivar: _configuration


+(id)newOutputFileURL;
+(id)newOutputFileURLInDirectory:(id)arg0 ;
// -(BOOL)_run:(id)arg0 error:(unk)arg1  ;
-(BOOL)appendData:(id)arg0 error:(*id)arg1 ;
-(BOOL)appendDataFromFileURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)startWithError:(*id)arg0 ;
-(BOOL)startWithOutputFileURL:(id)arg0 error:(*id)arg1 ;
-(id)_codableKeyValuePairsFromDictionary:(id)arg0 ;
-(id)finalizeWithError:(*id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithSenderUUID:(id)arg0 studyUUID:(id)arg1 channel:(id)arg2 payloadType:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 payloadIdentifier:(id)arg6 applicationData:(id)arg7 certificate:(struct __SecCertificate *)arg8 ;
-(void)_cleanup;
-(void)_finalize;
-(void)_writeDataToCompressor:(id)arg0 ;
-(void)dealloc;
-(void)receiveSinkContent:(id)arg0 ;
-(void)reset;
-(void)sinkContentFinished;


@end


#endif