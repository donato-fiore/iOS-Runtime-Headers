// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOTIMERSPUBLISHER_H
#define SOTIMERSPUBLISHER_H

@class NSHashTable, MTTimerManager, NSString;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "SOTimersSnapshot.h"

@interface SOTimersPublisher : NSObject {
    NSObject<OS_dispatch_queue> *_timersPublisherQueue;
    NSObject<OS_dispatch_group> *_timersPublisherDispatchGroup;
    NSHashTable *_subscribers;
    MTTimerManager *_timerManager;
    SOTimersSnapshot *_timerSnapshot;
}


@property (readonly, nonatomic) NSString *typeName; // ivar: _typeName


-(id)init;
-(void)_createNewSnapshotWithCompletion:(id)arg0 ;
-(void)_notifySubscribersOfEvent:(NSInteger)arg0 ;
-(void)_startObserving;
-(void)addSubscriber:(id)arg0 ;
-(void)dealloc;
-(void)firingTimerChanged:(id)arg0 ;
-(void)firingTimerDismissed:(id)arg0 ;
-(void)getCurrentSnapshotWithCompletion:(id)arg0 ;
-(void)removeSubscriber:(id)arg0 ;
-(void)stateReset:(id)arg0 ;
-(void)timerFired:(id)arg0 ;
-(void)timersAdded:(id)arg0 ;
-(void)timersRemoved:(id)arg0 ;
-(void)timersUpdated:(id)arg0 ;


@end


#endif