// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSCLOUDCALLINGDEVICELISTCONTROLLER_H
#define TPSCLOUDCALLINGDEVICELISTCONTROLLER_H

@class NSString, NSArray, PSSpecifier;
@protocol TPSCloudCallingDeviceControllerDelegate;


#import "TPSCloudCallingListController.h"
#import "TPSCloudCallingDeviceController.h"

@interface TPSCloudCallingDeviceListController : TPSCloudCallingListController <TPSCloudCallingDeviceControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TPSCloudCallingDeviceController *deviceController; // ivar: _deviceController
@property (copy, nonatomic) NSArray *deviceSwitchSpecifiers; // ivar: _deviceSwitchSpecifiers
@property (readonly, nonatomic) PSSpecifier *devicesGroupSpecifier; // ivar: _devicesGroupSpecifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PSSpecifier *mainGroupSpecifier; // ivar: _mainGroupSpecifier
@property (readonly, nonatomic) PSSpecifier *mainSwitchSpecifier; // ivar: _mainSwitchSpecifier
@property (readonly) Class superclass;


-(id)init;
-(id)isDeviceSwitchOn:(id)arg0 ;
-(id)isMainSwitchOn:(id)arg0 ;
-(id)specifiers;
-(void)cloudCallingDeviceController:(id)arg0 didChangeDevices:(id)arg1 ;
-(void)setDeviceSwitchOn:(id)arg0 specifier:(id)arg1 ;
-(void)setMainSwitchOn:(id)arg0 specifier:(id)arg1 ;


@end


#endif