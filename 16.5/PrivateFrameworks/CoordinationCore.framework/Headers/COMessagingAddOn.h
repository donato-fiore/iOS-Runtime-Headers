// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COMESSAGINGADDON_H
#define COMESSAGINGADDON_H

@class NSMutableArray;
@protocol COMessagingAddOnDelegate, OS_dispatch_source;


#import "COMeshAddOn.h"

@interface COMessagingAddOn : COMeshAddOn {
    os_unfair_lock_s _lock;
}


@property (weak) NSObject<COMessagingAddOnDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSMutableArray *queuedIncomingRequests; // ivar: _queuedIncomingRequests
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (nonatomic, getter=isTimerEnabled) BOOL timerEnabled; // ivar: _timerEnabled


-(id)init;
-(void)_configureTimer;
-(void)_handleRequest:(id)arg0 callback:(id)arg1 ;
-(void)_timerRequestAdded:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
// -(void)broadcastRequest:(id)arg0 recipientsCallback:(id)arg1 completionHandler:(unk)arg2  ;
-(void)didAddToMeshController:(id)arg0 ;
-(void)didChangeNodesForMeshController:(id)arg0 ;
-(void)sendRequest:(id)arg0 members:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)willRemoveFromMeshController:(id)arg0 ;


@end


#endif