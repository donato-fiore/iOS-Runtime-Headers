// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDLENSVIEW_H
#define EDLENSVIEW_H

@class UIView, CADisplayLink, UIPointerInteraction, NSString;
@protocol UIDragInteractionDelegate, UIPointerInteractionDelegate, EDLensViewDelegate;


#import "EDGridView.h"
#import "EDColorAnalyzer.h"

@interface EDLensView : UIView <UIDragInteractionDelegate, UIPointerInteractionDelegate>

 {
    UIView *_hoverColorCenterView;
    UIView *_hoverColorRingView;
    EDGridView *_gridView;
    UIView *_screenshotSurfaceView;
    UIView *_ringBorderView;
    CADisplayLink *_displayLink;
    EDColorAnalyzer *_colorAnalyzer;
    EDColor _hoverColor;
    CGFloat _hoverColorBrightness;
    UIPointerInteraction *_pointerInteraction;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic) CGPoint centerOffsetAtTouchDown; // ivar: _centerOffsetAtTouchDown
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EDLensViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL floatingMode; // ivar: _floatingMode
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (nonatomic) CGPoint lastPosition; // ivar: _lastPosition
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(BOOL)_isScreenScaleEven;
-(BOOL)isAccessibilityElement;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(NSInteger)_lensPosition;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)dragInteraction:(id)arg0 itemsForAddingToSession:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragItemsForInteraction:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGPoint )_lensViewLocalCenter;
-(void)_displayLinkFired;
-(void)_layoutStaticElements;
-(void)_updateLastPosition:(struct CGPoint )arg0 ;
-(void)layoutSubviews;
-(void)presentAtLocation:(struct CGPoint )arg0 ;
-(void)selectColor;
-(void)updateCenterOffsetAtTouchDown:(struct CGPoint )arg0 ;
-(void)updateLensViewWithEvent:(id)arg0 ;


@end


#endif