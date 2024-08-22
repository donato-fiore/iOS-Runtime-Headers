// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUUSERSANDGUESTSPINCODEITEMMANAGER_H
#define HUUSERSANDGUESTSPINCODEITEMMANAGER_H

@class HFItemManager, HMAccessory, HMHome, HFPinCodeManager, HFUserItemProvider;



@interface HUUsersAndGuestsPinCodeItemManager : HFItemManager

@property (retain, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) HMHome *overrideHome; // ivar: _overrideHome
@property (retain, nonatomic) HFPinCodeManager *pinCodeManager; // ivar: _pinCodeManager
@property (retain, nonatomic) HFUserItemProvider *userItemProvider; // ivar: _userItemProvider


-(id)_buildItemModulesForHome:(id)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_homeFuture;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithPinCodeManager:(id)arg0 delegate:(id)arg1 home:(id)arg2 forAccessory:(id)arg3 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;


@end


#endif