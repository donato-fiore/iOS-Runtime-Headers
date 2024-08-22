// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUPINCODEDETAILSITEMMANAGER_H
#define HUPINCODEDETAILSITEMMANAGER_H

@class HFItemManager, HFStaticItem, NSString, HFAccessoryItemProvider, HMHome, HFPinCodeManager, HFTransformItemProvider;
@protocol HFPinCodeManagerObserver;



@interface HUPinCodeDetailsItemManager : HFItemManager <HFPinCodeManagerObserver>



@property (retain, nonatomic) HFStaticItem *addOrShowHomeKeyItem; // ivar: _addOrShowHomeKeyItem
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HFStaticItem *deleteGuestPINCodeItem; // ivar: _deleteGuestPINCodeItem
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFAccessoryItemProvider *locksItemProvider; // ivar: _locksItemProvider
@property (nonatomic) BOOL operationInProgress; // ivar: _operationInProgress
@property (readonly, nonatomic) HMHome *overrideHome; // ivar: _overrideHome
@property (retain, nonatomic) HFStaticItem *personalPINCodeItem; // ivar: _personalPINCodeItem
@property (retain, nonatomic) HFStaticItem *pinCodeChangeItem; // ivar: _pinCodeChangeItem
@property (retain, nonatomic) HFStaticItem *pinCodeLabelItem; // ivar: _pinCodeLabelItem
@property (readonly, nonatomic) HFPinCodeManager *pinCodeManager; // ivar: _pinCodeManager
@property (retain, nonatomic) HFStaticItem *pinCodeRestoreAccessItem; // ivar: _pinCodeRestoreAccessItem
@property (retain, nonatomic) HFStaticItem *pinCodeValueItem; // ivar: _pinCodeValueItem
@property (readonly) Class superclass;
@property (retain, nonatomic) HFTransformItemProvider *transformedLocksItemProvider; // ivar: _transformedLocksItemProvider


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_homeFuture;
-(id)_itemsToUpdateWhenApplicationDidBecomeActive;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 pinCodeManager:(id)arg2 home:(id)arg3 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(void)pinCodeManagerDidUpdate:(id)arg0 pinCodes:(id)arg1 ;


@end


#endif