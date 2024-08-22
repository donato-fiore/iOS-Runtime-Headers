// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKBACKGROUNDIMAGEFACEVIEW_H
#define NTKBACKGROUNDIMAGEFACEVIEW_H

@class UIView, NSString, UIImageView;
@protocol UIGestureRecognizerDelegate;


#import "NTKDigitalFaceView.h"
#import "NTKEditOption.h"
#import "NTKComplicationDisplayWrapperView.h"

@interface NTKBackgroundImageFaceView : NTKDigitalFaceView <UIGestureRecognizerDelegate>

 {
    NTKEditOption *_editOptionFrom;
    UIView *_transitionViewFrom;
    NTKEditOption *_editOptionTo;
    UIView *_transitionViewTo;
    UIView *_transitionDimmingView;
    BOOL _shouldAdjustLayoutForTimeTravel;
    UIView *_timeTravelDimmingOverlayView;
    UIView *_selectedContentView;
    CGFloat _breathScaleModifier;
    CGFloat _rubberBandScaleModifier;
    NTKComplicationDisplayWrapperView *_touchWrapper;
}


@property (readonly, nonatomic) UIView *backgroundContainerView; // ivar: _backgroundContainerView
@property (retain, nonatomic) UIView *borrowedCircleView; // ivar: _borrowedCircleView
@property (retain, nonatomic) UIView *borrowedTimeView; // ivar: _borrowedTimeView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGRect maskZoomStartingBounds; // ivar: _maskZoomStartingBounds
@property (readonly) Class superclass;
@property (nonatomic) CGPoint timeViewZoomEndingCenter; // ivar: _timeViewZoomEndingCenter
@property (nonatomic) CGRect vignetteZoomStartingBounds; // ivar: _vignetteZoomStartingBounds
@property (retain, nonatomic) UIView *zoomMaskView; // ivar: _zoomMaskView
@property (retain, nonatomic) UIImageView *zoomVignette; // ivar: _zoomVignette


-(BOOL)_fadesComplicationSlot:(id)arg0 inEditMode:(NSInteger)arg1 ;
-(BOOL)_needsForegroundContainerView;
-(BOOL)_shouldAdjustLayoutForTimeTravel;
-(BOOL)_shouldFadeToTransitionView;
-(BOOL)_supportsTimeScrubbing;
-(BOOL)_timeLabelUsesLegibility;
-(BOOL)_wantsTimeTravelStatusModule;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)_backgroundImageAlphaForEditMode:(NSInteger)arg0 ;
-(CGFloat)_keylineCornerRadiusForComplicationSlot:(id)arg0 ;
-(CGFloat)_parallaxScaleFactor;
-(CGFloat)_timeLabelAlphaForEditMode:(NSInteger)arg0 ;
-(CGFloat)_timeTravelCaptionLabelMaxWidth;
-(CGFloat)_timeTravelStatusModuleCaptionConstraintPadding;
-(CGFloat)_timeTravelYAdjustment;
-(id)_animationImageView;
-(id)_complicationDisplayWrapperForTouch:(id)arg0 ;
-(id)_digitalTimeLabelStyleFromViewMode:(NSInteger)arg0 faceBounds:(struct CGRect )arg1 ;
-(id)_selectedContentView;
-(id)_updateFontInStyle:(id)arg0 monospace:(BOOL)arg1 ;
-(id)_viewForEditOption:(id)arg0 ;
-(void)_applyBreathingFraction:(CGFloat)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applyRubberBandingFraction:(CGFloat)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applyScaleTransform:(id)arg0 ;
-(void)_applyShowContentForUnadornedSnapshot;
-(void)_applyTransitionFraction:(CGFloat)arg0 fromOption:(id)arg1 toOption:(id)arg2 forCustomEditMode:(NSInteger)arg3 slot:(id)arg4 ;
-(void)_beginTransitionToOption;
-(void)_cleanupAfterEditing;
-(void)_cleanupAfterTransitionToOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_configureForEditMode:(NSInteger)arg0 ;
-(void)_configureForTransitionFraction:(CGFloat)arg0 fromEditMode:(NSInteger)arg1 toEditMode:(NSInteger)arg2 ;
-(void)_didTransitionToOptionView:(id)arg0 ;
-(void)_endScrubbingAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_endScrubbingAnimationFromUIViewAnimateWithDuration;
-(void)_layoutTimeTravelCaptionView:(id)arg0 ;
-(void)_layoutTimeTravelStatusModule:(id)arg0 ;
-(void)_loadSnapshotContentViews;
-(void)_prepareForEditing;
-(void)_removeAllSubviewsFrom:(id)arg0 ;
-(void)_scrubToDate:(id)arg0 animated:(BOOL)arg1 ;
-(void)_startScrubbingAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
-(void)_unloadSnapshotContentViews;
-(void)setViewMode:(NSInteger)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif