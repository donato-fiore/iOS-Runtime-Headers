// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENFILESESSION_H
#define ENFILESESSION_H

@class NSDate, NSDictionary, NSData, NSArray;

#import <Foundation/Foundation.h>

#import "ENXPCServiceClient.h"

@interface ENFileSession : NSObject {
    BOOL _activateCalled;
    BOOL _activateSucceeded;
    BOOL _invalidated;
}


@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (readonly, nonatomic) NSUInteger invalidKeyCount; // ivar: _invalidKeyCount
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, nonatomic) ENXPCServiceClient *serviceClient; // ivar: _serviceClient
@property (readonly, copy, nonatomic) NSData *sha256Data; // ivar: _sha256Data
@property (readonly, copy, nonatomic) NSArray *signatures; // ivar: _signatures
@property (readonly, copy, nonatomic) NSDate *startDate;


-(BOOL)_activateHandleReply:(id)arg0 error:(*id)arg1 ;
-(BOOL)_activateSyncWithRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)activateWithArchivePath:(id)arg0 error:(*id)arg1 ;
-(BOOL)activateWithFD:(int)arg0 signatureData:(id)arg1 error:(*id)arg2 ;
-(BOOL)activateWithFilePath:(id)arg0 error:(*id)arg1 ;
-(id)_activateCreateXPCRequestWithFD:(int)arg0 archive:(BOOL)arg1 signatureData:(id)arg2 error:(*id)arg3 ;
-(id)_activateCreateXPCRequestWithPath:(id)arg0 archive:(BOOL)arg1 signatureData:(id)arg2 error:(*id)arg3 ;
-(id)_readTEKBatchHandleReply:(id)arg0 error:(*id)arg1 ;
-(id)initWithServiceClient:(id)arg0 ;
-(id)readTEKBatchAndReturnError:(*id)arg0 ;
-(id)verifySignatureWithPublicKey:(struct __SecKey *)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif