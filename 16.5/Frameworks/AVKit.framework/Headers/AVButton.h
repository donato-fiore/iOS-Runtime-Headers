// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVBUTTON_H
#define AVBUTTON_H

@class UIButton, NSString, UIFont, UIVisualEffectView, UIViewPropertyAnimator, NSTimer, NSNumber;
@protocol AVPlaybackControlsViewItem;


#import "AVLayoutItemAttributes.h"
#import "AVMicaPackage.h"
#import "AVUserInteractionObserverGestureRecognizer.h"

@interface AVButton : UIButton <AVPlaybackControlsViewItem>

 {
    NSString *_accessibilityLabelOverride;
}


@property (retain, nonatomic) UIFont *activeFont; // ivar: _activeFont
@property (copy, nonatomic) NSString *activeImageName; // ivar: _activeImageName
@property (retain, nonatomic) UIFont *alternateFullScreenFont; // ivar: _alternateFullScreenFont
@property (copy, nonatomic) NSString *alternateImageName; // ivar: _alternateImageName
@property (nonatomic) CGFloat alternateImagePadding; // ivar: _alternateImagePadding
@property (nonatomic) BOOL appliesTransformToImageViewWhenHighlighted; // ivar: _appliesTransformToImageViewWhenHighlighted
@property (retain, nonatomic) UIVisualEffectView *backgroundEffectView; // ivar: _backgroundEffectView
@property (nonatomic) BOOL clampsHitRectInsetsWhenContainedInScrollableView; // ivar: _clampsHitRectInsetsWhenContainedInScrollableView
@property (nonatomic, getter=isCollapsed) BOOL collapsed; // ivar: _collapsed
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disablesHighlightWhenLongPressed; // ivar: _disablesHighlightWhenLongPressed
@property (nonatomic) CGSize extrinsicContentSize; // ivar: _extrinsicContentSize
@property (nonatomic) CGFloat force; // ivar: _force
@property (nonatomic) CGFloat forceThreshold; // ivar: _forceThreshold
@property (retain, nonatomic) UIFont *fullScreenFont; // ivar: _fullScreenFont
@property (nonatomic) CGFloat fullscreenAlternateImagePadding; // ivar: _fullscreenAlternateImagePadding
@property (nonatomic) BOOL hasAlternateAppearance; // ivar: _hasAlternateAppearance
@property (nonatomic) BOOL hasFullScreenAppearance; // ivar: _hasFullScreenAppearance
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewPropertyAnimator *highlightAnimator; // ivar: _highlightAnimator
@property (nonatomic) NSDirectionalEdgeInsets hitRectInsets; // ivar: _hitRectInsets
@property (nonatomic) CGFloat horizontalTranslationOfLongPress; // ivar: _horizontalTranslationOfLongPress
@property (copy, nonatomic) NSString *imageName; // ivar: _imageName
@property (nonatomic, getter=isIncluded) BOOL included; // ivar: _included
@property (retain, nonatomic) UIFont *inlineFont; // ivar: _inlineFont
@property (readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes; // ivar: _layoutAttributes
@property (weak, nonatomic) NSTimer *longPressTimer; // ivar: _longPressTimer
@property (nonatomic) CGFloat maximumForceSinceTrackingBegan; // ivar: _maximumForceSinceTrackingBegan
@property (retain, nonatomic) AVMicaPackage *micaPackage; // ivar: _micaPackage
@property (nonatomic) CGFloat micaSnapshotAlpha; // ivar: _micaSnapshotAlpha
@property (nonatomic) BOOL multipleTouchesEndsTracking; // ivar: _multipleTouchesEndsTracking
@property (retain, nonatomic) NSNumber *previousHorizontalPositionOfLongPress; // ivar: _previousHorizontalPositionOfLongPress
@property (nonatomic, getter=isRemoved) BOOL removed; // ivar: _removed
@property (nonatomic, getter=isSecondGeneration) BOOL secondGeneration; // ivar: _secondGeneration
@property (readonly) Class superclass;
@property (nonatomic) NSInteger tintEffectStyle; // ivar: _tintEffectStyle
@property (nonatomic) CGFloat trackingStartTime; // ivar: _trackingStartTime
@property (nonatomic) BOOL treatsForcePressAsLongPress; // ivar: _treatsForcePressAsLongPress
@property (retain, nonatomic) AVUserInteractionObserverGestureRecognizer *userInteractionGestureRecognizer; // ivar: _userInteractionGestureRecognizer
@property (nonatomic) BOOL usesBackgroundEffectViewForTextOnlyButtons; // ivar: _usesBackgroundEffectViewForTextOnlyButtons
@property (nonatomic) BOOL wasForcePressTriggered; // ivar: _wasForcePressTriggered
@property (nonatomic) BOOL wasLongPressed; // ivar: _wasLongPressed


+(id)buttonWithAccessibilityIdentifier:(id)arg0 accessibilityLabel:(id)arg1 isSecondGeneration:(BOOL)arg2 ;
+(id)buttonWithAccessibilityIdentifier:(id)arg0 isSecondGeneration:(BOOL)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_imageViewAlpha;
-(id)_preferredFont;
-(id)_preferredImageName;
-(id)accessibilityLabel;
-(struct CGRect )hitRect;
-(struct CGSize )_preferredLayoutSize;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )minimumSize;
-(void)_handleUserInteractionGestureRecognizer:(id)arg0 ;
-(void)_resetTrackedState;
-(void)_updateBackgroundEffectViewIsHidden;
-(void)_updateEdgeInsets;
-(void)_updateImageIfNeeded;
-(void)_updateLayoutItem;
-(void)_updateTintColorIfNeeded;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setTitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif