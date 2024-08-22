// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUPLAYBACKINFLUENCESITEMMANAGER_H
#define HUPLAYBACKINFLUENCESITEMMANAGER_H

@class HFItemManager, NSArray, HFStaticItem, HFAccessorySettingItem, HFSiriLanguageOptionsManager;


#import "HUHomeKitAccessorySettingsItemModule.h"

@interface HUPlaybackInfluencesItemManager : HFItemManager

@property (retain, nonatomic) HUHomeKitAccessorySettingsItemModule *accessorySettingsModule; // ivar: _accessorySettingsModule
@property (readonly, nonatomic) NSArray *playbackInfluencesOptionItems; // ivar: _playbackInfluencesOptionItems
@property (retain, nonatomic) HFStaticItem *selectedItem; // ivar: _selectedItem
@property (readonly, nonatomic) HFAccessorySettingItem *settingItem;
@property (retain, nonatomic) HFSiriLanguageOptionsManager *siriLanguageOptionsManager; // ivar: _siriLanguageOptionsManager
@property (retain, nonatomic) HFStaticItem *useListeningHistoryItem; // ivar: _useListeningHistoryItem


-(BOOL)playbackInfluencesFollowUser;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 module:(id)arg1 homeKitAccessorySettingItem:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 settingItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)playbackInfluencesSetting;
-(id)updateUseListeningHistorySetting:(BOOL)arg0 ;


@end


#endif