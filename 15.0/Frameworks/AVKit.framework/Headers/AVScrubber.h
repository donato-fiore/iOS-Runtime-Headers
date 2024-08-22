// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVSCRUBBER_H
#define AVSCRUBBER_H

@class UISlider, UIImageView, NSString, UISelectionFeedbackGenerator, NSArray, UIView, NSMutableArray, UIScrollView, NSTimer;
@protocol UIScrollViewDelegate, AVExternalGestureRecognizerPreventing, AVPlaybackControlsViewItem, AVScrubberDelegate;


#import "AVLayoutItemAttributes.h"

@interface AVScrubber : UISlider <UIScrollViewDelegate, AVExternalGestureRecognizerPreventing, AVPlaybackControlsViewItem>

 {
    CGFloat _trackingStartTime;
    float _previousValue;
    CGFloat _previousValueChangeTime;
    CGFloat _currentValueChangedTime;
    BOOL _didHaveLessThanFullScrubbingSpeedSinceTrackingBegin;
}


@property (nonatomic) BOOL canChangeScrubbingSpeed; // ivar: _canChangeScrubbingSpeed
@property (nonatomic, getter=isCollapsed) BOOL collapsed; // ivar: _collapsed
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded;
@property (nonatomic) CGFloat currentScrubberParentHeight; // ivar: _currentScrubberParentHeight
@property (weak, nonatomic) UIImageView *currentThumbView; // ivar: _currentThumbView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVScrubberDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) float estimatedFrameRate; // ivar: _estimatedFrameRate
@property (nonatomic) CGSize extrinsicContentSize; // ivar: _extrinsicContentSize
@property (readonly, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (nonatomic) BOOL hasAlternateAppearance; // ivar: _hasAlternateAppearance
@property (nonatomic) BOOL hasChangedLocationAtLeastOnce; // ivar: _hasChangedLocationAtLeastOnce
@property (nonatomic) BOOL hasFullScreenAppearance; // ivar: _hasFullScreenAppearance
@property (readonly) NSUInteger hash;
@property (nonatomic) NSDirectionalEdgeInsets hitRectInsets; // ivar: _hitRectInsets
@property (nonatomic, getter=isIncluded) BOOL included; // ivar: _included
@property (readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes; // ivar: _layoutAttributes
@property (copy, nonatomic) NSArray *loadedTimeRanges; // ivar: _loadedTimeRanges
@property (readonly, nonatomic) UIView *loadedTrackOverlayView; // ivar: _loadedTrackOverlayView
@property (readonly, nonatomic) NSString *localizedScrubbingSpeedName;
@property (nonatomic) CGFloat newScrubberParentHeight; // ivar: _newScrubberParentHeight
@property (retain, nonatomic) NSMutableArray *previousScrubberVelocities; // ivar: _previousScrubberVelocities
@property (nonatomic) float rate; // ivar: _rate
@property (nonatomic, getter=isRemoved) BOOL removed; // ivar: _removed
@property (nonatomic) CGFloat resolution; // ivar: _resolution
@property (nonatomic, getter=isScrollScrubbing) BOOL scrollScrubbing; // ivar: _scrollScrubbing
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) BOOL scrubberEnabledStatus; // ivar: _scrubberEnabledStatus
@property (nonatomic, setter=setScrubberParentHeight:) CGFloat scrubberParentHeight; // ivar: _scrubberParentHeight
@property (nonatomic) NSInteger scrubbingSpeed; // ivar: _scrubbingSpeed
@property (nonatomic) BOOL scrubsWhenTappedAnywhere; // ivar: _scrubsWhenTappedAnywhere
@property (nonatomic) BOOL shouldRecoverFromPrecisionScrubbingIfNeeded; // ivar: _shouldRecoverFromPrecisionScrubbingIfNeeded
@property (nonatomic) BOOL slowKnobMovementDetected; // ivar: _slowKnobMovementDetected
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeIntervalSinceTrackingEnded;
@property (nonatomic) CGFloat timestampWhenTrackingEnded; // ivar: _timestampWhenTrackingEnded
@property (retain, nonatomic) NSTimer *updateSlowKnobMovementDetectedTimer; // ivar: _updateSlowKnobMovementDetectedTimer


+(id)keyPathsForValuesAffectingLocalizedScrubbingSpeedName;
-(BOOL)_shouldTrackTouchAtPoint:(struct CGPoint )arg0 ;
-(BOOL)avkit_shouldPreventExternalGestureRecognizerAtPoint:(struct CGPoint )arg0 ;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)isTracking;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)normalizedScrollOffset;
-(float)clampedEstimatedFrameRate;
-(float)duration;
-(float)normalizedPosition;
-(float)valueFromScrollView;
-(id)createScrubberTicTacImage;
-(id)createThumbView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )contentOffsetFromValue;
-(struct CGRect )hitRect;
-(struct CGRect )maximumValueImageRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )minimumValueImageRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )thumbRectForBounds:(struct CGRect )arg0 trackRect:(struct CGRect )arg1 value:(float)arg2 ;
-(struct CGRect )trackRectForBounds:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_updateLayoutItem;
-(void)_updateSlowKnobMovementDetected;
-(void)_updateSlowKnobMovementDetectedForTargetValue:(float)arg0 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)endOrCancelTracking;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setScrubberThumbImage:(id)arg0 ;
-(void)setValue:(float)arg0 ;
-(void)updateScrollViewContentSizeAndOffsetIfNeeded;


@end


#endif