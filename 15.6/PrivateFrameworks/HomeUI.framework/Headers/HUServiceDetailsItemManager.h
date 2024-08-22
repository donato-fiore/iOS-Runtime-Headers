// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSERVICEDETAILSITEMMANAGER_H
#define HUSERVICEDETAILSITEMMANAGER_H

@class HFItemManager, HFAccessoryInfoDetailsItemProvider, HFItem, NSArray, HFAssociatedServiceTypeOptionItemProvider, HFItem<HFItemBuilderItem>, NSString, HFAccessorySettingDeviceOptionsAdapter, HFAccessorySettingDeviceOptionsAdapterUtility, HFItemProvider, HMHomeManager, ACAccount, HMHome, HFSelectedRoomItemProvider, HFRemoteControlItemModule, HFItemBuilder<HFServiceLikeBuilder>, HMAccessorySettingsController, HMAccessory, HFItem<HFServiceLikeItem>, HFStaticItemProvider;
@protocol HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate, HFAccessorySettingDeviceOptionsAdapterUtilityDelegate, HFHomeKitAccessorySettingsDataSourceDelegate, HUServiceDetailsItemManagerDelegate, HFHomeKitObject;


#import "HUAccessoryServicesItemModule.h"
#import "HUAccessorySettingsItemModule.h"
#import "HUMatterConnectedServicesItemModule.h"
#import "HUAccessoryDebugModule.h"
#import "HUFirmwareUpdateItemProvider.h"
#import "HUInputSourceItemModule.h"
#import "HULinkedApplicationItemProvider.h"
#import "HUNameItemModule.h"
#import "HUServiceDetailsProgrammableSwitchItemModule.h"
#import "HUAvailableRelatedTriggerItemModule.h"
#import "HUAssociatedSceneAndTriggerModule.h"
#import "HUServiceDetailsControlAndCharacteristicStateItemModule.h"
#import "HUSoftwareUpdateItemModule.h"
#import "HUTelevisionSettingsItemModule.h"
#import "HUValveItemModule.h"

@interface HUServiceDetailsItemManager : HFItemManager <HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate, HFAccessorySettingDeviceOptionsAdapterUtilityDelegate, HFHomeKitAccessorySettingsDataSourceDelegate>



