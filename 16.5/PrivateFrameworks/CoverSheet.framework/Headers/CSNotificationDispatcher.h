// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSNOTIFICATIONDISPATCHER_H
#define CSNOTIFICATIONDISPATCHER_H

@class SBNCAlertingController, NSString, BSServiceConnectionEndpoint;
@protocol CSNotificationAlertingController, SBNotificationDestination, CSNotificationDispatcher, CSCarPlayStatusProviding, NCNotificationDestinationDelegate, CSNotificationDestination;

#import <Foundation/Foundation.h>

#import "CSBehavior.h"

@interface CSNotificationDispatcher : NSObject <CSNotificationAlertingController, SBNotificationDestination, CSNotificationDispatcher>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (retain, nonatomic) CSBehavior *activeBehavior; // ivar: _activeBehavior
@property (weak, nonatomic) SBNCAlertingController *alertingController; // ivar: _alertingController
@property (weak, nonatomic) NSObject<CSCarPlayStatusProviding> *carPlayStatusProvider; // ivar: _carPlayStatusProvider
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationDestinationDelegate> *delegate; // ivar: _notificationDestinationDelegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (weak, nonatomic) NSObject<CSNotificationDestination> *listDestination; // ivar: _listDestination
@property (weak, nonatomic) NSObject<CSNotificationDestination> *modalDestination; // ivar: _modalDestination
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly) Class superclass;


-(BOOL)canReceiveNotificationRequest:(id)arg0 ;
-(BOOL)dismissNotificationInLongLookAnimated:(BOOL)arg0 ;
-(BOOL)interceptsQueueRequest:(id)arg0 ;
-(BOOL)isNotificationContentExtensionVisible:(id)arg0 ;
-(BOOL)isPresentingNotificationInLongLook;
-(id)alertingControllerForDestination:(id)arg0 ;
-(id)destination:(id)arg0 notificationRequestForUUID:(id)arg1 ;
-(id)destination:(id)arg0 settingsForSectionIdentifier:(id)arg1 ;
-(id)notificationSectionSettingsForDestination:(id)arg0 ;
-(id)notificationSystemSettingsForDestination:(id)arg0 ;
-(void)_clearNotificationRequestsFromIncomingSection:(id)arg0 ;
-(void)destination:(id)arg0 clearNotificationRequests:(id)arg1 ;
-(void)destination:(id)arg0 clearNotificationRequestsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3 ;
-(void)destination:(id)arg0 clearNotificationRequestsFromIncomingSection:(id)arg1 ;
-(void)destination:(id)arg0 clearNotificationRequestsInSections:(id)arg1 ;
-(void)destination:(id)arg0 performAction:(id)arg1 forNotificationRequest:(id)arg2 requestAuthentication:(BOOL)arg3 withParameters:(id)arg4 completion:(id)arg5 ;
-(void)destination:(id)arg0 requestPermissionToExecuteAction:(id)arg1 forNotificationRequest:(id)arg2 withParameters:(id)arg3 completion:(id)arg4 ;
-(void)destination:(id)arg0 setAllowsCriticalAlerts:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg0 setAllowsDirectMessages:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg0 setAllowsNotifications:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg0 setAllowsTimeSensitive:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg0 setDeliverQuietly:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg0 setMuted:(BOOL)arg1 untilDate:(id)arg2 forSectionIdentifier:(id)arg3 threadIdentifier:(id)arg4 ;
-(void)destination:(id)arg0 setNotificationSystemSettings:(id)arg1 ;
-(void)destination:(id)arg0 setScheduledDelivery:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg0 setSystemScheduledDeliveryEnabled:(BOOL)arg1 scheduledDeliveryTimes:(id)arg2 ;
-(void)modifyNotificationRequest:(id)arg0 ;
-(void)notificationsLoadedForSectionIdentifier:(id)arg0 ;
-(void)postNotificationRequest:(id)arg0 ;
-(void)stopAllRealerts;
-(void)updateNotificationSectionSettings:(id)arg0 previousSectionSettings:(id)arg1 ;
-(void)updateNotificationSystemSettings:(id)arg0 previousSystemSettings:(id)arg1 ;
-(void)withdrawNotificationRequest:(id)arg0 ;


@end


#endif