// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGBUTTONVIEW_H
#define PGBUTTONVIEW_H

@class NSString, UIImage, UIFont, UIViewPropertyAnimator, UIPointerInteraction;
@protocol UIPointerInteractionDelegate, BSInvalidatable, PGButtonViewDelegate;


#import "PGMaterialView.h"
#import "_PGButton.h"

@interface PGButtonView : PGMaterialView <UIPointerInteractionDelegate>

 {
    CGFloat _currentGlyphSize;
    NSString *_currentGlyphImageName;
    UIImage *_currentCustomImage;
    id<BSInvalidatable> *_preventAutoHideOfControlsAssertion;
}


@property (retain, nonatomic) _PGButton *actualButton; // ivar: _actualButton
@property (nonatomic, getter=isCircular) BOOL circular; // ivar: _circular
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PGButtonViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) UIFont *font;
@property (nonatomic) CGFloat glyphSize; // ivar: _glyphSize
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewPropertyAnimator *highlightAnimator; // ivar: _highlightAnimator
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (weak, nonatomic) UIPointerInteraction *pointerInteraction; // ivar: _pointerInteraction
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *systemImageName; // ivar: _systemImageName
@property (copy, nonatomic) NSString *text;


+(Class)layerClass;
+(id)buttonWithDelegate:(id)arg0 ;
+(id)disabledTintColor;
+(id)enabledTintColor;
-(BOOL)_shouldHitTest;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)accessibilityIdentifier;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_handleDragEnter:(id)arg0 ;
-(void)_handleDragExit:(id)arg0 ;
-(void)_handleTouchDown:(id)arg0 ;
-(void)_handleTouchUpInside:(id)arg0 ;
-(void)_handleTouchUpOrCancel:(id)arg0 ;
-(void)_updateForCircularAppearanceIfNeeded;
-(void)_updateGlyphConfigurationIfNeeded;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setAccessibilityIdentifier:(id)arg0 ;
-(void)sizeToFit;


@end


#endif