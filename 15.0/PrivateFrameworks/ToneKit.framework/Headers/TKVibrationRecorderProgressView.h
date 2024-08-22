// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TKVIBRATIONRECORDERPROGRESSVIEW_H
#define TKVIBRATIONRECORDERPROGRESSVIEW_H

@class UIView, NSLayoutConstraint, NSMutableArray;
@protocol TKVibrationRecorderStyleProvider;


#import "TKVibrationRecorderProgressDotImageView.h"

@interface TKVibrationRecorderProgressView : UIView {
    CGFloat _maximumTimeInterval;
    CGFloat _currentVibrationComponentDidBeginTimeInterval;
    CGFloat _previousPauseDidBeginTimeInterval;
    id<TKVibrationRecorderStyleProvider> *_styleProvider;
    UIView *_progressView;
    NSLayoutConstraint *_progressViewWidthConstraint;
    TKVibrationRecorderProgressDotImageView *_dotForCurrentVibrationComponent;
    NSLayoutConstraint *_dotForCurrentVibrationComponentLeftConstraint;
    NSLayoutConstraint *_dotForCurrentVibrationComponentRightConstraint;
    NSMutableArray *_dots;
}


@property (nonatomic) CGFloat currentTimeInterval; // ivar: _currentTimeInterval
@property (nonatomic) int roundedCornersCompensationDelayMode; // ivar: _roundedCornersCompensationDelayMode


-(BOOL)isAccessibilityElement;
-(CGFloat)_cappedValueForTimeInterval:(CGFloat)arg0 ;
-(id)_dotTintColor;
-(id)_resizableDotImage;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithMaximumTimeInterval:(CGFloat)arg0 styleProvider:(id)arg1 ;
-(struct CGRect )_frameForDotAtTimeInterval:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(struct CGRect )accessibilityFrame;
-(struct CGSize )_dotSize;
-(struct CGSize )intrinsicContentSize;
-(struct UIOffset )_dotInsets;
-(void)_updateHorizontalConstraintsOfDotForCurrentVibrationComponent:(id)arg0 withFrame:(struct CGRect )arg1 ;
-(void)_updateProgressViewBackgroundColor;
-(void)clearAllVibrationComponents;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)vibrationComponentDidEnd;
-(void)vibrationComponentDidStart;


@end


#endif