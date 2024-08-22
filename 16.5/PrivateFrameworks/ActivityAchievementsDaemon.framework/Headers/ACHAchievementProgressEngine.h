// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHACHIEVEMENTPROGRESSENGINE_H
#define ACHACHIEVEMENTPROGRESSENGINE_H

@class _HKDelayedOperation, NSHashTable, NSNumber;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ACHAchievementProgressEngine : NSObject

@property (retain, nonatomic) _HKDelayedOperation *delayedOperation; // ivar: _delayedOperation
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // ivar: _observerQueue
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSNumber *overrideDelay; // ivar: _overrideDelay
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *providerQueue; // ivar: _providerQueue
@property (retain, nonatomic) NSHashTable *providers; // ivar: _providers


-(BOOL)populateProgressAndGoalForAchievement:(id)arg0 ;
-(BOOL)shouldPopulateProgressForAchievement:(id)arg0 ;
-(NSUInteger)providerCount;
-(id)_queue_providerForTemplate:(id)arg0 ;
-(id)init;
-(void)_notifyObserversOfProgressUpdate;
-(void)addObserver:(id)arg0 ;
-(void)deregisterProgressProvider:(id)arg0 ;
-(void)registerProgressProvider:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)requestProgressUpdateForProgressProvider:(id)arg0 ;


@end


#endif