// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANANNOUNCEMENTCOORDINATOR_H
#define ANANNOUNCEMENTCOORDINATOR_H

@class NSMutableDictionary, NSString, NSMapTable, ANParticipant, NSSet;
@protocol ANAnnouncementManagerDelegte, ANPlaybackManagerDelegate, ANPlaybackManagerDataSource, ANMessengerDelegate, ANCompanionConnectionDelegate, OS_os_log, OS_dispatch_queue, ANRemotePlaybackStatusProvider;

#import <Foundation/Foundation.h>

#import "ANCompanionConnection.h"
#import "ANMessenger.h"
#import "ANAnnouncementStatePublisher.h"
#import "_TtC14AnnounceDaemon31SiriReferenceResolutionDonation.h"

@interface ANAnnouncementCoordinator : NSObject <ANAnnouncementManagerDelegte, ANPlaybackManagerDelegate, ANPlaybackManagerDataSource, ANMessengerDelegate, ANCompanionConnectionDelegate>



@property (readonly, nonatomic) NSMutableDictionary *announcementManagers; // ivar: _announcementManagers
@property (retain, nonatomic) ANCompanionConnection *companionConnection; // ivar: _companionConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMapTable *delegatesToQueues; // ivar: _delegatesToQueues
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ANParticipant *localParticipant;
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) ANMessenger *messenger; // ivar: _messenger
@property (readonly, nonatomic) NSMutableDictionary *playbackManagers; // ivar: _playbackManagers
@property (retain, nonatomic) ANAnnouncementStatePublisher *playbackStatePublisher; // ivar: _playbackStatePublisher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (weak, nonatomic) NSObject<ANRemotePlaybackStatusProvider> *remotePlaybackStatusProvider; // ivar: _remotePlaybackStatusProvider
@property (readonly, nonatomic) NSSet *scanningDeviceCandidates;
@property (readonly, nonatomic) _TtC14AnnounceDaemon31SiriReferenceResolutionDonation *siriRRDonation; // ivar: _siriRRDonation
@property (readonly) Class superclass;


+(id)localDeviceIdentifier;
+(id)sharedCoordinator;
-(BOOL)_removeAnnouncementManagerForIdentifier:(id)arg0 ;
-(BOOL)_removePlaybackManagerForIdentifier:(id)arg0 ;
-(NSUInteger)playbackStateForEndpointID:(id)arg0 ;
-(id)_createAnnouncementManagerForIdentifier:(id)arg0 ;
-(id)_createPlaybackManagerForIdentifier:(id)arg0 ;
-(id)_endpointIDForAnnouncementManager:(id)arg0 ;
-(id)_endpointIDForPlaybackManager:(id)arg0 ;
-(id)allAnnouncementsSortedByReceiptForEndpointID:(id)arg0 ;
-(id)announcementForID:(id)arg0 endpointID:(id)arg1 ;
-(id)announcementsForGroupID:(id)arg0 endpointID:(id)arg1 ;
-(id)announcementsForIDs:(id)arg0 endpointID:(id)arg1 ;
-(id)announcementsForPlaybackManager:(id)arg0 ;
-(id)init;
-(id)lastPlayedAnnouncementInfoForEndpointID:(id)arg0 ;
-(id)playbackManager:(id)arg0 announcementsForIdentifiers:(id)arg1 ;
-(id)resolveIdentifier:(id)arg0 ;
-(void)_executeBlockForDelegates:(id)arg0 ;
-(void)_handleReceivedAnnouncement:(id)arg0 ;
-(void)_initializeManagers;
-(void)_notifyDidReceiveAnnouncement:(id)arg0 forEndpointID:(id)arg1 ;
-(void)_removeManagersForIdentifier:(id)arg0 ;
-(void)addAnnouncement:(id)arg0 forEndpointID:(id)arg1 completion:(id)arg2 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)announcementManager:(id)arg0 announcements:(id)arg1 didChangeForGroupID:(id)arg2 ;
-(void)cleanForExit;
-(void)cleanUpOldAnnouncementsForPlaybackManager:(id)arg0 ;
-(void)companionDidPlayAnnouncement:(id)arg0 ;
-(void)failedToDeliverAnnouncement:(id)arg0 error:(id)arg1 ;
-(void)mockAnnouncement:(id)arg0 playbackDeadline:(id)arg1 sentHandler:(id)arg2 ;
-(void)pauseAllTimersForEndpointID:(id)arg0 ;
-(void)performPlaybackCommand:(id)arg0 endpointID:(id)arg1 completionHandler:(id)arg2 ;
-(void)playbackManager:(id)arg0 didFinishPlayingAnnouncement:(id)arg1 withOptions:(NSUInteger)arg2 ;
-(void)playbackManager:(id)arg0 didStartPlayingAnnouncement:(id)arg1 ;
-(void)playbackManager:(id)arg0 didStartPlayingAnnouncementsAtMachAbsoluteTime:(NSUInteger)arg1 ;
-(void)playbackManager:(id)arg0 didUpdatePlaybackState:(NSUInteger)arg1 announcement:(id)arg2 ;
-(void)playbackManagerDidFinishPlayingAnnouncements:(id)arg0 ;
-(void)receivedAnnouncement:(id)arg0 ;
-(void)removeOldAnnouncementsForEndpointID:(id)arg0 ;
-(void)resetAllTimersForEndpointID:(id)arg0 ;
-(void)resumeAllTimersForEndpointID:(id)arg0 ;
-(void)sendRequest:(id)arg0 sentHandler:(id)arg1 ;
-(void)setPlaybackStartedForAnnouncement:(id)arg0 endpointID:(id)arg1 ;
-(void)setPlaybackStoppedForAnnouncement:(id)arg0 endpointID:(id)arg1 ;
-(void)updateAnnouncement:(id)arg0 statusFlags:(NSUInteger)arg1 endpointID:(id)arg2 ;


@end


#endif