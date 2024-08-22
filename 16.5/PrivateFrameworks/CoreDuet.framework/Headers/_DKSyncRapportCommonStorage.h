// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKSYNCRAPPORTCOMMONSTORAGE_H
#define _DKSYNCRAPPORTCOMMONSTORAGE_H

@class NSDictionary, NSString, RPCompanionLinkClient, NSMutableDictionary, NSMutableSet;
@protocol _DKSyncRemoteStorage, _DKSyncCommonClass, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "_DKEventTypeResultStatsCounter.h"

@interface _DKSyncRapportCommonStorage : NSObject <_DKSyncRemoteStorage, _DKSyncCommonClass>

 {
    BOOL _running;
    NSDictionary *_failIfAsleepOption;
    _DKEventTypeResultStatsCounter *_failIfAsleepStats;
    NSString *_deviceID;
    RPCompanionLinkClient *_client;
    NSMutableDictionary *_companionLinkClients;
    NSUInteger _outstandingRequestCount;
    NSObject<OS_dispatch_source> *_companionLinkClientsCleanupTimer;
    CGFloat _retryTimeout;
    NSMutableSet *_peerSourceDeviceIDsWithCompletedHandshakes;
}


@property (nonatomic) BOOL isAvailable; // ivar: _isAvailable


+(id)sharedInstance;
-(BOOL)isTransportActiveForPeer:(id)arg0 ;
-(NSInteger)transportType;
-(id)client;
-(id)init;
-(id)myDeviceID;
-(id)name;
-(id)transformCaughtObject:(id)arg0 existingError:(id)arg1 ;
-(id)transformResponseError:(id)arg0 ;
-(void)cancelOutstandingOperations;
-(void)dealloc;
-(void)fetchSourceDeviceIDFromPeer:(id)arg0 highPriority:(BOOL)arg1 completion:(id)arg2 ;
-(void)handleAvailabilityFailureWithPeer:(id)arg0 completion:(id)arg1 ;
-(void)handshakeWithDuetSyncPeer:(id)arg0 orError:(id)arg1 ;
-(void)sendRequestID:(id)arg0 request:(id)arg1 peer:(id)arg2 highPriority:(BOOL)arg3 options:(id)arg4 responseHandler:(id)arg5 ;
-(void)setDeviceID:(id)arg0 ;
-(void)start;


@end


#endif