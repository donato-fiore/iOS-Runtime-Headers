// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONDISPATCHER_H
#define NCNOTIFICATIONDISPATCHER_H

@class NSString, NSMutableDictionary, NSHashTable;
@protocol NCNotificationAlertDestinationDelegate, NCNotificationDestinationDelegate, NCAlertingController, NCNotificationDispatcherDelegate;

#import <Foundation/Foundation.h>

#import "NCNotificationAlertQueue.h"
#import "NCNotificationDestinationsRegistry.h"
#import "NCLayoutLoopDetector.h"
#import "NCNotificationSystemSettings.h"

@interface NCNotificationDispatcher : NSObject <NCNotificationAlertDestinationDelegate, NCNotificationDestinationDelegate>



@property (retain, nonatomic) NCNotificationAlertQueue *alertQueue; // ivar: _alertQueue
@property (retain, nonatomic) NSObject<NCAlertingController> *alertingController; // ivar: _alertingController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationDispatcherDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NCNotificationDestinationsRegistry *destinationsRegistry; // ivar: _destinationsRegistry
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NCLayoutLoopDetector *layoutDetector; // ivar: _layoutDetector
@property (retain, nonatomic) NCNotificationSystemSettings *notificationSystemSettings; // ivar: _notificationSystemSettings
@property (retain, nonatomic) NSMutableDictionary *sectionSettings; // ivar: _sectionSettings
@property (retain, nonatomic) NSHashTable *sourceDelegates; // ivar: _sourceDelegates
@property (readonly) Class superclass;


-(BOOL)_isRegisteredDestination:(id)arg0 ;
-(BOOL)_shouldPostNotificationRequest:(id)arg0 ;
-(id)destination:(id)arg0 notificationRequestForUUID:(id)arg1 ;
-(id)init;
-(id)initWithAlertingController:(id)arg0 ;
-(id)notificationSectionSettingsForDestination:(id)arg0 ;
-(id)notificationSectionSettingsForDestination:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(id)notificationSystemSettingsForDestination:(id)arg0 ;
-(void)_clearUnsafeNotification:(id)arg0 ;
-(void)_didPostNotificationRequest:(id)arg0 ;
-(void)_didRemoveNotificationRequest:(id)arg0 ;
-(void)_notifyDidExecuteAction:(id)arg0 forNotificationRequest:(id)arg1 ;
-(void)_performOperationForRequestDestinations:(id)arg0 block:(id)arg1 ;
-(void)_registerAlertDestination:(id)arg0 ;
-(void)_registerDestination:(id)arg0 ;
-(void)_willPostNotificationRequest:(id)arg0 ;
-(void)addDispatcherSourceDelegate:(id)arg0 ;
-(void)destination:(id)arg0 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)arg1 ;
-(void)destination:(id)arg0 didBecomeReadyToReceiveNotificationsPassingTest:(id)arg1 ;
-(void)destination:(id)arg0 didDismissNotificationRequest:(id)arg1 ;
-(void)destination:(id)arg0 didPresentNotificationRequest:(id)arg1 ;
-(void)destination:(id)arg0 executeAction:(id)arg1 forNotificationRequest:(id)arg2 requestAuthentication:(BOOL)arg3 withParameters:(id)arg4 completion:(id)arg5 ;
-(void)destination:(id)arg0 requestPermissionToExecuteAction:(id)arg1 forNotificationRequest:(id)arg2 withParameters:(id)arg3 completion:(id)arg4 ;
-(void)destination:(id)arg0 requestsClearingNotificationRequests:(id)arg1 ;
-(void)destination:(id)arg0 requestsClearingNotificationRequests:(id)arg1 fromDestinations:(id)arg2 ;
-(void)destination:(id)arg0 requestsClearingNotificationRequestsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3 ;
-(void)destination:(id)arg0 requestsClearingNotificationRequestsInSections:(id)arg1 ;
-(void)destination:(id)arg0 setAllowsCriticalAlerts:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg0 setAllowsDirectMessages:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg0 setAllowsNotifications:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg0 setAllowsTimeSensitive:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg0 setDeliverQuietly:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg0 setMuted:(BOOL)arg1 untilDate:(id)arg2 forSectionIdentifier:(id)arg3 threadIdentifier:(id)arg4 ;
-(void)destination:(id)arg0 setScheduledDelivery:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg0 setSystemScheduledDeliveryEnabled:(BOOL)arg1 scheduledDeliveryTimes:(id)arg2 ;
-(void)destination:(id)arg0 willPresentNotificationRequest:(id)arg1 ;
-(void)destination:(id)arg0 willPresentNotificationRequest:(id)arg1 suppressAlerts:(BOOL)arg2 ;
-(void)destinationDidBecomeReadyToReceiveNotifications:(id)arg0 ;
-(void)modifyNotificationWithRequest:(id)arg0 ;
-(void)notificationsLoadedForSectionIdentifier:(id)arg0 ;
-(void)postNotificationWithRequest:(id)arg0 ;
-(void)registerDestination:(id)arg0 ;
-(void)removeDispatcherSourceDelegate:(id)arg0 ;
-(void)removeNotificationSectionWithIdentifier:(id)arg0 ;
-(void)setDestination:(id)arg0 enabled:(BOOL)arg1 ;
-(void)unregisterDestination:(id)arg0 ;
-(void)updateNotificationSectionSettings:(id)arg0 ;
-(void)updateNotificationSystemSettings:(id)arg0 ;
-(void)withdrawNotificationWithRequest:(id)arg0 ;


@end


#endif