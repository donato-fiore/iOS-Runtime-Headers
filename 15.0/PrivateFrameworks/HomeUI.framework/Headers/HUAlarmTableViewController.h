// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUALARMTABLEVIEWCONTROLLER_H
#define HUALARMTABLEVIEWCONTROLLER_H

@class COAlarmManager, NSString;
@protocol UITableViewDelegate, HUAlarmEditViewControllerDelegate, HUAlarmTableViewCellDelegate, HUPresentationDelegate;


#import "HUMobileTimerObjectTableViewController.h"

@interface HUAlarmTableViewController : HUMobileTimerObjectTableViewController <UITableViewDelegate, HUAlarmEditViewControllerDelegate, HUAlarmTableViewCellDelegate>

 {
    id<HUPresentationDelegate> *presentationDelegate;
}


@property (retain, nonatomic) id *addNotificationObserver; // ivar: _addNotificationObserver
@property (retain, nonatomic) COAlarmManager *alarmManager; // ivar: _alarmManager
@property (retain, nonatomic) id *canDispatchNotificationObserver; // ivar: _canDispatchNotificationObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) id *removeNotificationObserver; // ivar: _removeNotificationObserver
@property (retain, nonatomic) id *resetNotificationObserver; // ivar: _resetNotificationObserver
@property (readonly) Class superclass;
@property (retain, nonatomic) id *updateNotificationObserver; // ivar: _updateNotificationObserver


-(id)_baseMobileTimerObjectsFuture;
-(id)_canManagerControlAccessory;
-(id)_fakeMobileAlarmObjectsFuture;
-(id)_findTimerObjectForID:(id)arg0 ;
-(id)_newCellForMTTimerObjectUUID:(id)arg0 ;
-(id)editViewControllerForAlarm:(id)arg0 ;
-(id)initWithMediaProfileContainer:(id)arg0 ;
-(id)presentationDelegate;
-(void)_extractUpdatedTimerObjectsFromNotification:(id)arg0 ;
-(void)_removeTimerObjectAtIndexPath:(id)arg0 ;
-(void)alarmEditController:(id)arg0 didAddAlarm:(id)arg1 forMediaProfile:(id)arg2 ;
-(void)alarmEditController:(id)arg0 didDeleteAlarm:(id)arg1 forMediaProfile:(id)arg2 ;
-(void)alarmEditController:(id)arg0 didEditAlarm:(id)arg1 forMediaProfile:(id)arg2 ;
-(void)alarmEditController:(id)arg0 didMoveAlarm:(id)arg1 fromProfile:(id)arg2 toProfile:(id)arg3 ;
-(void)alarmEditControllerDidCancel:(id)arg0 ;
-(void)alarmEditControllerGettingDismissed:(id)arg0 ;
-(void)presentAddNewAlarmViewController;
-(void)setAlarmEnabled:(BOOL)arg0 forCell:(id)arg1 ;
-(void)setPresentationDelegate:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif