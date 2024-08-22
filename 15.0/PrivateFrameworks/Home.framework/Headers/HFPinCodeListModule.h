// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFPINCODELISTMODULE_H
#define HFPINCODELISTMODULE_H

@class NSSet, HMAccessory, HMHome;
@protocol HFItemSectionAccessoryButtonHeaderDelegate;


#import "HFItemModule.h"
#import "HFStaticItem.h"
#import "HFPinCodeItemProvider.h"
#import "HFPinCodeManager.h"

@interface HFPinCodeListModule : HFItemModule {
    NSSet *_itemProviders;
}


@property (retain, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) HFStaticItem *addPinCodeItem; // ivar: _addPinCodeItem
@property (weak, nonatomic) NSObject<HFItemSectionAccessoryButtonHeaderDelegate> *editButtonHeaderDelegate; // ivar: _editButtonHeaderDelegate
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) NSUInteger listType; // ivar: _listType
@property (retain, nonatomic) HFPinCodeItemProvider *pinCodeItemProvider; // ivar: _pinCodeItemProvider
@property (readonly, nonatomic) HFPinCodeManager *pinCodeManager; // ivar: _pinCodeManager
@property (retain, nonatomic) HFStaticItem *revokePinCodeItem; // ivar: _revokePinCodeItem


-(id)_sectionIdentifier;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 pinCodeManager:(id)arg1 listType:(NSUInteger)arg2 home:(id)arg3 forAccessory:(id)arg4 ;
-(id)itemProviders;


@end


#endif