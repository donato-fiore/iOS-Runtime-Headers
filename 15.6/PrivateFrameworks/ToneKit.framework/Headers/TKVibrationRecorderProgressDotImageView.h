// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKVIBRATIONRECORDERPROGRESSDOTIMAGEVIEW_H
#define TKVIBRATIONRECORDERPROGRESSDOTIMAGEVIEW_H

@class UIImageView;



@interface TKVibrationRecorderProgressDotImageView : UIImageView

@property (nonatomic) CGFloat accessibilityFrameAdditionalHeight; // ivar: _accessibilityFrameAdditionalHeight
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGFloat previousPauseDuration; // ivar: _previousPauseDuration
@property (nonatomic) CGFloat previousPauseTimeInterval; // ivar: _previousPauseTimeInterval
@property (nonatomic) CGFloat timeInterval; // ivar: _timeInterval


-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(struct CGRect )accessibilityFrame;


@end


#endif