// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCNOTIFICATIONMANAGEMENTVIEWCONTROLLER_H
#define NCNOTIFICATIONMANAGEMENTVIEWCONTROLLER_H

@class UIViewController, NSString, NCNotificationRequest, NSURL;
@protocol NCNotificationManagementControllerSettingsDelegate, NCNotificationManagementViewPresenterDelegate, NCNotificationManagementController;


#import "NCNotificationManagementView.h"
#import "NCNotificationManagementViewPresenter.h"

@interface NCNotificationManagementViewController : UIViewController <NCNotificationManagementControllerSettingsDelegate, NCNotificationManagementViewPresenterDelegate, NCNotificationManagementController>

 {
    NCNotificationManagementView *_platterView;
    BOOL _isDeliveredQuietly;
    NCNotificationManagementViewPresenter *_viewPresenter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NCNotificationRequest *request; // ivar: _request
@property (weak, nonatomic) NSObject<NCNotificationManagementControllerSettingsDelegate> *settingsDelegate; // ivar: _settingsDelegate
@property (retain, nonatomic) NSURL *settingsURL; // ivar: _settingsURL
@property (readonly) Class superclass;


+(id)notificationManagementAlertControllerForNotificationRequest:(id)arg0 withPresentingView:(id)arg1 settingsDelegate:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(id)_newManagementView;
-(id)_sectionSettingsForSectionIdentifier:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)notificationManagementController:(id)arg0 sectionSettingsForSectionIdentifier:(id)arg1 ;
-(id)notificationManagementViewPresenter:(id)arg0 sectionSettingsForSectionIdentifier:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)_deliveryButtonTapped:(id)arg0 ;
-(void)_onOffToggleButtonTapped:(id)arg0 ;
-(void)_setAllowsCriticalAlerts:(BOOL)arg0 forNotificationRequest:(id)arg1 withSectionIdentifier:(id)arg2 ;
-(void)_setAllowsNotifications:(BOOL)arg0 forNotificationRequest:(id)arg1 withSectionIdentifier:(id)arg2 ;
-(void)_setAllowsTimeSensitive:(BOOL)arg0 forNotificationRequest:(id)arg1 withSectionIdentifier:(id)arg2 ;
-(void)_setDeliverQuietly:(BOOL)arg0 forNotificationRequest:(id)arg1 withSectionIdentifier:(id)arg2 ;
-(void)_setMuted:(BOOL)arg0 untilDate:(id)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 threadIdentifier:(id)arg4 ;
-(void)_setScheduledDelivery:(BOOL)arg0 forNotificationRequest:(id)arg1 withSectionIdentifier:(id)arg2 ;
-(void)loadView;
-(void)notificationManagementController:(id)arg0 setAllowsCriticalAlerts:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementController:(id)arg0 setAllowsNotifications:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementController:(id)arg0 setAllowsTimeSensitive:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementController:(id)arg0 setDeliverQuietly:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementController:(id)arg0 setMuted:(BOOL)arg1 untilDate:(id)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 threadIdentifier:(id)arg5 ;
-(void)notificationManagementController:(id)arg0 setScheduledDelivery:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementViewPresenter:(id)arg0 setAllowsCriticalAlerts:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementViewPresenter:(id)arg0 setAllowsNotifications:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementViewPresenter:(id)arg0 setAllowsTimeSensitive:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementViewPresenter:(id)arg0 setDeliverQuietly:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementViewPresenter:(id)arg0 setMuted:(BOOL)arg1 untilDate:(id)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 threadIdentifier:(id)arg5 ;
-(void)notificationManagementViewPresenter:(id)arg0 setScheduledDelivery:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif