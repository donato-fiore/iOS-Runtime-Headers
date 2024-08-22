// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUHOMESTATUSDETAILSITEMMANAGER_H
#define HUHOMESTATUSDETAILSITEMMANAGER_H

@class HFItemManager, NSMutableDictionary, NSArray, NSMutableSet, HFNoRemoteAccessStatusDetailsItem, HFResidentDeviceStatusDetailsItemProvider;


#import "HUFirmwareUpdateItemProvider.h"
#import "HUSoftwareUpdateInfoItemProvider.h"

@interface HUHomeStatusDetailsItemManager : HFItemManager

@property (retain, nonatomic) NSMutableDictionary *cachedRoomNamesByIdentifier; // ivar: _cachedRoomNamesByIdentifier
@property (retain, nonatomic) NSArray *cachedSectionIdentifiers; // ivar: _cachedSectionIdentifiers
@property (retain, nonatomic) HUFirmwareUpdateItemProvider *firmwareUpdateItemProvider; // ivar: _firmwareUpdateItemProvider
@property (retain, nonatomic) NSMutableSet *minimumPriorityItemTuples; // ivar: _minimumPriorityItemTuples
@property (retain, nonatomic) HFNoRemoteAccessStatusDetailsItem *noRemoteAccessItem; // ivar: _noRemoteAccessItem
@property (retain, nonatomic) NSMutableSet *representedHomeKitObjects; // ivar: _representedHomeKitObjects
@property (retain, nonatomic) HFResidentDeviceStatusDetailsItemProvider *residentDeviceStatusItemProvider; // ivar: _residentDeviceStatusItemProvider
@property (retain, nonatomic) HUSoftwareUpdateInfoItemProvider *softwareUpdateItemProvider; // ivar: _softwareUpdateItemProvider


-(BOOL)_shouldHideHomeKitObject:(id)arg0 ;
-(BOOL)_shouldUseSeparateSectionForItem:(id)arg0 ;
-(BOOL)_shouldUseSoftwareUpdateSectionForItem:(id)arg0 ;
-(BOOL)hasSymptomsHandlerForMediaProfileContainer:(id)arg0 ;
-(BOOL)isDisplayingRoomLevelStatus;
-(BOOL)isFirmwareUpdateStatusItem;
-(BOOL)isLowBatteryStatusItem;
-(BOOL)isNoResponseStatusItem;
-(BOOL)isResidentDeviceStatusItem;
-(BOOL)shouldHideItem:(id)arg0 ;
-(BOOL)shouldReloadItemProvidersOnSourceItemChange;
-(BOOL)shouldShowAccessoryTiles;
-(BOOL)shouldShowRoomNameForItem:(id)arg0 ;
-(BOOL)shouldShowServiceGroupTiles;
-(BOOL)shouldUseTitleDescriptionStyleForItem:(id)arg0 ;
-(NSInteger)_effectivePriorityForItem:(id)arg0 ;
-(NSUInteger)_numberOfSections;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_comparatorForSectionIdentifier:(SEL)arg0 ;
-(id)_identifierForSection:(NSUInteger)arg0 ;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)_minimumPriorityNumberForItem:(id)arg0 ;
-(id)_roomForItem:(id)arg0 ;
-(id)_sectionComparator:(SEL)arg0 ;
-(id)_sectionIdentifierForItem:(id)arg0 ;
-(id)_separateSectionIdentifierForItem:(id)arg0 ;
-(id)_titleForSectionWithIdentifier:(id)arg0 ;
-(id)currentSectionIdentifiersSnapshot;
-(id)matchingItemForHomeKitObject:(id)arg0 ;
-(id)statusItem;
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg0 ;
-(void)_willUpdateSections;
-(void)maintainMinimumPriorityForItem:(id)arg0 ;
-(void)resetItemPrioritiesToDefaults;


@end


#endif