@property (retain, nonatomic) HFAccessoryInfoDetailsItemProvider *accessoryInfoItemProvider; // ivar: _accessoryInfoItemProvider
@property (retain, nonatomic) HFItem *accessoryItem; // ivar: _accessoryItem
@property (readonly, nonatomic) HUAccessoryServicesItemModule *accessoryServicesEditorItemModule; // ivar: _accessoryServicesEditorItemModule
@property (retain, nonatomic) HUAccessorySettingsItemModule *accessorySettingsItemModule; // ivar: _accessorySettingsItemModule
@property (retain, nonatomic) NSArray *accessorySettingsSections; // ivar: _accessorySettingsSections
@property (retain, nonatomic) HFItem *addGroupItem; // ivar: _addGroupItem
@property (retain, nonatomic) NSArray *advancedCameraSettingsSection; // ivar: _advancedCameraSettingsSection
@property (retain, nonatomic) HFItem *alarmItem; // ivar: _alarmItem
@property (retain, nonatomic) HFItem *associatedServiceTypeItem; // ivar: _associatedServiceTypeItem
@property (retain, nonatomic) HFAssociatedServiceTypeOptionItemProvider *associatedServiceTypeOptionItemProvider; // ivar: _associatedServiceTypeOptionItemProvider
@property (retain, nonatomic) HFItem *audioSettingsItem; // ivar: _audioSettingsItem
@property (readonly, nonatomic) HFItem<HFItemBuilderItem> *builderItem; // ivar: _builderItem
@property (retain, nonatomic) HFItem *cameraActivityZonesItem; // ivar: _cameraActivityZonesItem
@property (retain, nonatomic) NSArray *cameraActivityZonesSections; // ivar: _cameraActivityZonesSections
@property (retain, nonatomic) HFItem *cameraDoorbellChimeMuteItem; // ivar: _cameraDoorbellChimeMuteItem
@property (retain, nonatomic) HFItem *cameraFaceRecognitionItem; // ivar: _cameraFaceRecognitionItem
@property (retain, nonatomic) HFItem *cameraNightModeItem; // ivar: _cameraNightModeItem
@property (retain, nonatomic) NSArray *cameraNightModeSections; // ivar: _cameraNightModeSections
@property (retain, nonatomic) HFItem *cameraRecordingOptionsItem; // ivar: _cameraRecordingOptionsItem
@property (retain, nonatomic) HFItem *cameraStatusLightItem; // ivar: _cameraStatusLightItem
@property (retain, nonatomic) NSArray *cameraStatusLightSections; // ivar: _cameraStatusLightSections
@property (retain, nonatomic) NSArray *characteristicSections; // ivar: _characteristicSections
@property (retain, nonatomic) HFItem *collectDiagnosticsItem; // ivar: _collectDiagnosticsItem
@property (retain, nonatomic) NSArray *collectDiagnosticsSections; // ivar: _collectDiagnosticsSections
@property (readonly, nonatomic) HUMatterConnectedServicesItemModule *connectedServicesItemModule; // ivar: _connectedServicesItemModule
@property (retain, nonatomic) NSArray *connectedServicesSections; // ivar: _connectedServicesSections
@property (retain, nonatomic) HFItem *createNewRoomItem; // ivar: _createNewRoomItem
@property (readonly, nonatomic) HUAccessoryDebugModule *debugAccessoryItemModule; // ivar: _debugAccessoryItemModule
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HFAccessorySettingDeviceOptionsAdapter *deviceOptionsAdapter; // ivar: _deviceOptionsAdapter
@property (retain, nonatomic) HFAccessorySettingDeviceOptionsAdapterUtility *deviceOptionsAdapterUtility; // ivar: _deviceOptionsAdapterUtility
@property (retain, nonatomic) NSArray *doorbellMuteSections; // ivar: _doorbellMuteSections
@property (retain, nonatomic) HFItemProvider *existingRoomItemProvider; // ivar: _existingRoomItemProvider
@property (retain, nonatomic) HFItem *favoriteItem; // ivar: _favoriteItem
@property (retain, nonatomic) HUFirmwareUpdateItemProvider *firmwareUpdateItemProvider; // ivar: _firmwareUpdateItemProvider
@property (nonatomic) BOOL groupedAccessoryReachableOverRapport; // ivar: _groupedAccessoryReachableOverRapport
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *headerItem; // ivar: _headerItem
@property (retain, nonatomic) NSArray *homeKitAccessorySettingsModules; // ivar: _homeKitAccessorySettingsModules
@property (retain, nonatomic) NSArray *homeKitAccessorySettingsSections; // ivar: _homeKitAccessorySettingsSections
@property (retain, nonatomic) HMHomeManager *homeManager; // ivar: _homeManager
@property (retain, nonatomic) ACAccount *homeMediaAccount; // ivar: _homeMediaAccount
@property (retain, nonatomic) HFItem *homeTheaterAudioOutputItem; // ivar: _homeTheaterAudioOutputItem
@property (retain, nonatomic) NSArray *homeTheaterAudioSections; // ivar: _homeTheaterAudioSections
@property (retain, nonatomic) NSArray *inputSourceEditorSections; // ivar: _inputSourceEditorSections
@property (retain, nonatomic) HUInputSourceItemModule *inputSourceItemModule; // ivar: _inputSourceItemModule
@property (retain, nonatomic) HFItem *internalDebuggingItem; // ivar: _internalDebuggingItem
@property (readonly, nonatomic) BOOL isItemGroup;
@property (retain, nonatomic) HULinkedApplicationItemProvider *linkedApplicationItemProvider; // ivar: _linkedApplicationItemProvider
@property (retain, nonatomic) HFItem *lockAddHomeKeyToWalletItem; // ivar: _lockAddHomeKeyToWalletItem
@property (retain, nonatomic) NSArray *lockAddHomeKeyToWalletSections; // ivar: _lockAddHomeKeyToWalletSections
@property (retain, nonatomic) HFItem *lockPinCodesItem; // ivar: _lockPinCodesItem
@property (readonly, nonatomic) ACAccount *loggedInMediaAccountOnHomePod;
@property (retain, nonatomic) HFItem *managedConfigurationProfilesItem; // ivar: _managedConfigurationProfilesItem
@property (retain, nonatomic) NSArray *nameAndIconSections; // ivar: _nameAndIconSections
@property (retain, nonatomic) HUNameItemModule *nameModule; // ivar: _nameModule
@property (readonly, nonatomic) NSArray *orderedRoomSectionItems;
@property (readonly, nonatomic) HMHome *overrideHome; // ivar: _overrideHome
@property (retain, nonatomic) HFItem *pairingModeItem; // ivar: _pairingModeItem
@property (readonly, nonatomic) HFItem *primaryUserItem; // ivar: _primaryUserItem
@property (retain, nonatomic) HUServiceDetailsProgrammableSwitchItemModule *programmableSwitchItemModule; // ivar: _programmableSwitchItemModule
@property (retain, nonatomic) NSArray *programmableSwitchSections; // ivar: _programmableSwitchSections
@property (retain, nonatomic) HUAvailableRelatedTriggerItemModule *relatedTriggerItemModule; // ivar: _relatedTriggerItemModule
@property (retain, nonatomic) NSArray *relatedTriggerSections; // ivar: _relatedTriggerSections
@property (retain, nonatomic) HFItem *removeItem; // ivar: _removeItem
@property (retain, nonatomic) HFItem *resetItem; // ivar: _resetItem
@property (retain, nonatomic) HFItem *restartItem; // ivar: _restartItem
@property (retain, nonatomic) HFItem *roomItem; // ivar: _roomItem
@property (retain, nonatomic) HFItem *roomListItem; // ivar: _roomListItem
@property (readonly, nonatomic) HUAssociatedSceneAndTriggerModule *sceneAndTriggerModule; // ivar: _sceneAndTriggerModule
@property (retain, nonatomic) NSArray *sceneAndTriggerSections; // ivar: _sceneAndTriggerSections
@property (readonly, nonatomic) HFItem *selectedAssociatedServiceTypeItem;
@property (readonly, nonatomic) HFItem *selectedRoomItem; // ivar: _selectedRoomItem
@property (retain, nonatomic) HFSelectedRoomItemProvider *selectedRoomItemProvider; // ivar: _selectedRoomItemProvider
@property (retain, nonatomic) HFItem *separateTileItem; // ivar: _separateTileItem
@property (retain, nonatomic) HUServiceDetailsControlAndCharacteristicStateItemModule *serviceDetailsControlStateAndCharacteristicItemModule; // ivar: _serviceDetailsControlStateAndCharacteristicItemModule
@property (weak, nonatomic) NSObject<HUServiceDetailsItemManagerDelegate> *serviceDetailsDelegate; // ivar: _serviceDetailsDelegate
@property (readonly, nonatomic) HFRemoteControlItemModule *serviceDetailsRemoteControlItemModule; // ivar: _serviceDetailsRemoteControlItemModule
@property (retain, nonatomic) HFItemBuilder<HFServiceLikeBuilder> *serviceLikeBuilder; // ivar: _serviceLikeBuilder
@property (retain, nonatomic) HMAccessorySettingsController *settingsController; // ivar: _settingsController
@property (nonatomic) BOOL shouldHideAccessoryItem; // ivar: _shouldHideAccessoryItem
@property (nonatomic) BOOL shouldHideSeparateTileItem; // ivar: _shouldHideSeparateTileItem
@property (nonatomic) BOOL showAssociatedServiceTypeList; // ivar: _showAssociatedServiceTypeList
@property (retain, nonatomic) HFItem *showContainedItems; // ivar: _showContainedItems
@property (nonatomic) BOOL showRoomsList; // ivar: _showRoomsList
@property (retain, nonatomic) HUSoftwareUpdateItemModule *softwareUpdateItemModule; // ivar: _softwareUpdateItemModule
@property (retain, nonatomic) NSArray *softwareUpdateSections; // ivar: _softwareUpdateSections
@property (readonly, nonatomic) HMAccessory *sourceItemAccessory;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *sourceItemHomeKitObject;
@property (readonly, nonatomic) BOOL sourceItemIsHomePod;
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *sourceServiceItem;
@property (retain, nonatomic) NSArray *splitMediaAccountSections; // ivar: _splitMediaAccountSections
@property (retain, nonatomic) HFItem *splitMediaAccountSignoutAccountItem; // ivar: _splitMediaAccountSignoutAccountItem
@property (retain, nonatomic) HFItem *splitMediaAccountTitleItem; // ivar: _splitMediaAccountTitleItem
@property (retain, nonatomic) HFItem *splitMediaAccountUseDefaultAccountItem; // ivar: _splitMediaAccountUseDefaultAccountItem
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider; // ivar: _staticItemProvider
@property (retain, nonatomic) HFItem *statusAndNotificationItem; // ivar: _statusAndNotificationItem
@property (retain, nonatomic) HFItemProvider *suggestedRoomItemProvider; // ivar: _suggestedRoomItemProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *supportedVoiceRecognitionLanguages; // ivar: _supportedVoiceRecognitionLanguages
@property (retain, nonatomic) HUTelevisionSettingsItemModule *televisionSettingsItemModule; // ivar: _televisionSettingsItemModule
@property (retain, nonatomic) NSArray *televisionSettingsSections; // ivar: _televisionSettingsSections
@property (retain, nonatomic) HUValveItemModule *valveEditorItemModule; // ivar: _valveEditorItemModule
@property (retain, nonatomic) NSArray *valveEditorSections; // ivar: _valveEditorSections


