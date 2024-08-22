// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUMOBILETIMEROBJECTTABLEVIEWCONTROLLER_H
#define HUMOBILETIMEROBJECTTABLEVIEWCONTROLLER_H

@class UITableViewController, HMAccessory, NSString, NSUUID, NSMutableArray, NAFuture, UITableViewDiffableDataSource, NSArray;
@protocol HUPresentationDelegateHost, HUPreloadableViewController, HUQuickControlContentRequiringHelper, HFMediaProfileContainer, HUPresentationDelegate, HUQuickControlContentHelper;


#import "HUAlarmsAndTimersAccessMonitor.h"
#import "HUMobileTimerContentUnavailableView.h"

@interface HUMobileTimerObjectTableViewController : UITableViewController <HUPresentationDelegateHost, HUPreloadableViewController, HUQuickControlContentRequiringHelper>



@property (retain, nonatomic) HUAlarmsAndTimersAccessMonitor *accessMonitor; // ivar: _accessMonitor
@property (retain, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (nonatomic) NSUInteger accessoryAccessState; // ivar: _accessoryAccessState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *headerCellTitle; // ivar: _headerCellTitle
@property (readonly, nonatomic) NSUUID *headerUUID; // ivar: _headerUUID
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *loadingItemsTitle; // ivar: _loadingItemsTitle
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer
@property (retain, nonatomic) NSMutableArray *mobileTimerObjects; // ivar: _mobileTimerObjects
@property (retain, nonatomic) HUMobileTimerContentUnavailableView *noItemsView; // ivar: _noItemsView
@property (readonly, nonatomic) NSUInteger numberOfMobileTimerObjects;
@property (retain, nonatomic) NAFuture *outstandingMobileTimerObjectsFuture; // ivar: _outstandingMobileTimerObjectsFuture
@property (weak, nonatomic) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: presentationDelegate
@property (weak, nonatomic) NSObject<HUQuickControlContentHelper> *quickControlContentHelper; // ivar: quickControlContentHelper
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableViewDiffableDataSource *tableViewDataSource; // ivar: _tableViewDataSource
@property (retain, nonatomic) NSString *unavailableText; // ivar: _unavailableText
@property (retain, nonatomic) NSString *unavailableTitle; // ivar: _unavailableTitle
@property (retain, nonatomic) NSArray *updatedMobileTimerObjects; // ivar: _updatedMobileTimerObjects
@property (nonatomic) BOOL useFakeMobileObjects; // ivar: _useFakeMobileObjects
@property (nonatomic) BOOL wasControllableAtLastCheck; // ivar: _wasControllableAtLastCheck


-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldAllowCellSelection;
-(id)_baseMobileTimerObjectsFuture;
-(id)_canManagerControlAccessory;
-(id)_fakeMobileTimerObjectsFuture;
-(id)_findTimerObjectForID:(id)arg0 ;
-(id)_newCellForHeaderTitle:(id)arg0 ;
-(id)_newCellForMTTimerObjectUUID:(id)arg0 ;
-(id)hu_preloadContent;
-(id)initWithMediaProfileContainer:(id)arg0 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(struct CGSize )_calculatePreferredContentSize;
-(struct CGSize )preferredContentSize;
-(void)_checkAccessoryFetchAndUpdateTable;
-(void)_configureNoItemsViewAnimated:(BOOL)arg0 ;
-(void)_fetchTimerObjectsAndUpdateTable;
-(void)_layoutNoItemsLabel;
-(void)_quickDeleteMobileTimerObjectFromTable:(id)arg0 ;
-(void)_reloadTableViewData;
-(void)_removeTimerObjectAtIndexPath:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif