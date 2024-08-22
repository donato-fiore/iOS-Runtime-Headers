// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HACCSTATUSVIEW_H
#define HACCSTATUSVIEW_H

@class UIControl, NSNumberFormatter, BCBatteryDeviceController, BCBatteryDevice, NSString, UIImageView, UILabel;
@protocol BCBatteryDeviceObserving, HACCContentModule, HACCContentModuleDelegate;


#import "HACCBatteryGroupView.h"

@interface HACCStatusView : UIControl <BCBatteryDeviceObserving, HACCContentModule>

 {
    NSNumberFormatter *_numberFormatter;
}


@property (retain, nonatomic) BCBatteryDeviceController *batteryController; // ivar: _batteryController
@property (retain) BCBatteryDevice *batteryDevice; // ivar: _batteryDevice
@property (retain, nonatomic) HACCBatteryGroupView *batteryView; // ivar: _batteryView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HACCContentModuleDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (nonatomic) NSUInteger module; // ivar: module
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)_backgroundUpdateQueue;
-(BOOL)enabled;
-(BOOL)isAccessibilityElement;
-(id)_productIdentifierFromBluetoothRoute:(id)arg0 ;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)contentValue;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)liveListenImageNameFromBluetoothRoute:(id)arg0 ;
-(struct CGSize )liveListenImageSize:(id)arg0 forProductID:(id)arg1 ;
-(void)buttonTapped:(id)arg0 ;
-(void)connectedDevicesDidChange:(id)arg0 ;
-(void)updateConstraints;
-(void)updateValue;


@end


#endif