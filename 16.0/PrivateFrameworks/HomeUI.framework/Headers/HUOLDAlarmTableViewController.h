// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUOLDALARMTABLEVIEWCONTROLLER_H
#define HUOLDALARMTABLEVIEWCONTROLLER_H

@class NSString, UIBarButtonItem, _UIContentUnavailableView;
@protocol HUAlarmEditViewControllerDelegate, HUHomePodAlarmItemModuleControllerDelegate, HFAccessoryObserver, HFMediaObjectObserver, HFAccessorySettingMobileTimerAdapterObserver, UITableViewDelegatePrivate, HUPresentationDelegateHost, HFMediaProfileContainer, HUPresentationDelegate;


#import "HUItemTableViewController.h"
#import "HUHomePodAlarmItemModuleController.h"

@interface HUOLDAlarmTableViewController : HUItemTableViewController <HUAlarmEditViewControllerDelegate, HUHomePodAlarmItemModuleControllerDelegate, HFAccessoryObserver, HFMediaObjectObserver, HFAccessorySettingMobileTimerAdapterObserver, UITableViewDelegatePrivate, HUPresentationDelegateHost>



@property (retain, nonatomic) HUHomePodAlarmItemModuleController *alarmModuleController; // ivar: _alarmModuleController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIBarButtonItem *doneButtonItem; // ivar: _doneButtonItem
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAccessoryControllable; // ivar: _isAccessoryControllable
@property (readonly, nonatomic) BOOL isAlarmsSettingReady; // ivar: _isAlarmsSettingReady
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer
@property (retain, nonatomic) _UIContentUnavailableView *noItemsView; // ivar: _noItemsView
@property (weak, nonatomic) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)alwaysUseDeltaTableViewUpdatesAfterViewHasAppeared;
-(BOOL)shouldHideFooterBelowSection:(NSInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(CGFloat)heightForFooterInTableView:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)alarmItemManager;
-(id)backgroundView;
-(id)editViewControllerForAlarmItem:(id)arg0 ;
-(id)initWithMediaProfileContainer:(id)arg0 ;
-(id)itemModuleControllers;
-(struct CGSize )preferredContentSize;
-(void)_discernReachabilityForAccessory:(id)arg0 ;
-(void)_editDoneAction:(id)arg0 ;
-(void)_layoutNoItemsLabel;
-(void)_numberOfItemsDidChangeAnimated:(BOOL)arg0 ;
-(void)_updateAccessoryControllable:(BOOL)arg0 alarmsSettingReady:(BOOL)arg1 ;
-(void)accessoryDidUpdateControllable:(id)arg0 ;
-(void)accessoryDidUpdateReachability:(id)arg0 ;
-(void)accessoryDidUpdateReachableTransports:(id)arg0 ;
-(void)alarmEditController:(id)arg0 didAddAlarm:(id)arg1 ;
-(void)alarmEditController:(id)arg0 didAddAlarm:(id)arg1 forMediaProfile:(id)arg2 ;
-(void)alarmEditController:(id)arg0 didDeleteAlarm:(id)arg1 ;
-(void)alarmEditController:(id)arg0 didDeleteAlarm:(id)arg1 forMediaProfile:(id)arg2 ;
-(void)alarmEditController:(id)arg0 didEditAlarm:(id)arg1 ;
-(void)alarmEditController:(id)arg0 didEditAlarm:(id)arg1 forMediaProfile:(id)arg2 ;
-(void)alarmEditController:(id)arg0 didMoveAlarm:(id)arg1 fromProfile:(id)arg2 toProfile:(id)arg3 ;
-(void)alarmEditControllerDidCancel:(id)arg0 ;
-(void)alarmEditControllerGettingDismissed:(id)arg0 ;
-(void)alarmItemModuleController:(id)arg0 didSelectAlarmItem:(id)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)itemManagerDidUpdate:(id)arg0 ;
-(void)mobileTimerAdapterDidUpdateReadiness:(id)arg0 ;
-(void)presentAddNewAlarmViewController;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif