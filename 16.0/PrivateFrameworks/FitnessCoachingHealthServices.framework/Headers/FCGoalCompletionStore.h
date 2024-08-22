// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCGOALCOMPLETIONSTORE_H
#define FCGOALCOMPLETIONSTORE_H

@class NSDictionary, HDProfile;

#import <Foundation/Foundation.h>


@interface FCGoalCompletionStore : NSObject {
    NSDictionary *_goalTypesToNotifyByActivitySummaryIndex;
    HDProfile *_profile;
    os_unfair_lock_s _unfairLock;
}




-(BOOL)isDailyGoalTypeMet:(NSInteger)arg0 activitySummaryIndex:(NSInteger)arg1 ;
-(NSInteger)_activitySummaryIndexForDate:(id)arg0 ;
-(NSUInteger)_goalTypesMetForActivitySummaryIndex:(NSInteger)arg0 ;
-(id)_goalCompletionByActivitySummaryIndex;
-(id)_trimOldGoalCompletions:(id)arg0 index:(NSInteger)arg1 ;
-(id)_userDefaultsDomain;
-(id)allGoalTypesMetForActivitySummaryIndex:(NSInteger)arg0 ;
-(id)goalTypesToNotifyByActivitySummaryIndex;
-(id)goalTypesToNotifyForActivitySummaryIndex:(NSInteger)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(void)_setGoalCompletionByActivitySummaryIndex:(id)arg0 ;
-(void)_setGoalTypesMet:(NSUInteger)arg0 forActivitySummaryIndex:(NSInteger)arg1 ;
-(void)_setGoalTypesToNotifyByActivitySummaryIndex:(id)arg0 ;
-(void)addDailyGoalTypePreviouslyMet:(NSInteger)arg0 activitySummaryIndex:(NSInteger)arg1 ;
-(void)addGoalTypeToDailyGoalTypesMet:(NSInteger)arg0 activitySummaryIndex:(NSInteger)arg1 ;
-(void)addGoalTypeToNotify:(NSInteger)arg0 activitySummaryIndex:(NSInteger)arg1 ;
-(void)removeGoalTypesToNotify:(id)arg0 activitySummaryIndex:(NSInteger)arg1 ;


@end


#endif