// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANPLAYBACKSESSIONSERVICELISTENER_H
#define ANPLAYBACKSESSIONSERVICELISTENER_H

@class NSString, NSMutableSet, NSXPCListener;
@protocol ANLocalPlaybackSessionServiceInterface, ANRemotePlaybackSessionServiceInterface, NSXPCListenerDelegate, ANAnnouncementCoordinatorDelegate, ANRemotePlaybackStatusProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ANPlaybackSessionServiceListener : NSObject <ANLocalPlaybackSessionServiceInterface, ANRemotePlaybackSessionServiceInterface, NSXPCListenerDelegate, ANAnnouncementCoordinatorDelegate, ANRemotePlaybackStatusProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableSet *localPlaybackClients; // ivar: _localPlaybackClients
@property (readonly, nonatomic) NSXPCListener *localPlaybackSessionListener; // ivar: _localPlaybackSessionListener
@property (readonly) NSObject<OS_dispatch_queue> *playbackClientsSerialQueue; // ivar: _playbackClientsSerialQueue
@property (retain) NSMutableSet *remotePlaybackClients; // ivar: _remotePlaybackClients
@property (readonly, nonatomic) NSXPCListener *remotePlaybackSessionListener; // ivar: _remotePlaybackSessionListener
@property (readonly, nonatomic) BOOL remoteSessionsActive;
@property (readonly) Class superclass;


-(BOOL)_endSessionForConnection:(id)arg0 ;
-(BOOL)isExternalPlaybackActiveForEndpointID:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_clientForConnection:(id)arg0 ;
-(id)init;
-(void)_removeConnection:(id)arg0 ;
-(void)_setTimersActive:(BOOL)arg0 forEndPointID:(id)arg1 ;
-(void)cleanForExit;
-(void)coordinator:(id)arg0 didFinishPlayingAnnouncementsForEndpointID:(id)arg1 ;
-(void)coordinator:(id)arg0 didReceiveAnnouncement:(id)arg1 forGroupID:(id)arg2 forEndpointID:(id)arg3 ;
-(void)coordinator:(id)arg0 didStartPlayingAnnouncementsAtMachAbsoluteTime:(NSUInteger)arg1 forEndpointID:(id)arg2 ;
-(void)coordinator:(id)arg0 didUpdateAnnouncements:(id)arg1 forGroupID:(id)arg2 forEndpointID:(id)arg3 ;
-(void)coordinator:(id)arg0 didUpdatePlaybackState:(NSUInteger)arg1 forEndpointID:(id)arg2 ;
-(void)endSessionWithReply:(id)arg0 ;
-(void)lastPlayedAnnouncementInfoForEndpointID:(id)arg0 completionHandler:(id)arg1 ;
-(void)playbackStateForEndpointID:(id)arg0 completionHandler:(id)arg1 ;
-(void)resumeWithEndpointID:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendPlaybackCommand:(id)arg0 forEndpointID:(id)arg1 completionHandler:(id)arg2 ;
-(void)setPlaybackStartedForAnnouncement:(id)arg0 ;
-(void)setPlaybackStoppedForAnnouncement:(id)arg0 ;
-(void)startSessionForGroupID:(id)arg0 reply:(id)arg1 ;


@end


#endif