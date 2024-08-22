// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HULOCATIONTRIGGEREDITORSUMMARYITEMMANAGER_H
#define HULOCATIONTRIGGEREDITORSUMMARYITEMMANAGER_H

@class HFItemManager, NSString, HFItem, HFEventTriggerBuilder;
@protocol HUPresenceUserPickerItemModuleDelegate;


#import "HUTriggerConditionEditorItemModule.h"
#import "HUPresenceUserPickerItemModule.h"

@interface HULocationTriggerEditorSummaryItemManager : HFItemManager <HUPresenceUserPickerItemModuleDelegate>



@property (readonly, nonatomic) HUTriggerConditionEditorItemModule *conditionEditorModule; // ivar: _conditionEditorModule
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *locationItem; // ivar: _locationItem
@property (readonly) Class superclass;
@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder
@property (readonly, nonatomic) HUPresenceUserPickerItemModule *userPickerModule; // ivar: _userPickerModule
@property (retain, nonatomic) HFItem *usersInstructionsItem; // ivar: _usersInstructionsItem


+(id)locationSectionID;
+(id)usersHeaderSectionID;
+(id)usersListFooterSectionID;
+(id)usersListSectionID;
-(BOOL)_canEditLocation;
-(BOOL)_hasCustomLocation;
-(BOOL)canAddRegionToTriggerBuilder;
-(BOOL)canChangeLocation;
-(BOOL)isInstructionsItem:(id)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_userPickerOptions;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 triggerBuilder:(id)arg1 ;
-(id)locationEventRegion;
-(void)updateLocationEventWithRegion:(id)arg0 ;
-(void)userPickerModule:(id)arg0 didUpdatePresenceEvent:(id)arg1 ;


@end


#endif