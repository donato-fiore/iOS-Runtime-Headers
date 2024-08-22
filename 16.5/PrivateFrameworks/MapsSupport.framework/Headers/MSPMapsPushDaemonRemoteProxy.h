// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPMAPSPUSHDAEMONREMOTEPROXY_H
#define MSPMAPSPUSHDAEMONREMOTEPROXY_H

@class NSXPCConnection, NSHashTable;
@protocol MSPMapsPushDaemonProxyObserver, MSPMapsPushDaemonProxy;

#import <Foundation/Foundation.h>


@interface MSPMapsPushDaemonRemoteProxy : NSObject <MSPMapsPushDaemonProxyObserver, MSPMapsPushDaemonProxy>

 {
    NSXPCConnection *_connection;
    NSHashTable *_observers;
}




+(id)sharedInstance;
-(id)_connection;
-(id)_remoteObjectProxy;
-(id)init;
-(void)_clearConnection;
-(void)_connectToDaemonIfNeeded;
-(void)addObserver:(id)arg0 ;
-(void)clearBulletinWithRecordID:(id)arg0 ;
-(void)clearCurrentAnnouncement;
-(void)clearLowFuelAlertBulletin;
-(void)clearMapsSuggestionsBulletin;
-(void)clearParkedCarBulletin;
-(void)clearPredictedRouteTrafficIncidentBulletin;
-(void)clearTrafficIncidentBulletinWithAlertID:(id)arg0 ;
-(void)clearVenueBulletin;
-(void)closeConnection;
-(void)fetchCurrentAnnouncement:(id)arg0 ;
-(void)fetchDevicePushToken:(id)arg0 ;
-(void)handleMapsApplicationRemoval:(id)arg0 ;
-(void)pushDaemonProxyReceivedNotificationData:(id)arg0 forType:(id)arg1 recordIdentifier:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)resetAnnouncements;
-(void)showLowFuelAlertBulletinForLowFuelDetails:(id)arg0 ;
-(void)showMapsSuggestionsBulletinWithTitle:(id)arg0 message:(id)arg1 actionURL:(id)arg2 ;
-(void)showParkedCarBulletinForEvent:(id)arg0 ;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg0 replacingEvent:(id)arg1 ;
-(void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg0 ;
-(void)showTrafficIncidentAlertWithID:(id)arg0 withReroute:(BOOL)arg1 title:(id)arg2 description:(id)arg3 ;
-(void)showVenueBulletinWithTitle:(id)arg0 message:(id)arg1 actionURL:(id)arg2 ;
-(void)simulateProblemResolution;
-(void)simulateRAPStatusChangeNotification;
-(void)simulateUGCPhotoAttributionClearedNotification;
-(void)simulateUGCPhotoSubmissionResolution;


@end


#endif