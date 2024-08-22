// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCBULLETINNOTIFICATIONSOURCE_H
#define NCBULLETINNOTIFICATIONSOURCE_H

@class NSMutableDictionary, NSString, NCNotificationDispatcher, DNDEventBehaviorResolutionService, BBObserver, BBSettingsGateway;
@protocol BBObserverDelegate, NCNotificationDispatcherSourceDelegate, NCNotificationSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NCBulletinNotificationSource : NSObject <BBObserverDelegate, NCNotificationDispatcherSourceDelegate, NCNotificationSource>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSMutableDictionary *bulletinFeeds; // ivar: _bulletinFeeds
@property (retain, nonatomic) NSMutableDictionary *bulletinsToUUIDs; // ivar: _bulletinsToUUIDs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NCNotificationDispatcher *dispatcher; // ivar: _dispatcher
@property (retain, nonatomic) DNDEventBehaviorResolutionService *eventBehaviorResolutionService; // ivar: _eventBehaviorResolutionService
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BBObserver *observer; // ivar: _observer
@property (retain, nonatomic) NSMutableDictionary *sectionInfoById; // ivar: _sectionInfoById
@property (retain, nonatomic) BBSettingsGateway *settingsGateway; // ivar: _settingsGateway
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *uuidsToRequests; // ivar: _uuidsToRequests


-(NSUInteger)_updateFeedForCoverSheetDestination:(NSUInteger)arg0 storedFeed:(NSUInteger)arg1 ;
-(id)_alertOptionsWithBehavior:(id)arg0 ;
-(id)_bulletinsPerSectionIdForNotificationRequests:(id)arg0 ;
-(id)_bulletinsToClearPerSectionIdForNotificationRequests:(id)arg0 removingDestinations:(id)arg1 ;
-(id)_queue_sectionInfoForBulletin:(id)arg0 ;
-(id)_requestUUIDForBulletinPublisherMatchID:(id)arg0 ;
-(id)_updatedRequestWithAlertOptions:(id)arg0 ;
-(id)dispatcher:(id)arg0 notificationRequestForUUID:(id)arg1 ;
-(id)init;
-(id)initWithDispatcher:(id)arg0 ;
-(id)initWithDispatcher:(id)arg0 observer:(id)arg1 queue:(id)arg2 ;
-(void)_applicationIconChanged:(id)arg0 ;
-(void)_modifySectionIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)dealloc;
-(void)dispatcher:(id)arg0 didExecuteAction:(id)arg1 forNotificationRequest:(id)arg2 ;
-(void)dispatcher:(id)arg0 requestsClearingNotificationRequests:(id)arg1 ;
-(void)dispatcher:(id)arg0 requestsClearingNotificationRequests:(id)arg1 fromDestinations:(id)arg2 ;
-(void)dispatcher:(id)arg0 requestsClearingNotificationRequestsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3 ;
-(void)dispatcher:(id)arg0 requestsClearingNotificationRequestsInSections:(id)arg1 ;
-(void)dispatcher:(id)arg0 setAllowsCriticalAlerts:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)dispatcher:(id)arg0 setAllowsDirectMessages:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)dispatcher:(id)arg0 setAllowsNotifications:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)dispatcher:(id)arg0 setAllowsTimeSensitive:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)dispatcher:(id)arg0 setDeliverQuietly:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)dispatcher:(id)arg0 setMuted:(BOOL)arg1 untilDate:(id)arg2 forSectionIdentifier:(id)arg3 threadIdentifier:(id)arg4 ;
-(void)dispatcher:(id)arg0 setScheduledDelivery:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)dispatcher:(id)arg0 setSystemScheduledDeliveryEnabled:(BOOL)arg1 scheduledDeliveryTimes:(id)arg2 ;
-(void)observer:(id)arg0 addBulletin:(id)arg1 forFeed:(NSUInteger)arg2 ;
-(void)observer:(id)arg0 addBulletin:(id)arg1 forFeed:(NSUInteger)arg2 playLightsAndSirens:(BOOL)arg3 withReply:(id)arg4 ;
-(void)observer:(id)arg0 modifyBulletin:(id)arg1 forFeed:(NSUInteger)arg2 ;
-(void)observer:(id)arg0 noteBulletinsLoadedForSectionID:(id)arg1 ;
-(void)observer:(id)arg0 noteServerConnectionStateChanged:(BOOL)arg1 ;
-(void)observer:(id)arg0 removeBulletin:(id)arg1 ;
-(void)observer:(id)arg0 removeBulletin:(id)arg1 forFeed:(NSUInteger)arg2 ;
-(void)observer:(id)arg0 removeSection:(id)arg1 ;
-(void)observer:(id)arg0 updateGlobalSettings:(id)arg1 ;
-(void)observer:(id)arg0 updateSectionInfo:(id)arg1 ;


@end


#endif