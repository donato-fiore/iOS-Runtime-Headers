// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPAYMENTWEBSERVICESTANDALONETARGETDEVICE_H
#define NPKPAYMENTWEBSERVICESTANDALONETARGETDEVICE_H

@class PKPaymentWebServiceTargetDevice;
@protocol NPKPaymentWebServiceStandaloneTargetDeviceDelegate;



@interface NPKPaymentWebServiceStandaloneTargetDevice : PKPaymentWebServiceTargetDevice

@property (weak, nonatomic) NSObject<NPKPaymentWebServiceStandaloneTargetDeviceDelegate> *delegate; // ivar: _delegate


+(id)standalonePaymentWebServiceWithDelegate:(id)arg0 ;
-(void)endRequiringUpgradedPasscodeIfNecessary;
-(void)enforceUpgradedPasscodePolicyWithCompletion:(id)arg0 ;
-(void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)arg0 ;


@end


#endif