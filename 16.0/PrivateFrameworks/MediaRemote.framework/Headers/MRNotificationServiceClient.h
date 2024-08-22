// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRNOTIFICATIONSERVICECLIENT_H
#define MRNOTIFICATIONSERVICECLIENT_H


#import <Foundation/Foundation.h>

#import "MRMediaRemoteServiceClient.h"

@interface MRNotificationServiceClient : NSObject {
    MRMediaRemoteServiceClient *_serviceClient;
}




-(BOOL)_processNeedsNonPlayerPathBasedNotificationsForBackwardCompatabilitySupport;
-(BOOL)_shouldPostNotifications;
-(id)initWithServiceClient:(id)arg0 ;
-(void)_handleActiveApplicationDidChangeNotification:(id)arg0 ;
-(void)_handleActiveOriginDidChangeNotification:(id)arg0 ;
-(void)_handleActivePlayerDidChangeNotification:(id)arg0 ;
-(void)_handleActiveSystemEndpointDidChangeNotification:(id)arg0 ;
-(void)_handleApplicationClientStateDidChangeNotification:(id)arg0 ;
-(void)_handleApplicationDidForegroundNotification:(id)arg0 ;
-(void)_handleApplicationDidRegisterNotification:(id)arg0 ;
-(void)_handleApplicationDidUnregisterNotification:(id)arg0 ;
-(void)_handleApplicationDisplayNameDidChangeNotification:(id)arg0 ;
-(void)_handleDeviceInfoDidChangeNotification:(id)arg0 ;
-(void)_handleOriginDidRegisterNotification:(id)arg0 ;
-(void)_handleOriginDidUnregisterNotification:(id)arg0 ;
-(void)_handlePlayerContentItemArtworkDidChangeNotification:(id)arg0 ;
-(void)_handlePlayerContentItemsDidChangeNotification:(id)arg0 ;
-(void)_handlePlayerDidRegisterNotification:(id)arg0 ;
-(void)_handlePlayerDidUnregisterNotification:(id)arg0 ;
-(void)_handlePlayerIsPlayingDidChangeNotification:(id)arg0 ;
-(void)_handlePlayerNowPlayingInfoDidChangeNotification:(id)arg0 ;
-(void)_handlePlayerPlaybackQueueDidChangeNotification:(id)arg0 ;
-(void)_handlePlayerPlaybackStateDidChangeNotification:(id)arg0 ;
-(void)_handlePlayerStateDidChangeNotification:(id)arg0 ;
-(void)_handlePlayerSupportedCommandsDidChangeNotification:(id)arg0 ;
-(void)_handleVolumeControlCapabilitiesDidChangeNotification:(id)arg0 ;
-(void)_handleVolumeDidChangeNotification:(id)arg0 ;
-(void)_maybePostPlaybackQueueNowPlayingItemChangedNotificationFromPlaybackQueueChangedNotification:(id)arg0 ;
-(void)_notificationFired:(id)arg0 clientNotification:(id)arg1 originNotification:(id)arg2 nowPlayingNotification:(id)arg3 ;
-(void)_notificationFired:(id)arg0 originNotification:(id)arg1 nowPlayingNotification:(id)arg2 ;
-(void)_notificationFired:(id)arg0 playerPathNotifcation:(id)arg1 originNotification:(id)arg2 nowPlayingNotification:(id)arg3 ;
-(void)_postDefaultAppilicationNotifications:(id)arg0 ;
-(void)_postDefaultOriginNotifications:(id)arg0 ;
-(void)_postDefaultPlayerNotificationsWithUserInfo:(id)arg0 object:(id)arg1 ;
-(void)_processActiveApplicationInvalidationHandlersForNotification:(id)arg0 ;
-(void)_processActiveOriginInvalidationHandlersForNotification:(id)arg0 ;
-(void)_processActivePlayerInvalidationHandlersForNotification:(id)arg0 ;
-(void)_processApplicationInvalidationHandlersForNotification:(id)arg0 ;
-(void)_processOriginInvalidationHandlersForNotification:(id)arg0 ;
-(void)_processPlayerInvalidationHandlersForNotification:(id)arg0 ;
-(void)registerCallbacks;


@end


#endif