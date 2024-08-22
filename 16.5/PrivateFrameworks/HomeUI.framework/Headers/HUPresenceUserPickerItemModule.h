// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUPRESENCEUSERPICKERITEMMODULE_H
#define HUPRESENCEUSERPICKERITEMMODULE_H

@class HFItemModule, NSDictionary, HFItem, HMHome, HFPresenceEventBuilder, HFStaticItemProvider;
@protocol HUPresenceUserPickerItemModuleDelegate;


#import "HULocationDeviceManager.h"
#import "HUPresenceUserPickerItemModuleOptions.h"

@interface HUPresenceUserPickerItemModule : HFItemModule

@property (readonly, nonatomic) NSDictionary *activationOptionStateByGranularity; // ivar: _activationOptionStateByGranularity
@property (weak, nonatomic) NSObject<HUPresenceUserPickerItemModuleDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) HFItem *footerItem; // ivar: _footerItem
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) HULocationDeviceManager *locationDeviceManager; // ivar: _locationDeviceManager
@property (retain, nonatomic) HUPresenceUserPickerItemModuleOptions *options; // ivar: _options
@property (readonly, nonatomic) HFPresenceEventBuilder *presenceEventBuilder; // ivar: _presenceEventBuilder
@property (readonly, nonatomic) HFItem *singleUserSummaryItem; // ivar: _singleUserSummaryItem
@property (readonly, nonatomic) HFStaticItemProvider *staticItemProvider; // ivar: _staticItemProvider


+(id)_userItemComparator:(SEL)arg0 ;
+(id)footerSectionID;
+(id)sectionID;
-(BOOL)_canDeselectUserHandle:(id)arg0 ;
-(BOOL)_isPresenceAuthorizedForUser:(id)arg0 ;
-(BOOL)_isUserHandleSelected:(id)arg0 ;
-(BOOL)_shouldUseSingleUserStyle;
-(NSUInteger)_activationGranularityForUserItem:(id)arg0 ;
-(NSUInteger)itemTypeForItem:(id)arg0 ;
-(id)_allSelectedAndSupportedUsers;
-(id)_sortedActivationGranularities;
-(id)activationOptionItemForGranularity:(NSUInteger)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)confirmationPromptForOptionItem:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 presenceEvent:(id)arg2 options:(id)arg3 delegate:(id)arg4 ;
-(id)itemProviders;
-(id)stateForActivationOptionItem:(id)arg0 ;
-(id)stateForUserItem:(id)arg0 ;
-(void)_createItemProviders;
-(void)_resetSelectionForCustomLocation;
-(void)_updateSelected:(BOOL)arg0 forUserHandle:(id)arg1 ;
-(void)deselectUserItem:(id)arg0 ;
-(void)selectActivationOptionItem:(id)arg0 ;
-(void)selectUserItem:(id)arg0 ;
-(void)toggleExpandedForActivationOptionItem:(id)arg0 ;


@end


#endif