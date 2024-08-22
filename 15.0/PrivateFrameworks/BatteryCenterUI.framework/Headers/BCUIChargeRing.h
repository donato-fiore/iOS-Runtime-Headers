// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCUICHARGERING_H
#define BCUICHARGERING_H

@class UIView, UIImageView, CABackdropLayer, MTVisualStylingProvider, NSString, UIImage, NSArray;
@protocol MTVisualStylingRequiring, BCUIBatteryDeviceDisplaying, UIViewControllerTransitionCoordinator;


#import "BCUIRingView.h"
#import "BCUIRingCapShadow.h"

@interface BCUIChargeRing : UIView <MTVisualStylingRequiring, BCUIBatteryDeviceDisplaying>

 {
    BCUIRingView *_baseRing;
    BCUIRingView *_chargeRing;
    BCUIRingCapShadow *_ringCapShadow;
    UIImageView *_boltMaskImageView;
    UIImageView *_boltImageView;
    CABackdropLayer *_captureBackdrop;
    UIImageView *_glyphImageView;
    MTVisualStylingProvider *_visualStylingProvider;
    MTVisualStylingProvider *_baseRingVisualStylingProvider;
}


@property (nonatomic, getter=isCharging) BOOL charging; // ivar: _charging
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEmpty) BOOL empty;
@property (retain, nonatomic) UIImage *glyph; // ivar: _glyph
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (nonatomic, getter=isLowCharge) BOOL lowCharge; // ivar: _lowCharge
@property (nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled; // ivar: _lowPowerModeEnabled
@property (copy, nonatomic) NSString *name;
@property (nonatomic) NSInteger percentCharge; // ivar: _percentCharge
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (nonatomic) CGFloat scaleFactor; // ivar: _scaleFactor
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<UIViewControllerTransitionCoordinator> *transitionCoordinator; // ivar: _transitionCoordinator


-(BOOL)_isPastThresholdForRingCapShadow;
-(BOOL)_shouldShowRingCapShadow;
-(id)_baseRing;
-(id)_chargeRing;
-(id)_ringVisualStylingProvider;
-(id)_visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_beginAutomaticallyUpdatingPrimaryVisualStylingForView:(id)arg0 observerBlock:(id)arg1 ;
-(void)_beginAutomaticallyUpdatingVisualStylingForCategory:(NSInteger)arg0 ;
-(void)_configureBoltImageViewIfNecessary;
-(void)_configureBoltMaskImageViewIfNecessary;
-(void)_configureCaptureBackdropIfNecessary;
-(void)_configureRingCapShadowIfNecessary;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_stopAutomaticallyUpdatingVisualStylingForCategory:(NSInteger)arg0 ;
-(void)_updateVisualStylingForBaseRingIfNecessary;
-(void)_updateVisualStylingForBolt;
-(void)_updateVisualStylingWithProvidersFromStylingProvider:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif