// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIACTIONSLIDER_H
#define _UIACTIONSLIDER_H

@class UIView<_UIActionSliderLabel>, NSString, UIFont;
@protocol UIGestureRecognizerDelegate, _UIActionSliderDelegate;


#import "UIControl.h"
#import "UIView.h"
#import "_UIBackdropView.h"
#import "UIImageView.h"
#import "UIColor.h"
#import "UIImage.h"
#import "UIBezierPath.h"
#import "UIPanGestureRecognizer.h"
#import "UILabel.h"
#import "_UIVibrantSettings.h"

@interface _UIActionSlider : UIControl <UIGestureRecognizerDelegate>

 {
    UIView *_contentView;
    UIView *_trackDodgeView;
    UIView *_trackBackgroundView;
    _UIBackdropView *_trackBlurView;
    UIView *_trackSolidView;
    UIImageView *_knobImageView;
    UIView<_UIActionSliderLabel> *_trackLabel;
    CGPoint _slideGestureInitialPoint;
}


@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (nonatomic) CGFloat cachedTrackMaskWidth; // ivar: _cachedTrackMaskWidth
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIActionSliderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *knobColor;
@property (retain, nonatomic) UIImage *knobImage;
@property (nonatomic) CGSize knobImageOffset; // ivar: _knobImageOffset
@property (nonatomic) UIEdgeInsets knobInsets; // ivar: _knobInsets
@property (readonly, nonatomic) UIBezierPath *knobMaskPath;
@property (nonatomic) CGFloat knobPosition; // ivar: _knobPosition
@property (readonly, nonatomic) CGRect knobRect;
@property (readonly, nonatomic, getter=_knobView) UIView *knobView; // ivar: _knobView
@property (nonatomic) CGFloat knobWidth; // ivar: _knobWidth
@property (nonatomic, getter=isShowingTrackLabel) BOOL showingTrackLabel; // ivar: _showingTrackLabel
@property (readonly, nonatomic) UIPanGestureRecognizer *slideGestureRecognizer; // ivar: _slideGestureRecognizer
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic) NSInteger textStyle; // ivar: _textStyle
@property (retain, nonatomic) UIFont *trackFont; // ivar: _trackFont
@property (readonly, retain, nonatomic) UILabel *trackLabel;
@property (nonatomic) CGSize trackSize; // ivar: _trackSize
@property (copy, nonatomic) NSString *trackText; // ivar: _trackText
@property (nonatomic) CGFloat trackTextBaselineFromBottom; // ivar: _trackTextBaselineFromBottom
@property (readonly, nonatomic) CGRect trackTextRect;
@property (nonatomic) CGFloat trackWidthProportion; // ivar: _trackWidthProportion
@property (retain, nonatomic) _UIVibrantSettings *vibrantSettings; // ivar: _vibrantSettings


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)shouldHideTrackLabelForXPoint:(CGFloat)arg0 ;
-(BOOL)xPointIsWithinTrack:(CGFloat)arg0 ;
-(CGFloat)_knobAvailableX;
-(CGFloat)_knobHorizontalPosition;
-(CGFloat)_knobLeftMostX;
-(CGFloat)_knobMaxX;
-(CGFloat)_knobMaxXInset;
-(CGFloat)_knobMinX;
-(CGFloat)_knobMinXInset;
-(CGFloat)_knobRightMostX;
-(CGFloat)_knobVerticalInset;
-(id)backgroundColor;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 vibrantSettings:(id)arg1 ;
-(id)trackMaskImage;
-(id)trackMaskPath;
-(struct CGRect )_trackFrame;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_hideTrackLabel:(BOOL)arg0 ;
-(void)_knobPanGesture:(id)arg0 ;
-(void)_makeTrackLabel;
-(void)_showTrackLabel;
-(void)_slideCompleted:(BOOL)arg0 ;
-(void)closeTrackAnimated:(BOOL)arg0 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)openTrackAnimated:(BOOL)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setMaskFromImage:(id)arg0 onView:(id)arg1 ;
-(void)setMaskPath:(struct CGPath *)arg0 onView:(id)arg1 ;
-(void)updateAllTrackMasks;


@end


#endif