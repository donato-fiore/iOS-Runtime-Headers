// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUPERSONALREQUESTSDEVICESITEMMODULE_H
#define HUPERSONALREQUESTSDEVICESITEMMODULE_H

@class HFItemModule, HMAssistantAccessControl, NAFuture, NSString, HFItem, HMHome, NSSet, NSMapTable, NSArray, HFItemProvider, HFUserItem;
@protocol HULocationDeviceManagerObserver, HFSiriLanguageOptionsManagerObserver, HFMediaProfileContainer;


#import "HULocationDeviceManager.h"

@interface HUPersonalRequestsDevicesItemModule : HFItemModule <HULocationDeviceManagerObserver, HFSiriLanguageOptionsManagerObserver>



@property (readonly, nonatomic) HMAssistantAccessControl *accessControl;
@property (readonly, nonatomic) NAFuture *activeLocationDeviceFuture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HFItem *footerItem; // ivar: _footerItem
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSSet *itemProviders; // ivar: _itemProviders
@property (readonly, nonatomic) HULocationDeviceManager *locationDeviceManager; // ivar: _locationDeviceManager
@property (retain, nonatomic) NSMapTable *mediaProfileToLanguageOptionsManagerMap; // ivar: _mediaProfileToLanguageOptionsManagerMap
@property (nonatomic) BOOL onlyShowDeviceSwitches; // ivar: _onlyShowDeviceSwitches
@property (copy, nonatomic) NSArray *personalRequestsDevices;
@property (retain, nonatomic) HFItemProvider *personalRequestsMediaAccessoriesProvider; // ivar: _personalRequestsMediaAccessoriesProvider
@property (retain, nonatomic) HFItemProvider *personalRequestsOtherAccessoriesProvider; // ivar: _personalRequestsOtherAccessoriesProvider
@property (readonly, nonatomic) HFItem *personalRequestsToggleItem; // ivar: _personalRequestsToggleItem
@property (readonly, nonatomic) HFUserItem *sourceItem; // ivar: _sourceItem
@property (retain, nonatomic) NSObject<HFMediaProfileContainer> *sourceMediaProfileContainer; // ivar: _sourceMediaProfileContainer
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *supportedMULanguageCodes; // ivar: _supportedMULanguageCodes


-(BOOL)_showPersonalRequestsItems;
-(BOOL)_voiceRecognitionLanguage:(id)arg0 matchesMultiUserCapableAccessory:(id)arg1 ;
-(BOOL)isCurrentIOSDeviceOnSameVoiceRecognitionLanguageAsPersonalRequestsDeviceForItem:(id)arg0 ;
-(BOOL)isItemPersonalRequestsDevice:(id)arg0 ;
-(BOOL)isItemPersonalRequestsFooter:(id)arg0 ;
-(BOOL)isItemPersonalRequestsToggle:(id)arg0 ;
-(id)_commitUpdateToAccessControl:(id)arg0 ;
-(id)_createPersonalRequestProviderForMediaAcccessories;
-(id)_createPersonalRequestProviderForOtherAcccessories;
-(id)_transformItemForSourceItem:(id)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 userItem:(id)arg1 home:(id)arg2 onlyShowDeviceSwitches:(BOOL)arg3 ;
-(id)initWithItemUpdater:(id)arg0 userItem:(id)arg1 home:(id)arg2 settingsController:(id)arg3 onlyShowDeviceSwitches:(BOOL)arg4 ;
-(id)updateLocationDeviceToThisDevice;
-(void)_createItemProviders;
-(void)locationDeviceManager:(id)arg0 didUpdateActiveLocationDevice:(id)arg1 ;
-(void)registerForExternalUpdates;
-(void)siriLanguageOptionsManager:(id)arg0 availableLanguageOptionsDidChange:(id)arg1 ;
-(void)siriLanguageOptionsManager:(id)arg0 selectedLanguageOptionDidChange:(id)arg1 ;
-(void)toggleAllPersonalRequestsDevices;
-(void)turnOnAllPersonalRequestsDevices;
-(void)turnOnPersonalRequestsForAllVoiceRecognitionCapablePersonalRequestsDevices;
-(void)unregisterForExternalUpdates;


@end


#endif