-(BOOL)_areHomePodMediaAccountsMismatched;
-(BOOL)_hasDismissedHomePodHasNonMemberMediaAccountWarning;
-(BOOL)_isGroupedHomePod;
-(BOOL)_isRestartSupportedForGroupedHomePod:(id)arg0 ;
-(BOOL)_shouldShowAccessoryInfoItems;
-(BOOL)_shouldShowFirmwareUpdateSection;
-(BOOL)_shouldShowLinkedApplicationSection;
-(BOOL)_shouldShowSplitAccountUI;
-(BOOL)canToggleAccessoryInfoItem:(id)arg0 ;
-(BOOL)controlAndCharacteristicStateItemModule:(id)arg0 shouldShowControlPanelItem:(id)arg1 ;
-(BOOL)controlAndCharacteristicStateItemModule:(id)arg0 shouldShowSectionTitleForControlPanelItem:(id)arg1 ;
-(BOOL)isAccessory;
-(BOOL)isAccessoryInfoItem:(id)arg0 ;
-(BOOL)isCharacteristicStateItem:(id)arg0 ;
-(BOOL)isRoomItem:(id)arg0 ;
-(BOOL)shouldShowDeviceOptionsForAccessoryItem:(id)arg0 ;
-(BOOL)sourceItemIsService;
-(BOOL)sourceItemIsSingleServiceAccessory;
-(BOOL)supportsWiFiStrengthDisplay:(id)arg0 ;
-(id)_allItemsForSectionIdentifier:(id)arg0 ;
-(id)_buildItemModulesForHome:(id)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_characteristicSectionForIdentifier:(id)arg0 ;
-(id)_homeFuture;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)_itemsToUpdateWhenApplicationDidBecomeActive;
-(id)_restartAccessory;
-(id)_transformedUpdateOutcomeForItem:(id)arg0 proposedOutcome:(id)arg1 ;
-(id)controlAndCharacteristicStateItemModule:(id)arg0 childItemsForItem:(id)arg1 ;
-(id)controlAndCharacteristicStateItemModule:(id)arg0 sectionFooterForControlPanelItem:(id)arg1 forServiceItem:(id)arg2 ;
-(id)controlAndCharacteristicStateItemModule:(id)arg0 sectionTitleForControlPanelItem:(id)arg1 forServiceItem:(id)arg2 ;
-(id)hf_MediaAccessoryItem;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithServiceItem:(id)arg0 delegate:(id)arg1 ;
-(id)selectAssociatedServiceType:(id)arg0 ;
-(id)selectRoom:(id)arg0 ;
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg0 ;
-(void)_registerForExternalUpdates;
-(void)_setUpHomeTheaterItem;
-(void)_setUpManagedConfigurationProfilesItem;
-(void)_setupDeviceOptionsAdapterForMediaAccessoryItem:(id)arg0 ;
-(void)_setupDeviceOptionsAdapterUtilityForGroupedAccessories:(id)arg0 ;
-(void)_unregisterForExternalUpdates;
-(void)accessoryReachableOverRapport:(BOOL)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)registerKVO;
-(void)resetServiceLikeItemBuilder;
-(void)restartAccessory;
-(void)tearDown;
-(void)toggleAccessoryInfoItem:(id)arg0 ;
-(void)unregisterKVO;
-(void)updateCameraNightMode:(BOOL)arg0 ;
-(void)updateCameraStatusLight:(BOOL)arg0 ;
-(void)updateDoorbellChimeMuteMode:(BOOL)arg0 ;


@end


#endif