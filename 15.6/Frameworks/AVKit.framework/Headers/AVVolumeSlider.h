// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVVOLUMESLIDER_H
#define AVVOLUMESLIDER_H

@class UISlider, NSString, UIImageView;
@protocol AVExternalGestureRecognizerPreventing, AVPlaybackControlsViewItem;


#import "AVLayoutItemAttributes.h"

@interface AVVolumeSlider : UISlider <AVExternalGestureRecognizerPreventing, AVPlaybackControlsViewItem>



@property (nonatomic, getter=isAnimatingVolumeChange) BOOL animatingVolumeChange; // ivar: _animatingVolumeChange
@property (nonatomic, getter=isCollapsed) BOOL collapsed; // ivar: _collapsed
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGSize extrinsicContentSize; // ivar: _extrinsicContentSize
@property (nonatomic) BOOL hasAlternateAppearance; // ivar: _hasAlternateAppearance
@property (nonatomic) BOOL hasChangedLocationAtLeastOnce; // ivar: _hasChangedLocationAtLeastOnce
@property (nonatomic) BOOL hasFullScreenAppearance; // ivar: _hasFullScreenAppearance
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isIncluded) BOOL included; // ivar: _included
@property (readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes; // ivar: _layoutAttributes
@property (nonatomic, getter=isRemoved) BOOL removed; // ivar: _removed
@property (nonatomic) BOOL scrubsWhenTappedAnywhere; // ivar: _scrubsWhenTappedAnywhere
@property (readonly) Class superclass;
@property (nonatomic, setter=setThumbSize:) CGFloat thumbSize; // ivar: _thumbSize
@property (retain, nonatomic) UIImageView *thumbView; // ivar: _thumbView


-(BOOL)_shouldTrackTouchAtPoint:(struct CGPoint )arg0 ;
-(BOOL)avkit_shouldPreventExternalGestureRecognizerAtPoint:(struct CGPoint )arg0 ;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)accessibilityLabel;
-(id)createThumbView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 thumbSize:(CGFloat)arg1 ;
-(struct CGRect )hitRect;
-(struct CGRect )thumbRectForBounds:(struct CGRect )arg0 trackRect:(struct CGRect )arg1 value:(float)arg2 ;
-(struct CGRect )trackRectForBounds:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )minimumSize;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_commonInit;
-(void)_endTracking;
-(void)_updateLayoutItem;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)didMoveToWindow;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setValue:(float)arg0 animated:(BOOL)arg1 ;


@end


#endif