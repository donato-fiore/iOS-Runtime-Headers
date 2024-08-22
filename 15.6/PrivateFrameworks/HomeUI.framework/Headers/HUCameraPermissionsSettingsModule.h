// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCAMERAPERMISSIONSSETTINGSMODULE_H
#define HUCAMERAPERMISSIONSSETTINGSMODULE_H

@class NSString, HFItemProvider, HMHome, NSSet, UIViewController, NSArray;
@protocol HUCameraSettingsModule;


#import "HUExpandableItemContainerModule.h"

@interface HUCameraPermissionsSettingsModule : HUExpandableItemContainerModule <HUCameraSettingsModule>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger displayStyle; // ivar: _displayStyle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItemProvider *headerItemProvider; // ivar: _headerItemProvider
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSSet *itemProviders; // ivar: _itemProviders
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *userSectionModules; // ivar: _userSectionModules


-(BOOL)isItemHeader:(id)arg0 ;
-(NSUInteger)accessModeSettingForUser:(id)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)didSelectItem:(id)arg0 ;
-(id)expandableModules;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 displayStyle:(NSUInteger)arg2 ;
-(void)_buildItemProviders;


@end


#endif