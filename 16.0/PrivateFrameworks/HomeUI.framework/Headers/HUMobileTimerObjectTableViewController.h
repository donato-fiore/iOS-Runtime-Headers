// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUMOBILETIMEROBJECTTABLEVIEWCONTROLLER_H
#define HUMOBILETIMEROBJECTTABLEVIEWCONTROLLER_H

@class UITableViewController, HMAccessory, NSTimer, NAFuture, NSString, NSUUID, NSMutableArray, UITableViewDiffableDataSource, NSArray;
@protocol HFHomeKitAccessorySettingsDataSourceDelegate, HUPresentationDelegateHost, HUQuickControlContentRequiringHelper, HFMediaProfileContainer, HUPresentationDelegate, HUQuickControlContentHelper;


#import "HUMobileTimerContentUnavailableView.h"

@interface HUMobileTimerObjectTableViewController : UITableViewController <HFHomeKitAccessorySettingsDataSourceDelegate, HUPresentationDelegateHost, HUQuickControlContentRequiringHelper>



@property (retain, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (nonatomic) NSUInteger accessoryAccessState; // ivar: _accessoryAccessState
@property (retain, nonatomic) NSTimer *accessoryActivationTimer; // ivar: _accessoryActivationTimer
@property (retain, nonatomic) NAFuture *checkAccessAndFetchDataFuture; // ivar: _checkAccessAndFetchDataFuture
@property (nonatomic) BOOL createNewMTObjectPendingSidekickActivation; // ivar: _createNewMTObjectPendingSidekickActivation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *headerCellTitle; // ivar: _headerCellTitle
@property (readonly, nonatomic) NSUUID *headerUUID; // ivar: _headerUUID
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL itemShouldDisplaySpinner; // ivar: _itemShouldDisplaySpinner
@property (retain, nonatomic) NSString *loadingItemsTitle; // ivar: _loadingItemsTitle
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer
@property (retain, nonatomic) NSMutableArray *mobileTimerObjects; // ivar: _mobileTimerObjects
@property (retain, nonatomic) HUMobileTimerContentUnavailableView *noItemsView; // ivar: _noItemsView
@property (readonly, nonatomic) NSUInteger numberOfMobileTimerObjects;
@property (retain, nonatomic) NAFuture *outstandingMobileTimerObjectsFuture; // ivar: _outstandingMobileTimerObjectsFuture
@property (weak, nonatomic) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: presentationDelegate
@property (weak, nonatomic) NSObject<HUQuickControlContentHelper> *quickControlContentHelper; // ivar: quickControlContentHelper
@property (nonatomic) BOOL redrawSpinnerCell; // ivar: _redrawSpinnerCell
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableViewDiffableDataSource *tableViewDataSource; // ivar: _tableViewDataSource
@property (retain, nonatomic) NSString *unavailableText; // ivar: _unavailableText
@property (retain, nonatomic) NSString *unavailableTitle; // ivar: _unavailableTitle
@property (retain, nonatomic) NSArray *updatedMobileTimerObjects; // ivar: _updatedMobileTimerObjects
@property (nonatomic) BOOL wasControllableAtLastCheck; // ivar: _wasControllableAtLastCheck


-(BOOL)_activateAccessoryForMobileTimerCreation;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isSiriEndpointActive;
-(BOOL)_shouldAllowCellSelection;
-(id)_baseMobileTimerObjectsFuture;
-(id)_canManagerControlAccessory;
-(id)_checkAndFetchTimerObjects;
-(id)_findTimerObjectForID:(id)arg0 ;
-(id)_newCellForHeaderTitle:(id)arg0 ;
-(id)_newCellForMTTimerObjectUUID:(id)arg0 ;
-(id)initWithMediaProfileContainer:(id)arg0 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(struct CGSize )_calculatePreferredContentSize;
-(struct CGSize )preferredContentSize;
-(void)_accessoryActivationTimerFinished:(id)arg0 ;
-(void)_checkAccessFetchDataAndReloadTable;
-(void)_checkAndAddTimerObject;
-(void)_configureNoItemsViewAnimated:(BOOL)arg0 ;
-(void)_quickDeleteMobileTimerObjectFromTable:(id)arg0 ;
-(void)_reloadTableViewWithExistingData;
-(void)_removeTimerObjectAtIndexPath:(id)arg0 ;
-(void)_showSpinner:(BOOL)arg0 ;
-(void)dealloc;
-(void)didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)arg0 settings:(id)arg1 ;
-(void)presentAddMobileTimerObjectViewControllerOnMainThread;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif