// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIUIWORKOUTSWIMMINGSET_H
#define FIUIWORKOUTSWIMMINGSET_H

@class HKQuantity, NSDate;

#import <Foundation/Foundation.h>


@interface FIUIWorkoutSwimmingSet : NSObject

@property (retain, nonatomic) HKQuantity *distance; // ivar: _distance
@property (nonatomic) NSInteger dominantStrokeStyle; // ivar: _dominantStrokeStyle
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSDate *movementEndDate; // ivar: _movementEndDate
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) NSInteger strokeCount; // ivar: _strokeCount


+(id)_decimalNumberFormatter;
-(CGFloat)_activeDuration;
-(CGFloat)_restingDuration;
-(id)description;
-(id)formattedActiveDurationWithFormattingManager:(id)arg0 ;
-(id)formattedDistanceValueWithFormattingManager:(id)arg0 ;
-(id)formattedDominantStrokeStyle;
-(id)formattedPaceUsingFormatType:(NSInteger)arg0 formattingManager:(id)arg1 ;
-(id)formattedRestDurationWithFormattingManager:(id)arg0 ;
-(id)formattedStrokeCountUsingFormatType:(NSInteger)arg0 formattingManager:(id)arg1 ;


@end


#endif