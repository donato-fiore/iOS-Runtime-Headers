// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPRESSSEQUENCESETTINGS_H
#define SBPRESSSEQUENCESETTINGS_H


#import <Foundation/Foundation.h>


@interface SBPressSequenceSettings : NSObject

@property (nonatomic) NSUInteger indexOfPressDownToUseForVarianceAndGrowth; // ivar: _indexOfPressDownToUseForVarianceAndGrowth
@property (nonatomic) NSUInteger indexOfPressUpToUseForVarianceAndGrowth; // ivar: _indexOfPressUpToUseForVarianceAndGrowth
@property (nonatomic) CGFloat maxDefaultPressDownDuration; // ivar: _maxDefaultPressDownDuration
@property (nonatomic) CGFloat maxDefaultPressUpDuration; // ivar: _maxDefaultPressUpDuration
@property (nonatomic) CGFloat maxDownToDownDuration; // ivar: _maxDownToDownDuration
@property (nonatomic) NSUInteger numberOfPressDownGrowthTerms; // ivar: _numberOfPressDownGrowthTerms
@property (nonatomic) NSUInteger numberOfPressUpGrowthTerms; // ivar: _numberOfPressUpGrowthTerms
@property (nonatomic) NSUInteger numberOfPresses; // ivar: _numberOfPresses
@property (nonatomic) CGFloat pressDownVariance; // ivar: _pressDownVariance
@property (nonatomic) CGFloat pressUpVariance; // ivar: _pressUpVariance




@end


#endif