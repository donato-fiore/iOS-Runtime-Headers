// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUACCESSORYSETTINGSSIRIRECOGNITIONLANGUAGEITEMMANAGER_H
#define HUACCESSORYSETTINGSSIRIRECOGNITIONLANGUAGEITEMMANAGER_H

@class HFItemManager, HFItem<HFServiceLikeItem>, HFAccessorySettingSiriLanguageAdapter, NSString, HFAccessorySettingGroupItem, HFSiriLanguageOptionsManager;
@protocol HFAccessorySettingSiriLanguageAdapterObserver, HFSiriLanguageOptionsManagerObserver;


#import "HUSiriLanguageOptionItemProvider.h"

@interface HUAccessorySettingsSiriRecognitionLanguageItemManager : HFItemManager <HFAccessorySettingSiriLanguageAdapterObserver, HFSiriLanguageOptionsManagerObserver>



@property (retain, nonatomic) HFItem<HFServiceLikeItem> *accessoryItem; // ivar: _accessoryItem
@property (readonly, nonatomic) HFAccessorySettingSiriLanguageAdapter *adapter; // ivar: _adapter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) HFAccessorySettingGroupItem *groupItem;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUSiriLanguageOptionItemProvider *optionItemProvider; // ivar: _optionItemProvider
@property (readonly, nonatomic) HFSiriLanguageOptionsManager *siriLanguageOptionsManager;
@property (readonly) Class superclass;


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 accessorySettingItem:(id)arg1 accessoryItem:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 groupItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)updateSelectionWithOptionItem:(id)arg0 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(void)siriLanguageAdapter:(id)arg0 availableLanguageOptionsDidChange:(id)arg1 ;
-(void)siriLanguageAdapter:(id)arg0 selectedLanguageOptionDidChange:(id)arg1 ;
-(void)siriLanguageOptionsManager:(id)arg0 availableLanguageOptionsDidChange:(id)arg1 ;
-(void)siriLanguageOptionsManager:(id)arg0 selectedLanguageOptionDidChange:(id)arg1 ;


@end


#endif