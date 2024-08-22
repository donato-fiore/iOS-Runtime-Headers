// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BYSETUPSTATENOTIFIER_H
#define BYSETUPSTATENOTIFIER_H

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BYSetupStateNotifier : NSObject

@property (retain, nonatomic) NSMutableArray *exclusiveNotificationBlocks; // ivar: _exclusiveNotificationBlocks
@property (nonatomic) int exclusiveNotificationToken; // ivar: _exclusiveNotificationToken
@property (retain, nonatomic) NSMutableArray *generalStateNotificationBlocks; // ivar: _generalStateNotificationBlocks
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // ivar: _notificationQueue
@property (retain, nonatomic) NSMutableArray *relaunchStateNotificationBlocks; // ivar: _relaunchStateNotificationBlocks
@property (nonatomic) BOOL shouldRelaunchSetup; // ivar: _shouldRelaunchSetup
@property (nonatomic) int shouldRemainAliveNotificationToken; // ivar: _shouldRemainAliveNotificationToken
@property (retain, nonatomic) NSMutableDictionary *specificStateNotificationBlocks; // ivar: _specificStateNotificationBlocks
@property (nonatomic) NSUInteger state; // ivar: _state
@property (nonatomic) int stateNotificationToken; // ivar: _stateNotificationToken


+(id)sharedNotifier;
-(NSUInteger)currentState;
-(id)init;
-(void)_beginObservingState;
-(void)_endObservingState;
-(void)_noLongerExclusiveNotificationFired;
-(void)_shouldRemainAliveNotificationFired;
-(void)_stateChangedTo:(NSUInteger)arg0 ;
-(void)addObserverWhenSetupIsNoLongerExclusiveWithNotificationBlock:(id)arg0 ;
-(void)addRelaunchStateChangeObserver:(id)arg0 ;
-(void)addStateChangeObserver:(id)arg0 ;
// -(void)addStateCompletionObserver:(id)arg0 forState:(unk)arg1  ;
-(void)dealloc;
-(void)notifySetupShouldRemainAlive;
-(void)notifyStateChangedTo:(NSUInteger)arg0 ;


@end


#endif