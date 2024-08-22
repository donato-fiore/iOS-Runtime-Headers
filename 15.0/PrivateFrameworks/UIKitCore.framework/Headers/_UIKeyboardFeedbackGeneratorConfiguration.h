// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIKEYBOARDFEEDBACKGENERATORCONFIGURATION_H
#define _UIKEYBOARDFEEDBACKGENERATORCONFIGURATION_H

@class UIFeedbackGeneratorConfiguration, NSDictionary;



@interface _UIKeyboardFeedbackGeneratorConfiguration : UIFeedbackGeneratorConfiguration

@property (nonatomic) CGFloat fastTypingTime; // ivar: _fastTypingTime
@property (nonatomic) CGFloat fastTypingVolumeMultiplier; // ivar: _fastTypingVolumeMultiplier
@property (retain, nonatomic) NSDictionary *feedbacks; // ivar: _feedbacks
@property (nonatomic) CGFloat releaseThreshold; // ivar: _releaseThreshold
@property (nonatomic) BOOL scalingForSpeedEnabled; // ivar: _scalingForSpeedEnabled
@property (nonatomic) CGFloat slowTypingTime; // ivar: _slowTypingTime


+(id)defaultConfiguration;
+(id)descriptorsForVisceral:(NSInteger)arg0 releaseThreshold:(*CGFloat)arg1 ;
+(id)feedbacksWithDescriptors:(id)arg0 ;
+(id)hapticConfigurationForVisceral:(NSInteger)arg0 ;
-(BOOL)defaultEnabled;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)feedbackKeyPaths;


@end


#endif