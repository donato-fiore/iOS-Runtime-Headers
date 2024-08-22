// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GOALDETAILCOLLATOR_H
#define _GOALDETAILCOLLATOR_H


#import <Foundation/Foundation.h>


@interface _GoalDetailCollator : NSObject {
    NSInteger _entryCount;
    NSInteger _entriesExceedingGoal;
    CGFloat _totalPercentFromGoal;
}




-(id)activitySummaryDetailStringWithActivitySummary:(id)arg0 unitPreferenceController:(id)arg1 activityValue:(NSInteger)arg2 displayTypeController:(id)arg3 ;
-(id)detailStringWithTimeScope:(NSInteger)arg0 ;
-(id)init;
-(void)processCoordinateUserInfo:(id)arg0 ;


@end


#endif