// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PNPAIRPLANEMODEVIEW_H
#define PNPAIRPLANEMODEVIEW_H

@class UIView, UILabel, UIButton, NSString;
@protocol PNPDeviceStateConfigurable, PNPAirplaneModeBluetoothViewDelegate;


#import "PNPDeviceState.h"

@interface PNPAirplaneModeView : UIView <PNPDeviceStateConfigurable>

 {
    PNPDeviceState *_deviceState;
    UIView *_contentAreaView;
    UILabel *_deviceNameLabel;
    UIButton *_turnOnBluetoothButton;
    NSString *_currentString;
    NSString *_pencilStatusString;
}


@property (weak, nonatomic) NSObject<PNPAirplaneModeBluetoothViewDelegate> *bluetoothDelegate; // ivar: _bluetoothDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) PNPDeviceState *deviceState;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_applePencilOff;
-(id)_applePencilOn;
-(id)_bluetoothOnString;
-(id)_turnOnString;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_configureConstraints;
-(void)layoutSubviews;
-(void)turnOnBluetooth:(id)arg0 ;


@end


#endif