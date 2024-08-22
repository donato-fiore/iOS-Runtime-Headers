// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFCTAG_H
#define NFCTAG_H

@class NSNumber, NSString;
@protocol NFCTag, NFCNDEFTag, NFTag, OS_dispatch_queue, NFCReaderSession;

#import <Foundation/Foundation.h>

#import "NFCHardwareManager.h"

@interface NFCTag : NSObject <NFCTag, NFCNDEFTag>

 {
    id<NFTag> *_tag;
    NSNumber *_sessionKey;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSInteger _configuration;
}


@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, nonatomic) NSInteger configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NFCHardwareManager *hardwareManager; // ivar: _hardwareManager
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<NFCReaderSession> *session;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;


+(BOOL)supportsSecureCoding;
+(CGFloat)_MaxRetryInterval;
+(NSUInteger)_MaxRetry;
-(BOOL)_connectWithSession:(id)arg0 outError:(*id)arg1 ;
-(BOOL)_disconnectWithError:(*id)arg0 ;
-(BOOL)_transceiveWithSession:(id)arg0 sendData:(id)arg1 receivedData:(*id)arg2 error:(*id)arg3 ;
-(BOOL)isEqualToNFTag:(id)arg0 ;
-(BOOL)isMatchingSession:(id)arg0 outError:(*id)arg1 ;
-(BOOL)isNDEFFormatted;
-(BOOL)isReadOnly;
-(BOOL)proprietaryApplicationDataCoding;
-(NSUInteger)capacity;
-(id)_getInternalReaderSession;
-(id)applicationData;
-(id)asNFCFeliCaTag;
-(id)asNFCISO15693Tag;
-(id)asNFCISO7816Tag;
-(id)asNFCMiFareTag;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)historicalBytes;
-(id)identifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSession:(id)arg0 tag:(id)arg1 startupConfig:(NSInteger)arg2 ;
-(id)selectedAID;
-(id)systemCode;
-(void)_connectWithCompletionHandler:(id)arg0 ;
-(void)_sendAPDU:(id)arg0 completionHandler:(id)arg1 ;
-(void)_setDelegateQueue:(id)arg0 ;
-(void)_setTag:(id)arg0 ;
-(void)_transceiveWithData:(id)arg0 completionHandler:(id)arg1 ;
-(void)disconnect;
-(void)dispatchOnDelegateQueueAsync:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)queryNDEFStatusWithCompletionHandler:(id)arg0 ;
-(void)readNDEFWithCompletionHandler:(id)arg0 ;
-(void)writeLockWithCompletionHandler:(id)arg0 ;
-(void)writeNDEF:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif