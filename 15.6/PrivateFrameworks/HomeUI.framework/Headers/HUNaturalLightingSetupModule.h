// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUNATURALLIGHTINGSETUPMODULE_H
#define HUNATURALLIGHTINGSETUPMODULE_H

@class HFItemModule, NSSet, HFAccessoryItemProvider, NSNumber, HMHome, HFServiceGroupItemProvider, HFServiceItemProvider;
@protocol HUNaturalLightingSetupModuleDelegate;



@interface HUNaturalLightingSetupModule : HFItemModule {
    NSSet *_itemProviders;
}


@property (retain, nonatomic) HFAccessoryItemProvider *accessoryItemProvider; // ivar: _accessoryItemProvider
@property (retain, nonatomic) NSNumber *defaultSelectedValue; // ivar: _defaultSelectedValue
@property (weak, nonatomic) NSObject<HUNaturalLightingSetupModuleDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) id *filter; // ivar: _filter
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HFServiceGroupItemProvider *serviceGroupItemProvider; // ivar: _serviceGroupItemProvider
@property (retain, nonatomic) HFServiceItemProvider *serviceItemProvider; // ivar: _serviceItemProvider


+(BOOL)showNaturalLightingContainingHomeKitObject:(id)arg0 ;
-(id)_buildItemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)commitSelectedItems;
-(id)initWithHome:(id)arg0 itemUpdater:(id)arg1 ;
-(id)itemProviders;
-(id)selectedItems;
-(void)toggleSelectedForItem:(id)arg0 ;


@end


#endif