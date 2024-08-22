// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCAMERAUSERPERMISSIONSSETTINGSMODULE_H
#define HUCAMERAUSERPERMISSIONSSETTINGSMODULE_H

@class NSSet, HFItem, NSString, HMHome, HFStaticItemProvider, NSArray, UIViewController, HMUser;
@protocol HUCameraSettingsModule;


#import "HUExpandableItemModule.h"
#import "HUCameraAccessLevelOptionItemProvider.h"

@interface HUCameraUserPermissionsSettingsModule : HUExpandableItemModule <HUCameraSettingsModule>

 {
    NSSet *_itemProviders;
    HFItem *_showOptionsItem;
}


@property (retain, nonatomic) HUCameraAccessLevelOptionItemProvider *accessLevelSettingItemProvider; // ivar: _accessLevelSettingItemProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger displayStyle;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HFStaticItemProvider *itemProvider; // ivar: _itemProvider
@property (retain, nonatomic) NSArray *optionItems; // ivar: _optionItems
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMUser *user; // ivar: _user
@property (readonly, nonatomic) NSUInteger userAccessLevelSetting;


-(BOOL)isItemHeader:(id)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)didSelectItem:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 user:(id)arg1 home:(id)arg2 ;
-(id)showOptionsItem;
-(id)updateUserAccessLevelSetting:(NSUInteger)arg0 ;
-(void)_buildItemProvider;
-(void)_dispatchUpdateForHome:(id)arg0 user:(id)arg1 ;


@end


#endif