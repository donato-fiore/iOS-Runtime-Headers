// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDSCOORDINATOR_H
#define PDSCOORDINATOR_H

@class NSString, NSDate, CUTDeferredTaskQueue, IDSPushHandler;
@protocol PDSRequestQueueDelegate, IDSPushHandlerDelegate, IMSystemMonitorListener, PDSHeartbeatTrackerDelegate, PDSEntryStoreDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PDSHeartbeatTracker.h"
#import "PDSRequestQueue.h"
#import "PDSBag.h"

@interface PDSCoordinator : NSObject <PDSRequestQueueDelegate, IDSPushHandlerDelegate, IMSystemMonitorListener, PDSHeartbeatTrackerDelegate, PDSEntryStoreDelegate>



@property (nonatomic) NSInteger bagLoadRetries; // ivar: _bagLoadRetries
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disabled; // ivar: _disabled
@property (copy, nonatomic) id *entryStoreBlock; // ivar: _entryStoreBlock
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PDSHeartbeatTracker *heartbeatTracker; // ivar: _heartbeatTracker
@property (copy, nonatomic) id *kvStoreBlock; // ivar: _kvStoreBlock
@property (retain, nonatomic) NSDate *pendingRequestDate; // ivar: _pendingRequestDate
@property (retain, nonatomic) CUTDeferredTaskQueue *processDeferredTaskQueue; // ivar: _processDeferredTaskQueue
@property (retain, nonatomic) IDSPushHandler *pushHandler; // ivar: _pushHandler
@property (copy, nonatomic) id *pushTokenBlock; // ivar: _pushTokenBlock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL requestPending; // ivar: _requestPending
@property (retain, nonatomic) PDSRequestQueue *requestQueue; // ivar: _requestQueue
@property (retain, nonatomic) PDSBag *serverBag; // ivar: _serverBag
@property (readonly) Class superclass;
@property (nonatomic) BOOL tokenChanged; // ivar: _tokenChanged


-(BOOL)_entries:(id)arg0 includeState:(unsigned char)arg1 ;
-(BOOL)_lastPushTokenDiffersFrom:(id)arg0 ;
-(BOOL)_lastSandboxPushTokenDiffersFrom:(id)arg0 ;
-(BOOL)_matchingEntryExistsFor:(id)arg0 inStore:(id)arg1 ;
-(BOOL)_requestMatchesPreviousRequest:(id)arg0 ;
-(BOOL)shouldScheduleHeartbeatForTracker:(id)arg0 ;
-(CGFloat)_timeToDelayRequestForTopics:(id)arg0 ;
-(NSInteger)ttlForRequest:(id)arg0 ;
-(NSUInteger)_lastRequestHash;
// -(id)initWithQueue:(id)arg0 serverBag:(id)arg1 requestQueue:(id)arg2 kvStoreBlock:(id)arg3 entryStoreBlock:(unk)arg4 pushTokenBlock:(id)arg5 systemMonitor:(unk)arg6 pushHandler:(id)arg7  ;
-(void)_bagReloaded:(id)arg0 ;
-(void)_comparePushTokensWithEntryStore:(id)arg0 ;
-(void)_markLastRequest:(id)arg0 ;
-(void)_markPushToken:(id)arg0 ;
-(void)_markSandboxPushToken:(id)arg0 ;
-(void)_processEntryStore;
-(void)_pushTokenChangedWithEntryStore:(id)arg0 ;
-(void)_updateAllHeartbeatEntriesWithState:(unsigned char)arg0 inEntryStore:(id)arg1 ;
-(void)_updateEntriesForResponse:(id)arg0 fromRequest:(id)arg1 ;
-(void)_updateOrDeleteEntry:(id)arg0 inStore:(id)arg1 ;
-(void)dealloc;
-(void)entryStore:(id)arg0 didUpdatePendingTopics:(id)arg1 forceImmediateUpdate:(BOOL)arg2 ;
-(void)handler:(id)arg0 pushTokenChanged:(id)arg1 ;
-(void)heartbeatFiredForTracker:(id)arg0 ;
-(void)registerIfNeeded;
-(void)requestQueue:(id)arg0 processedRequest:(id)arg1 withResponse:(id)arg2 ;
-(void)systemDidLeaveFirstDataProtectionLock;


@end


#endif