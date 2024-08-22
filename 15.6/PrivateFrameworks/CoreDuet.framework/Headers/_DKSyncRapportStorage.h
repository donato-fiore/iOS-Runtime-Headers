// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKSYNCRAPPORTSTORAGE_H
#define _DKSYNCRAPPORTSTORAGE_H

@protocol _DKSyncCommonClass;

#import <Foundation/Foundation.h>

#import "_DKSyncRapportCommonStorage.h"

@interface _DKSyncRapportStorage : NSObject <_DKSyncCommonClass>

 {
    _DKSyncRapportCommonStorage *_commonStorage;
}




-(BOOL)isAvailable;
-(BOOL)isTransportActiveForPeer:(id)arg0 ;
-(NSInteger)transportType;
-(id)client;
-(id)init;
-(id)myDeviceID;
-(id)name;
-(id)transformCaughtObject:(id)arg0 existingError:(id)arg1 ;
-(id)transformResponseError:(id)arg0 ;
-(void)cancelOutstandingOperations;
-(void)fetchSourceDeviceIDFromPeer:(id)arg0 highPriority:(BOOL)arg1 completion:(id)arg2 ;
-(void)handleAvailabilityFailureWithPeer:(id)arg0 completion:(id)arg1 ;
-(void)handshakeWithDuetSyncPeer:(id)arg0 orError:(id)arg1 ;
-(void)registerRequestIDsWithClient:(id)arg0 ;
-(void)sendRequestID:(id)arg0 request:(id)arg1 peer:(id)arg2 highPriority:(BOOL)arg3 options:(id)arg4 responseHandler:(id)arg5 ;
-(void)setDeviceID:(id)arg0 ;
-(void)start;


@end


#endif