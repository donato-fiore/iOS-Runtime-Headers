// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUACCESSORYSETTINGSSIRIOUTPUTVOICEITEMMANAGER_H
#define HUACCESSORYSETTINGSSIRIOUTPUTVOICEITEMMANAGER_H

@class HFItemManager, HFAccessorySettingSiriLanguageAdapter, NSString, HFAccessorySettingGroupItem, HFSiriLanguageOptionsManager;
@protocol HFAccessorySettingSiriLanguageAdapterObserver, HFSiriLanguageOptionsManagerObserver;


#import "HUSiriLanguageOptionItemProvider.h"

@interface HUAccessorySettingsSiriOutputVoiceItemManager : HFItemManager <HFAccessorySettingSiriLanguageAdapterObserver, HFSiriLanguageOptionsManagerObserver>



@property (retain, nonatomic) HUSiriLanguageOptionItemProvider *accentOptionItemProvider; // ivar: _accentOptionItemProvider
@property (readonly, nonatomic) HFAccessorySettingSiriLanguageAdapter *adapter; // ivar: _adapter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HUSiriLanguageOptionItemProvider *genderOptionItemProvider; // ivar: _genderOptionItemProvider
@property (readonly, copy, nonatomic) HFAccessorySettingGroupItem *groupItem;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFSiriLanguageOptionsManager *siriLanguageOptionsManager; // ivar: _siriLanguageOptionsManager
@property (readonly) Class superclass;


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 groupItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 siriLanguageOptionsManager:(id)arg1 sourceItem:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)updateSelectionWithOptionItem:(id)arg0 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(void)dealloc;
-(void)siriLanguageAdapter:(id)arg0 availableLanguageOptionsDidChange:(id)arg1 ;
-(void)siriLanguageAdapter:(id)arg0 selectedLanguageOptionDidChange:(id)arg1 ;
-(void)siriLanguageOptionsManager:(id)arg0 availableLanguageOptionsDidChange:(id)arg1 ;
-(void)siriLanguageOptionsManager:(id)arg0 selectedLanguageOptionDidChange:(id)arg1 ;


@end


#endif