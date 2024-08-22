// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSERVICEDETAILSVIEWCONTROLLER_H
#define HUSERVICEDETAILSVIEWCONTROLLER_H

@class NAFuture, UIButton, NSString, NSHashTable, HMHome, HFItem<HFServiceLikeItem>, UILongPressGestureRecognizer, NSMapTable, HFNamingComponents;
@protocol HUControlPanelControllerDelegate, HUPresentationDelegate, HUServiceDetailsItemManagerDelegate, HUSwitchCellDelegate, HUServiceGroupEditorViewControllerDelegate, HUContainedServiceGridViewControllerDelegate, HUEditRoomViewControllerPresentationDelegate, HUTriggerEditorDelegate, HUControlPanelControllerDelegate, HFAccessoryObserver, UIGestureRecognizerDelegate, HUAccessorySettingsItemModuleControllerDelegate, HUSoftwareUpdateItemModuleControllerDelegate, HUMediaSystemEditorViewControllerDelegate, HUContainedMediaAccessoriesGridViewControllerDelegate, HUChildServiceModuleControllerDelegate, HFHomeObserver, HUPickerCellDelegate, HUHomeAssistantDeviceSplitAccountActionDelegate, UINavigationControllerDelegate, HUHomeKitAccessorySettingsItemModuleControllerDelegate, HUDetailsPresentationDelegateHost, HUServiceLikeItemDetailsViewControllerProtocol;


#import "HUItemTableViewController.h"
#import "HUChildServiceItemModuleController.h"
#import "HUAccessorySettingsItemModuleController.h"
#import "HUAvailableRelatedTriggerItemModuleController.h"
#import "HUControlPanelController.h"
#import "HUServiceDetailsItemManager.h"
#import "HUNameItemModuleController.h"
#import "HUQuickControlSummaryNavigationBarTitleView.h"
#import "HUQuickControlProxHandOffSummaryViewUpdater.h"
#import "HUAssociatedSceneAndTriggerModuleController.h"
#import "HUSoftwareUpdateItemModuleController.h"
#import "HUTelevisionSettingsItemModuleController.h"
#import "HUServiceDetailsTextViewDelegate.h"

@interface HUServiceDetailsViewController : HUItemTableViewController <HUControlPanelControllerDelegate, HUPresentationDelegate, HUServiceDetailsItemManagerDelegate, HUSwitchCellDelegate, HUServiceGroupEditorViewControllerDelegate, HUContainedServiceGridViewControllerDelegate, HUEditRoomViewControllerPresentationDelegate, HUTriggerEditorDelegate, HUControlPanelControllerDelegate, HFAccessoryObserver, UIGestureRecognizerDelegate, HUAccessorySettingsItemModuleControllerDelegate, HUSoftwareUpdateItemModuleControllerDelegate, HUMediaSystemEditorViewControllerDelegate, HUContainedMediaAccessoriesGridViewControllerDelegate, HUChildServiceModuleControllerDelegate, HFHomeObserver, HUPickerCellDelegate, HUHomeAssistantDeviceSplitAccountActionDelegate, UINavigationControllerDelegate, HUHomeKitAccessorySettingsItemModuleControllerDelegate, HUDetailsPresentationDelegateHost, HUServiceLikeItemDetailsViewControllerProtocol>



