// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUTELEVISIONSETTINGSITEMMODULE_H
#define HUTELEVISIONSETTINGSITEMMODULE_H

@class HFItemModule, NSSet, HMAccessory, HMHome, HFItem;



@interface HUTelevisionSettingsItemModule : HFItemModule {
    NSSet *_itemProviders;
}


@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) HFItem *showPowerModeSelectionItem; // ivar: _showPowerModeSelectionItem


+(BOOL)_supportsAccessory:(id)arg0 ;
+(id)_powerModeSelectionCharacteristicForAccessory:(id)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 accessory:(id)arg2 ;
-(id)itemProviders;
-(id)showPowerModeSelection;
-(void)_createItemProviders;


@end


#endif