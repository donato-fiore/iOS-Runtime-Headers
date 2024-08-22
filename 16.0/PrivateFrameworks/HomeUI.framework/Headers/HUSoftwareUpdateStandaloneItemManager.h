// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSOFTWAREUPDATESTANDALONEITEMMANAGER_H
#define HUSOFTWAREUPDATESTANDALONEITEMMANAGER_H

@class HFItemManager, HFItem, NSString, NSSet, HMHome, NAFuture;
@protocol HFHomeObserver;


#import "HUSoftwareUpdateFetchItem.h"
#import "HUFirmwareUpdateItemModule.h"
#import "HUSoftwareUpdateItemModule.h"
#import "HUSoftwareUpdateAllItem.h"

@interface HUSoftwareUpdateStandaloneItemManager : HFItemManager <HFHomeObserver>



@property (retain, nonatomic) HFItem *autoUpdateItem; // ivar: _autoUpdateItem
@property (retain, nonatomic) HFItem *autoUpdateThirdPartyItem; // ivar: _autoUpdateThirdPartyItem
@property (retain, nonatomic) HFItem *betaUpdatesItem; // ivar: _betaUpdatesItem
@property (retain, nonatomic) HFItem *carrySettingsItem; // ivar: _carrySettingsItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *devices; // ivar: _devices
@property (retain, nonatomic) HUSoftwareUpdateFetchItem *fetchItem; // ivar: _fetchItem
@property (retain, nonatomic) HUFirmwareUpdateItemModule *firmwareUpdateModule; // ivar: _firmwareUpdateModule
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *homeUpdateBannerItem; // ivar: _homeUpdateBannerItem
@property (retain, nonatomic) HMHome *overrideHome; // ivar: _overrideHome
@property (retain, nonatomic) NAFuture *softwareUpdateFetchFuture; // ivar: _softwareUpdateFetchFuture
@property (retain, nonatomic) HUSoftwareUpdateItemModule *softwareUpdateModule; // ivar: _softwareUpdateModule
@property (readonly) Class superclass;
@property (retain, nonatomic) HUSoftwareUpdateAllItem *updateAllItem; // ivar: _updateAllItem
@property (retain, nonatomic) HFItem *updatedRecentlyItem; // ivar: _updatedRecentlyItem


-(id)_buildItemModulesForHome:(id)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_homeFuture;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)_transformedUpdateOutcomeForItem:(id)arg0 proposedOutcome:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 home:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)triggerSoftwareUpdateFetch;
-(void)addHomeSetupSuccessBlock:(id)arg0 ;
-(void)dealloc;
-(void)home:(id)arg0 didUpdateAutomaticSoftwareUpdateEnabled:(BOOL)arg1 ;
-(void)home:(id)arg0 didUpdateAutomaticThirdPartyAccessorySoftwareUpdateEnabled:(BOOL)arg1 ;
-(void)homeManager:(id)arg0 didUpdateHH2State:(BOOL)arg1 ;


@end


#endif