// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PNPPAIRINGVIEW_H
#define PNPPAIRINGVIEW_H

@class UIView, NSString;
@protocol PNPWizardViewDelegatePrivate, PNPDeviceStateConfigurable, PNPChargingStatusViewHosting, PNPPairingViewDelegate;


#import "PNPDeviceState.h"
#import "PNPPencilView.h"
#import "PNPChargingStatusView.h"
#import "PNPWizardViewController.h"

@interface PNPPairingView : UIView <PNPWizardViewDelegatePrivate, PNPDeviceStateConfigurable, PNPChargingStatusViewHosting>

 {
    PNPDeviceState *_deviceState;
    PNPPencilView *_pencilView;
    BOOL _finishedWizardTransition;
    CGRect _pencilSpinningRect;
}


@property (retain, nonatomic) PNPChargingStatusView *chargingStatusView; // ivar: _chargingStatusView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PNPPairingViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) PNPDeviceState *deviceState;
@property (nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PNPPencilView *pencilView;
@property (nonatomic) BOOL shouldShowWhatsNew; // ivar: _shouldShowWhatsNew
@property (nonatomic) BOOL showWizardContents; // ivar: _showWizardContents
@property (nonatomic) BOOL showsChargingStatusView; // ivar: _showsChargingStatusView
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) PNPWizardViewController *wizardViewController; // ivar: _wizardViewController


-(id)backgroundColorForWizardController:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGAffineTransform )_pencilTransformForState:(NSUInteger)arg0 deviceState:(id)arg1 ;
-(struct CGSize )_intrinsicContentSizeForState:(NSUInteger)arg0 deviceState:(id)arg1 ;
-(struct CGSize )_pencilSizeForState:(NSUInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;
-(void)prepareForTransitionToWizard;
-(void)transitionToWizard;
-(void)unhideWizardIfNecessary;
-(void)wizardTransitionFinished;
-(void)wizardViewRequestsDismiss:(id)arg0 ;


@end


#endif