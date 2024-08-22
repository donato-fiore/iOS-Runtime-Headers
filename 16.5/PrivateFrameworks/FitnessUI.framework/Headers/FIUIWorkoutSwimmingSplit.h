// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIUIWORKOUTSWIMMINGSPLIT_H
#define FIUIWORKOUTSWIMMINGSPLIT_H


#import <Foundation/Foundation.h>


@interface FIUIWorkoutSwimmingSplit : NSObject

@property (nonatomic) CGFloat distanceInUserUnit; // ivar: _distanceInUserUnit
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGFloat durationScaledToFillSplit; // ivar: _durationScaledToFillSplit
@property (nonatomic) NSInteger splitDistance; // ivar: _splitDistance
@property (nonatomic) NSInteger strokeCount; // ivar: _strokeCount
@property (nonatomic) NSInteger strokeCountScaledToFillSplit; // ivar: _strokeCountScaledToFillSplit


-(CGFloat)_fractionToFillTotalSplitDistance;
-(id)description;
-(id)formattedPaceWithFormattingManager:(id)arg0 ;
-(id)formattedStrokeCount;


@end


#endif