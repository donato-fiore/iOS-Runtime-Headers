// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHARMONYSETTINGS_H
#define SBHARMONYSETTINGS_H

@class PTSettings, NSString;



@interface SBHarmonySettings : PTSettings

@property (nonatomic) BOOL whitePointAdaptationInteractiveUpdateEnabled; // ivar: _whitePointAdaptationInteractiveUpdateEnabled
@property (copy, nonatomic) NSString *whitePointAdaptationInteractiveUpdateTimingFunctionName; // ivar: _whitePointAdaptationInteractiveUpdateTimingFunctionName
@property (nonatomic) float whitePointAdaptationStrengthGame; // ivar: _whitePointAdaptationStrengthGame
@property (nonatomic) float whitePointAdaptationStrengthPhoto; // ivar: _whitePointAdaptationStrengthPhoto
@property (nonatomic) float whitePointAdaptationStrengthReading; // ivar: _whitePointAdaptationStrengthReading
@property (nonatomic) float whitePointAdaptationStrengthStandard; // ivar: _whitePointAdaptationStrengthStandard
@property (nonatomic) float whitePointAdaptationStrengthVideo; // ivar: _whitePointAdaptationStrengthVideo
@property (nonatomic) float whitePointAdaptationUpdateDefaultDuration; // ivar: _whitePointAdaptationUpdateDefaultDuration


-(void)setDefaultValues;


@end


#endif