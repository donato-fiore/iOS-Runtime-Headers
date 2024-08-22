// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLGRIDCOLLECTIONITEMMANAGER_H
#define HUQUICKCONTROLGRIDCOLLECTIONITEMMANAGER_H

@class HFItemManager, HFAccessoryControlItem, NSNumber, HFItemProvider, NSMapTable, NSSet, NSString, NSArray, HFServiceItemProvider, HFItem<HFServiceLikeItem>;
@protocol HFHomeKitAccessorySettingsDataSourceDelegate, HUQuickControlCollectionItemManaging;



@interface HUQuickControlGridCollectionItemManager : HFItemManager <HFHomeKitAccessorySettingsDataSourceDelegate, HUQuickControlCollectionItemManaging>



@property (copy, nonatomic) HFAccessoryControlItem *accessoryControlItem; // ivar: _accessoryControlItem
@property (retain, nonatomic) NSNumber *airPlayEnabledSettingNumberValue; // ivar: _airPlayEnabledSettingNumberValue
@property (retain, nonatomic) HFItemProvider *controlItemProvider; // ivar: _controlItemProvider
@property (retain, nonatomic) NSMapTable *controlItemToQuickControlContextTable; // ivar: _controlItemToQuickControlContextTable
@property (retain, nonatomic) NSSet *controlItems; // ivar: _controlItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRTL; // ivar: _isRTL
@property (nonatomic) BOOL isSpeakerAccessory; // ivar: _isSpeakerAccessory
@property (retain, nonatomic) NSArray *mediaControlItems; // ivar: _mediaControlItems
@property (readonly, nonatomic) HFItemProvider *overflowItemProvider; // ivar: _overflowItemProvider
@property (retain, nonatomic) HFServiceItemProvider *serviceItemProvider; // ivar: _serviceItemProvider
@property (retain, nonatomic) HFItem<HFServiceLikeItem> *sourceServiceLikeItem; // ivar: _sourceServiceLikeItem
@property (readonly) Class superclass;
@property (readonly, nonatomic) HFItemProvider *supplementaryItemProvider; // ivar: _supplementaryItemProvider


+(BOOL)isPrimaryOrBinaryStateControlItem:(id)arg0 ;
+(NSUInteger)preferredControlForControlItem:(id)arg0 allControlItems:(id)arg1 isSupplementary:(BOOL)arg2 ;
+(NSUInteger)specialCaseSectionSortingForControlItem:(id)arg0 quickControlContext:(id)arg1 fromControlItems:(id)arg2 primaryServiceType:(id)arg3 ;
+(id)serviceItemComparator:(SEL)arg0 ;
-(BOOL)_catchAllLayoutForGridViewProfiles:(id)arg0 supplementaryViewProfiles:(id)arg1 ;
-(BOOL)_shouldDisableOptionalDataDuringFastInitialUpdate;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_composeIdentifierForService:(id)arg0 section:(NSUInteger)arg1 ;
-(id)_findAndRemoveMediaAlarmsAndTimerItemsFromSection:(id)arg0 ;
-(id)_findAndRemoveMediaControlItemsFromSection:(id)arg0 ;
-(id)_generateQuickControlGroupContextForControlItems:(id)arg0 ;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)_mediaAlarmsAndTimerItemsFromControlItems:(id)arg0 ;
-(id)configuration;
-(id)gridItemProvider;
-(id)headerAccessoryButtonTargetForSection:(NSUInteger)arg0 ;
-(id)headerAccessoryButtonTitleForSection:(NSUInteger)arg0 ;
-(id)initWithDelegate:(id)arg0 controlItems:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)quickControlContextForItem:(id)arg0 ;
-(id)sourceItem;
-(id)titleForItem:(id)arg0 ;
-(void)_addMediaAlarmsAndTimers:(id)arg0 toSections:(id)arg1 ;
-(void)tearDown;
-(void)updateSettingValue:(id)arg0 forKeyPath:(id)arg1 ;


@end


#endif