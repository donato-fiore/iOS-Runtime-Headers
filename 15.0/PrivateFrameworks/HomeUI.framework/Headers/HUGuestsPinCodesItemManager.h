// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUGUESTSPINCODESITEMMANAGER_H
#define HUGUESTSPINCODESITEMMANAGER_H

@class HFItemManager, HFPinCodeManager;



@interface HUGuestsPinCodesItemManager : HFItemManager

@property (retain, nonatomic) HFPinCodeManager *pinCodeManager; // ivar: _pinCodeManager


-(id)_buildItemModulesForHome:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithPinCodeManager:(id)arg0 delegate:(id)arg1 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;


@end


#endif