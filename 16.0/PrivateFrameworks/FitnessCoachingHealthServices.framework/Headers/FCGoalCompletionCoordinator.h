// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCGOALCOMPLETIONCOORDINATOR_H
#define FCGOALCOMPLETIONCOORDINATOR_H

@class HDProfile, NSString;
@protocol FCDailyActivityGoalDetectionDelegate, OS_dispatch_queue, FCGoalCompletionCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "FCGoalCompletionStore.h"

@interface FCGoalCompletionCoordinator : NSObject <FCDailyActivityGoalDetectionDelegate>

 {
    FCGoalCompletionStore *_goalCompletionStore;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_serviceQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FCGoalCompletionCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_goalTypeAllowed:(NSInteger)arg0 ;
-(BOOL)runDailyGoalCompletionDetectionForGoalType:(NSInteger)arg0 activitySummaryIndex:(NSInteger)arg1 previousValue:(CGFloat)arg2 currentValue:(CGFloat)arg3 goalValue:(CGFloat)arg4 shouldAlert:(BOOL)arg5 goalMetHandler:(id)arg6 ;
-(NSInteger)_activitySummaryIndexForDate:(id)arg0 ;
-(id)goalTypesToNotifyByActivitySummaryIndex;
-(id)initWithProfile:(id)arg0 goalCompletionStore:(id)arg1 serviceQueue:(id)arg2 ;
-(id)initWithProfile:(id)arg0 serviceQueue:(id)arg1 ;
-(void)concludeGoalDetectionRun;
-(void)notificationPosted:(id)arg0 ;
-(void)notificationPostedForGoalTypes:(id)arg0 activitySummaryIndex:(NSInteger)arg1 ;


@end


#endif