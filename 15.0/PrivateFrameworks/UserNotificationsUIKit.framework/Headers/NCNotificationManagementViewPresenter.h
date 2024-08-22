// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCNOTIFICATIONMANAGEMENTVIEWPRESENTER_H
#define NCNOTIFICATIONMANAGEMENTVIEWPRESENTER_H

@class NSString, UIAlertController;
@protocol NCNotificationManagementControllerSettingsDelegate, NCNotificationManagementViewPresenterDelegate;

#import <Foundation/Foundation.h>


@interface NCNotificationManagementViewPresenter : NSObject <NCNotificationManagementControllerSettingsDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationManagementViewPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIAlertController *notificationManagementAlertViewController; // ivar: _notificationManagementAlertViewController
@property (readonly) Class superclass;


-(BOOL)dismissManagementViewIfPresentedAnimated:(BOOL)arg0 ;
-(id)notificationManagementController:(id)arg0 sectionSettingsForSectionIdentifier:(id)arg1 ;
-(void)notificationManagementController:(id)arg0 setAllowsCriticalAlerts:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementController:(id)arg0 setAllowsNotifications:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementController:(id)arg0 setAllowsTimeSensitive:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementController:(id)arg0 setDeliverQuietly:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementController:(id)arg0 setMuted:(BOOL)arg1 untilDate:(id)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 threadIdentifier:(id)arg5 ;
-(void)notificationManagementController:(id)arg0 setScheduledDelivery:(BOOL)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3 ;
-(void)notificationManagementControllerDidDismissManagementView:(id)arg0 ;
-(void)presentNotificationManagementViewType:(NSUInteger)arg0 forNotificationRequest:(id)arg1 withPresentingViewController:(id)arg2 withPresentingView:(id)arg3 ;


@end


#endif