// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIUIWEEKLYGOALMODEL_H
#define FIUIWEEKLYGOALMODEL_H

@class HKHealthStore;

#import <Foundation/Foundation.h>


@interface FIUIWeeklyGoalModel : NSObject {
    HKHealthStore *_healthStore;
}




-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(void)fetchMostRecentWeeklyGoalWithCompletion:(id)arg0 ;
-(void)saveNewWeeklyGoal:(id)arg0 forDate:(id)arg1 ;
-(void)saveNewWeeklyGoal:(id)arg0 forDate:(id)arg1 completion:(id)arg2 ;
-(void)saveNewWeeklyGoal:(id)arg0 quantityType:(id)arg1 forDate:(id)arg2 completion:(id)arg3 ;
-(void)saveNewWeeklyGoals:(id)arg0 ;


@end


#endif