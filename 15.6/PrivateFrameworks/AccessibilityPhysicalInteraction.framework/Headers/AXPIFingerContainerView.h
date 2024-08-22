// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXPIFINGERCONTAINERVIEW_H
#define AXPIFINGERCONTAINERVIEW_H

@class UIView, NSMutableArray, _UILumaTrackingBackdropView;
@protocol _UILumaTrackingBackdropViewDelegate, AXPIFingerAppearanceDelegate;


#import "AXPIPinchChainView.h"

@interface AXPIFingerContainerView : UIView <_UILumaTrackingBackdropViewDelegate>

 {
    NSMutableArray *_fingerViews;
    UIView *_viewForAnimatingAlpha;
    AXPIPinchChainView *_pinchChainView;
    _UILumaTrackingBackdropView *_pointerLumaMeasurementView;
}


@property (weak, nonatomic) NSObject<AXPIFingerAppearanceDelegate> *appearanceDelegate; // ivar: _appearanceDelegate
@property (readonly, nonatomic) BOOL isPinchChainVisible;
@property (nonatomic) BOOL shouldAnimatePress; // ivar: _shouldAnimatePress
@property (nonatomic) BOOL shouldSuppressFingerVisuals; // ivar: _shouldSuppressFingerVisuals


-(NSUInteger)indexOfFingerAtPoint:(struct CGPoint )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )rectForFingersAtPoints:(id)arg0 ;
-(void)_updateLumaMeasurementViewFrame;
-(void)_updatePinchChainAppearance;
-(void)_updateSystemFiltersWithBackgroundLuminanceLevel:(NSUInteger)arg0 ;
-(void)animateToTapWithDuration:(CGFloat)arg0 ;
-(void)backgroundLumaView:(id)arg0 didTransitionToLevel:(NSUInteger)arg1 ;
-(void)cancelCircularProgressAnimation;
-(void)clearAllFingersAnimated:(BOOL)arg0 endPointForAnimation:(struct CGPoint )arg1 ;
-(void)performCircularProgressAnimationOnFingersWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)setPressedState:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showFingerModels:(id)arg0 animated:(BOOL)arg1 startPointForAnimation:(struct CGPoint )arg2 shouldShowPinchChain:(BOOL)arg3 ;
-(void)updateWithFingerModel:(id)arg0 forFingerAtIndex:(NSUInteger)arg1 ;


@end


#endif