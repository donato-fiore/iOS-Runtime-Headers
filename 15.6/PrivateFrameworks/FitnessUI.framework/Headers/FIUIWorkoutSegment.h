// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIUIWORKOUTSEGMENT_H
#define FIUIWORKOUTSEGMENT_H

@class HKQuantity, NSDate;

#import <Foundation/Foundation.h>


@interface FIUIWorkoutSegment : NSObject

@property (retain, nonatomic) HKQuantity *activeEnergy; // ivar: _activeEnergy
@property (retain, nonatomic) HKQuantity *distance; // ivar: _distance
@property (nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime
@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate


+(id)_decimalNumberFormatter;
-(id)description;
-(id)formattedActiveEnergyValueForUnit:(id)arg0 ;
-(id)formattedDistanceValueForUnit:(id)arg0 ;
-(id)formattedDurationValueWithFormattingManager:(id)arg0 ;
-(id)formattedPaceUsingFormatType:(NSInteger)arg0 formattingManager:(id)arg1 ;


@end


#endif