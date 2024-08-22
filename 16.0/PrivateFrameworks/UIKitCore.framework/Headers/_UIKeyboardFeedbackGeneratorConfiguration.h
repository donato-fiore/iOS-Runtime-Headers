// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYBOARDFEEDBACKGENERATORCONFIGURATION_H
#define _UIKEYBOARDFEEDBACKGENERATORCONFIGURATION_H

@class UIFeedbackGeneratorConfiguration, NSDictionary;



@interface _UIKeyboardFeedbackGeneratorConfiguration : UIFeedbackGeneratorConfiguration

@property (nonatomic) CGFloat fastTypingTime; // ivar: _fastTypingTime
@property (nonatomic) CGFloat fastTypingVolumeMultiplier; // ivar: _fastTypingVolumeMultiplier
@property (retain, nonatomic) NSDictionary *feedbacks; // ivar: _feedbacks
@property (nonatomic) BOOL scalingForSpeedEnabled; // ivar: _scalingForSpeedEnabled
@property (nonatomic) CGFloat slowTypingTime; // ivar: _slowTypingTime


+(id)defaultConfiguration;
-(BOOL)defaultEnabled;
-(id)feedbackKeyPaths;


@end


#endif