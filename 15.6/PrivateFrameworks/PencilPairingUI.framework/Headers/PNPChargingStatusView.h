// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PNPCHARGINGSTATUSVIEW_H
#define PNPCHARGINGSTATUSVIEW_H

@class UIView, UILabel, _UIBatteryView, NSLayoutConstraint, UIActivityIndicatorView, NSString;
@protocol PNPDeviceStateConfigurable, PNPChargingStatusViewDelegate;


#import "PNPDeviceState.h"
#import "PNPConnectButton.h"

@interface PNPChargingStatusView : UIView <PNPDeviceStateConfigurable>

 {
    PNPDeviceState *_deviceState;
    UIView *_contentAreaView;
    UIView *_batterySectionView;
    UILabel *_deviceNameLabel;
    _UIBatteryView *_batteryView;
    UILabel *_percentageLabel;
    PNPConnectButton *_tapToConnectButton;
    NSLayoutConstraint *_alignDeviceNameToTopConstraint;
    NSLayoutConstraint *_centerDeviceNameConstraint;
    UIActivityIndicatorView *_spinnerView;
    CGFloat _maxPillWidth;
    BOOL _didStartBatteryAnimation;
    BOOL _isFadingOutDeviceName;
}


@property (nonatomic) BOOL alphaOutName; // ivar: _alphaOutName
@property (nonatomic) NSInteger chargingState; // ivar: _chargingState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PNPChargingStatusViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) PNPDeviceState *deviceState;
@property (nonatomic) BOOL didStartBatteryTransition; // ivar: _didStartBatteryTransition
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isTransitioningToBatteryUI; // ivar: _isTransitioningToBatteryUI
@property (nonatomic) BOOL showsCharging; // ivar: _showsCharging
@property (readonly) Class superclass;


-(BOOL)_showBatteryStatus;
-(id)_batteryPercentageTextColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
// -(void)_performAnimations:(id)arg0 completion:(unk)arg1  ;
-(void)_setAndAnimateChargingStateToConnecting;
-(void)beginPairing;
-(void)layoutSubviews;
-(void)updateChargingState:(NSInteger)arg0 ;
-(void)updateConstraints;


@end


#endif