// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRNOTIFICATIONRECEIVER_H
#define BRNOTIFICATIONRECEIVER_H

@class NSMutableDictionary, NSString;
@protocol BRItemNotificationReceiving, OS_dispatch_queue, BRItemNotificationSending, OS_dispatch_source, NSObject, BRNotificationReceiverDelegate;

#import <Foundation/Foundation.h>

#import "BRNotificationQueue.h"

@interface BRNotificationReceiver : NSObject <BRItemNotificationReceiving>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_ipcQueue;
    BRNotificationQueue *_notifs;
    id<BRItemNotificationSending> *_sender;
    uint8_t _gatherDones;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_source> *_timer;
    NSUInteger _receivedChanges;
    NSUInteger _lastBatchTime;
    NSMutableDictionary *_progressObserverByID;
    NSMutableDictionary *_itemInTransferByID;
    uint8_t _suspendCount;
    int _networkReachabilityToken;
    BOOL _isNetworkReachable;
    BOOL _isInvalidated;
    id<NSObject> *_accountTokenDidChangeNotificationObserver;
    NSString *_personaID;
}


@property (nonatomic) NSUInteger batchingChanges; // ivar: _batchingChanges
@property (nonatomic) CGFloat batchingDelay; // ivar: _batchingDelay
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<BRNotificationReceiverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger pendingCount;
@property (readonly) Class superclass;


-(id)_obtainNotificationSenderFromDaemon;
-(id)init;
-(void)_invalidateAndNotify:(BOOL)arg0 ;
-(void)_receiveUpdates:(id)arg0 ;
-(void)_signalSourceIfNeeded;
-(void)_watchUbiquitousScopes:(id)arg0 bundleID:(id)arg1 predicate:(id)arg2 ;
-(void)dealloc;
-(void)dequeue:(NSUInteger)arg0 block:(id)arg1 ;
-(void)disableUpdatesFromIPCBeforeStitching;
-(void)enableUpdatesFromIPCAfterStitching;
-(void)flush;
-(void)invalidate;
-(void)invalidateAndDontNotifyDelegate;
-(void)invalidateAndNotify:(BOOL)arg0 ;
-(void)networkDidChangeReachabilityStatusTo:(BOOL)arg0 ;
-(void)receiveProgressUpdates:(id)arg0 reply:(id)arg1 ;
-(void)receiveStitchingUpdates:(id)arg0 ;
-(void)receiveUpdates:(id)arg0 logicalExtensions:(id)arg1 physicalExtensions:(id)arg2 reply:(id)arg3 ;
-(void)resume;
-(void)suspend;
-(void)watchUbiquitousScopes:(id)arg0 bundleID:(id)arg1 predicate:(id)arg2 ;


@end


#endif