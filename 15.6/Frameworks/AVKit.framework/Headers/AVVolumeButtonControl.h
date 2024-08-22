// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVVOLUMEBUTTONCONTROL_H
#define AVVOLUMEBUTTONCONTROL_H

@class UIControl, NSString, UISelectionFeedbackGenerator, UIViewPropertyAnimator, UIImageView, NSTimer, UIView;
@protocol AVExternalGestureRecognizerPreventing, AVPlaybackControlsViewItem;


#import "AVLayoutItemAttributes.h"
#import "AVMicaPackage.h"

@interface AVVolumeButtonControl : UIControl <AVExternalGestureRecognizerPreventing, AVPlaybackControlsViewItem>



@property (nonatomic, getter=isCollapsed) BOOL collapsed; // ivar: _collapsed
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded;
@property (nonatomic) CGPoint cumulativeTranslationSincePanningBegan; // ivar: _cumulativeTranslationSincePanningBegan
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGSize extrinsicContentSize; // ivar: _extrinsicContentSize
@property (readonly, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (nonatomic) BOOL hasAlternateAppearance; // ivar: _hasAlternateAppearance
@property (nonatomic) BOOL hasFullScreenAppearance; // ivar: _hasFullScreenAppearance
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewPropertyAnimator *highlightAnimator; // ivar: _highlightAnimator
@property (nonatomic) NSDirectionalEdgeInsets hitRectInsets; // ivar: _hitRectInsets
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic, getter=isIncluded) BOOL included; // ivar: _included
@property (nonatomic) CGPoint initialPreciseLocationOfTouch; // ivar: _initialPreciseLocationOfTouch
@property (readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes; // ivar: _layoutAttributes
@property (nonatomic) CGPoint locationOfTouchInWindow; // ivar: _locationOfTouchInWindow
@property (nonatomic, getter=isLongPressEnabled) BOOL longPressEnabled; // ivar: _longPressEnabled
@property (weak, nonatomic) NSTimer *longPressTimer; // ivar: _longPressTimer
@property (retain, nonatomic) AVMicaPackage *micaPackage; // ivar: _micaPackage
@property (retain, nonatomic) UIView *micaPackageContainerView; // ivar: _micaPackageContainerView
@property (retain, nonatomic) NSString *micaPackageStateName; // ivar: _micaPackageStateName
@property (nonatomic, getter=isRemoved) BOOL removed; // ivar: _removed
@property (nonatomic) BOOL showsHighlightedAppearance; // ivar: _showsHighlightedAppearance
@property (readonly) Class superclass;
@property (nonatomic) NSInteger trackingState; // ivar: _trackingState
@property (nonatomic) CGPoint translationOfPanFromPreviousTouch; // ivar: _translationOfPanFromPreviousTouch
@property (nonatomic) NSInteger volumeControllerType; // ivar: _volumeControllerType


-(BOOL)avkit_shouldPreventExternalGestureRecognizerAtPoint:(struct CGPoint )arg0 ;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)accessibilityLabel;
-(id)imageNameForMicaPackageState;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )hitRect;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )minimumSize;
-(void)_updateLayoutItem;
-(void)_updateMicaPackage:(id)arg0 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setNeedsUpdateGlyphRenderingMode;
-(void)triggerSelectionChangedFeedback;


@end


#endif