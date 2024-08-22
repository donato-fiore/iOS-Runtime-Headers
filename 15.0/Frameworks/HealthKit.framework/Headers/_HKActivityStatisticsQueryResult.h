// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKACTIVITYSTATISTICSQUERYRESULT_H
#define _HKACTIVITYSTATISTICSQUERYRESULT_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _HKActivityStatisticsQueryResult : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *activeEnergyResults; // ivar: _activeEnergyResults
@property (copy, nonatomic) NSArray *appleExerciseTimeResults; // ivar: _appleExerciseTimeResults
@property (copy, nonatomic) NSArray *appleMoveTimeResults; // ivar: _appleMoveTimeResults
@property (copy, nonatomic) NSArray *appleStandHourResults; // ivar: _appleStandHourResults
@property (copy, nonatomic) NSArray *workoutResults; // ivar: _workoutResults


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif