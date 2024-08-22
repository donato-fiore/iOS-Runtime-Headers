// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPMAPSPUSHDAEMONREMOTEPROXY_H
#define MSPMAPSPUSHDAEMONREMOTEPROXY_H

@class NSXPCConnection, NSHashTable, NSString;
@protocol MSPMapsPushDaemonProxyObserver, MSPMapsPushDaemonProxy;

#import <Foundation/Foundation.h>

#import "MSPUserRoutingPreferences.h"

@interface MSPMapsPushDaemonRemoteProxy : NSObject <MSPMapsPushDaemonProxyObserver, MSPMapsPushDaemonProxy>

 {
    NSXPCConnection *_connection;
    NSHashTable *_observers;
    MSPUserRoutingPreferences *_cachedUserRoutingPreferences;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_connection;
-(id)_remoteObjectProxy;
-(id)init;
-(id)userRoutingPrefrencesFromSettingsWithFreshness:(CGFloat)arg0 ;
-(void)_clearConnection;
-(void)_connectToDaemonIfNeeded;
-(void)addObserver:(id)arg0 ;
-(void)checkin;
-(void)clearBulletinWithRecordID:(id)arg0 ;
-(void)clearCachedUserRoutingPreferences;
-(void)clearCurrentAnnouncement;
-(void)clearLowFuelAlertBulletin;
-(void)clearMapsSuggestionsBulletin;
-(void)clearParkedCarBulletin;
-(void)clearPredictedRouteTrafficIncidentBulletin;
-(void)clearShownAnnouncements;
-(void)clearTrafficConditionsBulletin;
-(void)clearTrafficIncidentBulletinWithAlertID:(id)arg0 ;
-(void)clearTrafficIncidentsBulletin;
-(void)clearVenueBulletin;
-(void)closeConnection;
-(void)commitCollectionsSerializedRepresentation:(id)arg0 operationIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)commitFavoritesSerializedRepresentation:(id)arg0 reapingTombstones:(BOOL)arg1 operationIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)commitHistorySerializedRepresentation:(id)arg0 reapingTombstones:(BOOL)arg1 earliestKnownSyncDate:(id)arg2 operationIdentifier:(id)arg3 completion:(id)arg4 ;
-(void)commitPinnedPlacesSerializedRepresentation:(id)arg0 operationIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)eraseCollectionsSerializedRepresentationWithCompletion:(id)arg0 ;
-(void)eraseFavoritesSerializedRepresentationWithCompletion:(id)arg0 ;
-(void)eraseHistorySerializedRepresentationWithCompletion:(id)arg0 ;
-(void)erasePinnedPlacesSerializedRepresentationWithCompletion:(id)arg0 ;
-(void)eraseRAPData;
-(void)favoritesDidChange;
-(void)fetchAnnouncementsFilePath:(id)arg0 ;
-(void)fetchAnnouncementsURLPath:(id)arg0 ;
-(void)fetchCollectionsSerializedRepresentationWithCompletion:(id)arg0 ;
-(void)fetchCurrentAnnouncement:(id)arg0 ;
-(void)fetchDevicePushToken:(id)arg0 ;
-(void)fetchDownloadedAnnouncements:(id)arg0 ;
-(void)fetchFavoritesSerializedRepresentationWithCompletion:(id)arg0 ;
-(void)fetchHistorySerializedRepresentationWithCompletion:(id)arg0 ;
-(void)fetchLastKnownCollectionsOperationIdentifier:(id)arg0 ;
-(void)fetchLastKnownFavoritesOperationIdentifier:(id)arg0 ;
-(void)fetchLastKnownHistoryOperationIdentifier:(id)arg0 ;
-(void)fetchLastKnownPinnedPlacesOperationIdentifier:(id)arg0 ;
-(void)fetchPinnedPlacesSerializedRepresentationWithCompletion:(id)arg0 ;
-(void)fetchProblemStatus;
-(void)fetchShownAnnouncements:(id)arg0 ;
-(void)fetchUserRoutingPreferencesWithCompletion:(id)arg0 ;
-(void)handleMapsApplicationRemoval:(id)arg0 ;
-(void)historyDidChange;
-(void)noteMapstoolChangedFavoritesOnDisk;
-(void)noteMapstoolChangedHistoryOnDisk;
-(void)openConnection;
-(void)problemStatusResponseWithNotificationID:(id)arg0 completion:(id)arg1 ;
-(void)pushDaemonProxyReceivedNotificationData:(id)arg0 forType:(id)arg1 recordIdentifier:(id)arg2 ;
-(void)registerForTopic;
-(void)removeObserver:(id)arg0 ;
-(void)removeProblemStatusResponseWithNotificationID:(id)arg0 ;
-(void)resetAnnouncements;
-(void)setShouldUseDevAPNS:(BOOL)arg0 ;
-(void)shouldUseDevAPNS:(id)arg0 ;
-(void)showLowFuelAlertBulletinForLowFuelDetails:(id)arg0 ;
-(void)showMapsSuggestionsBulletinWithTitle:(id)arg0 message:(id)arg1 actionURL:(id)arg2 ;
-(void)showParkedCarBulletinForEvent:(id)arg0 ;
-(void)showParkedCarBulletinForEvent:(id)arg0 afterDelay:(CGFloat)arg1 ;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg0 replacingEvent:(id)arg1 ;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg0 replacingEvent:(id)arg1 afterDelay:(CGFloat)arg2 ;
-(void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg0 ;
-(void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg0 afterDelay:(CGFloat)arg1 ;
-(void)showTrafficConditionsBulletinWithTitle:(id)arg0 message:(id)arg1 actionURL:(id)arg2 ;
-(void)showTrafficIncidentAlertWithID:(id)arg0 withReroute:(BOOL)arg1 title:(id)arg2 description:(id)arg3 ;
-(void)showVenueBulletinWithTitle:(id)arg0 message:(id)arg1 actionURL:(id)arg2 ;
-(void)simulateAnnouncement:(id)arg0 afterDelay:(CGFloat)arg1 ;
-(void)simulateProblemResolution;
-(void)testByNotingHistoryChangedOnDisk;
-(void)updateActiveAnnouncement;
-(void)updateAnnouncements:(id)arg0 ;
-(void)updateMapsModelBackupAttributesIfNeeded;


@end


#endif