@property (retain, nonatomic) HUChildServiceItemModuleController *accessoryServicesEditorItemModuleController; // ivar: _accessoryServicesEditorItemModuleController
@property (retain, nonatomic) HUAccessorySettingsItemModuleController *accessorySettingsItemModuleController; // ivar: _accessorySettingsItemModuleController
@property (retain, nonatomic) NAFuture *accountFuture; // ivar: _accountFuture
@property (retain, nonatomic) HUAvailableRelatedTriggerItemModuleController *associatedTriggerModuleController; // ivar: _associatedTriggerModuleController
@property (retain, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (readonly, nonatomic) HUControlPanelController *controlPanelController; // ivar: _controlPanelController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) HUServiceDetailsItemManager *detailsItemManager; // ivar: _detailsItemManager
@property (readonly, nonatomic) NSHashTable *expandedControlPanelItems; // ivar: _expandedControlPanelItems
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HUChildServiceItemModuleController *inputSourceItemModuleController; // ivar: _inputSourceItemModuleController
@property (readonly, nonatomic) BOOL isItemGroup; // ivar: _isItemGroup
@property (readonly, nonatomic) BOOL isMultiServiceAccessory; // ivar: _isMultiServiceAccessory
@property (nonatomic) BOOL isPresentingRoomsList; // ivar: _isPresentingRoomsList
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *item;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // ivar: _longPressRecognizer
@property (retain, nonatomic) NSMapTable *moduleToModuleControllerMap; // ivar: _moduleToModuleControllerMap
@property (retain, nonatomic) HUNameItemModuleController *nameItemModuleController; // ivar: _nameItemModuleController
@property (retain, nonatomic) HFNamingComponents *namingComponent; // ivar: _namingComponent
@property (retain, nonatomic) HUQuickControlSummaryNavigationBarTitleView *navigationBarTitleView; // ivar: _navigationBarTitleView
@property (weak, nonatomic) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (retain, nonatomic) HUQuickControlProxHandOffSummaryViewUpdater *proxHandOffSummaryViewUpdater; // ivar: _proxHandOffSummaryViewUpdater
@property (nonatomic) BOOL requiresPresentingViewControllerDismissal; // ivar: _requiresPresentingViewControllerDismissal
@property (retain, nonatomic) HUAssociatedSceneAndTriggerModuleController *sceneAndTriggerModuleController; // ivar: _sceneAndTriggerModuleController
@property (nonatomic) BOOL shouldIncludeRoomNameInHeaderTitle; // ivar: _shouldIncludeRoomNameInHeaderTitle
@property (nonatomic) BOOL shouldTrackProgrammableSwitchActivations; // ivar: _shouldTrackProgrammableSwitchActivations
@property (retain, nonatomic) HUSoftwareUpdateItemModuleController *softwareUpdateItemModuleController; // ivar: _softwareUpdateItemModuleController
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsCustomIconEditing; // ivar: _supportsCustomIconEditing
@property (retain, nonatomic) HUTelevisionSettingsItemModuleController *televisionSettingsItemModuleController; // ivar: _televisionSettingsItemModuleController
@property (retain, nonatomic) HUServiceDetailsTextViewDelegate *textViewDelegate; // ivar: _textViewDelegate
@property (retain, nonatomic) HUChildServiceItemModuleController *valveEditorItemModuleController; // ivar: _valveEditorItemModuleController


+(id)acceptableItemClasses;
-(BOOL)_allowRowHighlightForItem:(id)arg0 ;
-(BOOL)_allowRowSelectionForItem:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isCameraItem;
-(BOOL)_notifyOfHomeTheaterReconfigurationIfNecessary:(id)arg0 ;
-(BOOL)_shouldFollowTitleValueTintColorforItem:(id)arg0 ;
-(BOOL)_shouldPresentRemoveRouterConfirmation;
-(BOOL)_shouldShowAddButtonForOptionItem:(id)arg0 ;
-(BOOL)_shouldShowDetailDisclosureForItem:(id)arg0 ;
-(BOOL)automaticallyUpdatesViewControllerTitle;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)hasDetailsActionForContainedServiceGridViewController:(id)arg0 item:(id)arg1 ;
-(BOOL)itemManager:(id)arg0 shouldShowControlPanelItem:(id)arg1 ;
-(BOOL)itemManager:(id)arg0 shouldShowSectionTitleForControlPanelItem:(id)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(NSInteger)arg0 ;
-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(BOOL)shouldHideSeparatorsForCell:(id)arg0 indexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(BOOL)triggerEditor:(id)arg0 shouldCommitTriggerBuilder:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSInteger)numberOfValuesForPickerViewCell:(id)arg0 ;
-(NSUInteger)automaticDisablingReasonsForItem:(id)arg0 ;
-(id)_characteristicsAffectedByControlItem:(id)arg0 ;
-(id)_commitBuilder;
-(id)_createMenuWithValues:(id)arg0 cell:(id)arg1 currentItem:(id)arg2 ;
-(id)_magicallyUpdateNavigationStackForNewRootItem:(id)arg0 topViewController:(id)arg1 ;
-(id)_microphoneStatus;
-(id)_primaryStatusTextForLatestResults:(id)arg0 showingSecondaryStatus:(BOOL)arg1 ;
-(id)_recoverItemBuilder:(id)arg0 fromError:(id)arg1 ;
-(id)_removeItem;
-(id)_roomForItem:(id)arg0 ;
-(id)_secondaryStatusTextForLatestResults:(id)arg0 ;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)childServiceEditorModuleController:(id)arg0 didSelectItem:(id)arg1 ;
-(id)detailsViewControllerForContainedMediaAccessoryGridViewController:(id)arg0 item:(id)arg1 ;
-(id)detailsViewControllerForContainedServiceGridViewController:(id)arg0 item:(id)arg1 ;
-(id)finishPresentation:(id)arg0 animated:(BOOL)arg1 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)initWithServiceLikeItem:(id)arg0 ;
-(id)itemManager:(id)arg0 sectionFooterForControlPanelItem:(id)arg1 forServiceItem:(id)arg2 ;
-(id)itemManager:(id)arg0 sectionTitleForControlPanelItem:(id)arg1 forServiceItem:(id)arg2 ;
-(id)pickerViewCell:(id)arg0 titleForValueAtIndex:(NSInteger)arg1 ;
-(id)softwareUpdateModuleController:(id)arg0 dismissViewController:(id)arg1 ;
-(id)softwareUpdateModuleController:(id)arg0 navigateToViewController:(id)arg1 ;
-(id)softwareUpdateModuleController:(id)arg0 presentViewController:(id)arg1 ;
-(void)_closeButtonPressed:(id)arg0 ;
-(void)_didRemoveHomeKitObject:(id)arg0 ;
-(void)_didSelectRoomItem:(id)arg0 ;
-(void)_executeSilentSoftwareUpdateCheck;
-(void)_longPressRecognized:(id)arg0 ;
-(void)_notifyOfHomePodPairingIfNecessary:(id)arg0 ;
-(void)_offerToCreateHomeTheaterIfPossible:(id)arg0 ;
-(void)_presentContainedItems;
-(void)_presentEcosystemAccessoryRemoveConfirmation:(id)arg0 ;
-(void)_presentGroupPicker;
-(void)_presentHomeAccessoryRemoveConfirmation:(id)arg0 ;
-(void)_presentRemoveConfirmation:(id)arg0 ;
-(void)_presentRemoveRouterConfirmation;
-(void)_presentTriggerEditorForProgrammableSwitchEventOptionItem:(id)arg0 ;
-(void)_restartGroupedHomePodAccessory;
-(void)_restartHomePod;
-(void)_separateOrUnifyTile;
-(void)_setDismissedHomePodHasNonMemberMediaAccountWarning:(BOOL)arg0 ;
-(void)_setupProgrammableSwitchCell:(id)arg0 forItem:(id)arg1 ;
-(void)_updateAssociatedServiceTypeCells;
-(void)_updateCheckedStateForAssociatedServiceTypeCell:(id)arg0 item:(id)arg1 ;
-(void)_updateControlStatusText;
-(void)_updateIconDescriptorAnimated:(BOOL)arg0 ;
-(void)_updateName:(id)arg0 ;
-(void)accessory:(id)arg0 service:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 ;
-(void)accessoryDidUpdateServices:(id)arg0 ;
-(void)addRoomButtonPressed:(id)arg0 ;
-(void)checkForAccessoriesNeedingReprovisioning;
-(void)commitChanges;
-(void)controlPanelController:(id)arg0 didEndPossibleWritesForControlItem:(id)arg1 ;
-(void)controlPanelController:(id)arg0 willBeginPossibleWritesForControlItem:(id)arg1 ;
-(void)dealloc;
-(void)didSelectHeaderWarningAction:(id)arg0 ;
-(void)didSelectHomeAssistantDeviceSplitAccountAction:(NSUInteger)arg0 ;
-(void)diffableDataItemManager:(id)arg0 didUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 ;
-(void)diffableDataItemManager:(id)arg0 willUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 isInitialLoad:(BOOL)arg4 ;
-(void)dismissPrivacyController;
-(void)dismissTriggerActionEditorViewController:(id)arg0 ;
-(void)editRoomViewControllerDidFinish:(id)arg0 withNewRoom:(id)arg1 ;
-(void)home:(id)arg0 didRemoveAccessory:(id)arg1 ;
-(void)home:(id)arg0 didRemoveMediaSystem:(id)arg1 ;
-(void)home:(id)arg0 didRemoveServiceGroup:(id)arg1 ;
-(void)itemManager:(id)arg0 didUpdateResultsForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)itemManager:(id)arg0 didUpdateResultsForSourceItem:(id)arg1 ;
-(void)itemManager:(id)arg0 performUpdateRequest:(id)arg1 ;
-(void)mediaSystemEditor:(id)arg0 didAbortMediaSystemCreationDueToAccessoryNeedingUpdate:(id)arg1 ;
-(void)mediaSystemEditor:(id)arg0 didCreateMediaSystem:(id)arg1 ;
-(void)moduleController:(id)arg0 expandModule:(id)arg1 ;
-(void)moduleController:(id)arg0 presentSettingDetailsViewController:(id)arg1 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)pickerViewCell:(id)arg0 didSelectValueAtIndex:(NSInteger)arg1 ;
-(void)serviceGroupEditor:(id)arg0 didCreateServiceGroup:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textDidChange:(id)arg0 forTextField:(id)arg1 item:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg0 item:(id)arg1 ;
-(void)triggerEditor:(id)arg0 didFinishWithTriggerBuilder:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillDismiss;


@end


#endif