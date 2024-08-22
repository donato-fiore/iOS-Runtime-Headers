// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HULOCATIONEVENTEDITORSUMMARYITEMMANAGER_H
#define HULOCATIONEVENTEDITORSUMMARYITEMMANAGER_H

@class HFItemManager, NSString, HFItem;
@protocol HUPresenceUserPickerItemModuleDelegate;


#import "HUTriggerConditionEditorItemModule.h"
#import "HUEventUIFlow.h"
#import "HUPresenceUserPickerItemModule.h"

@interface HULocationEventEditorSummaryItemManager : HFItemManager <HUPresenceUserPickerItemModuleDelegate>



@property (readonly, nonatomic) HUTriggerConditionEditorItemModule *conditionEditorModule; // ivar: _conditionEditorModule
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HUEventUIFlow *flow; // ivar: _flow
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *locationItem; // ivar: _locationItem
@property (readonly) Class superclass;
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
-(id)_buildItemModulesForHome:(id)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_userPickerOptions;
-(id)home;
-(id)initWithDelegate:(id)arg0 flow:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)locationEventRegion;
-(void)updateLocationEventWithRegion:(id)arg0 ;
-(void)userPickerModule:(id)arg0 didUpdatePresenceEvent:(id)arg1 ;


@end


#endif