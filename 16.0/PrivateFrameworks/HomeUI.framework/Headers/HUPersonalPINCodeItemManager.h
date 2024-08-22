// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUPERSONALPINCODEITEMMANAGER_H
#define HUPERSONALPINCODEITEMMANAGER_H

@class HFItemManager, HFStaticItem, HMHome, HFPinCodeManager;



@interface HUPersonalPINCodeItemManager : HFItemManager

@property (retain, nonatomic) HFStaticItem *createUserPINButtonItem; // ivar: _createUserPINButtonItem
@property (nonatomic) BOOL operationInProgress; // ivar: _operationInProgress
@property (readonly, nonatomic) HMHome *overrideHome; // ivar: _overrideHome
@property (retain, nonatomic) HFStaticItem *pinCodeChangeItem; // ivar: _pinCodeChangeItem
@property (readonly, nonatomic) HFPinCodeManager *pinCodeManager; // ivar: _pinCodeManager
@property (retain, nonatomic) HFStaticItem *pinCodeValueItem; // ivar: _pinCodeValueItem
@property (retain, nonatomic) HFStaticItem *removeUserPINButtonItem; // ivar: _removeUserPINButtonItem
@property (retain, nonatomic) HFStaticItem *shareButtonItem; // ivar: _shareButtonItem


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_homeFuture;
-(id)_itemsToUpdateForApplicationResignActive;
-(id)_itemsToUpdateWhenApplicationDidBecomeActive;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 item:(id)arg1 pinCodeManager:(id)arg2 home:(id)arg3 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;


@end


#endif