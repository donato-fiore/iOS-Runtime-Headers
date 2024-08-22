// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPCOREXPCSERVICECLIENT_H
#define CPCOREXPCSERVICECLIENT_H

@class NSXPCConnection, NSMutableDictionary, NSString;
@protocol CPConnectionProviding, CPParticipantDelegate, CPLinkDelegate, CPCoreService, CPCoreServiceObserver, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CPParticipant.h"
#import "CPBroadcastLink.h"

@interface CPCoreXPCServiceClient : NSObject <CPConnectionProviding, CPParticipantDelegate, CPLinkDelegate, CPCoreService, CPCoreServiceObserver>

 {
    NSXPCConnection *_connection;
    NSMutableDictionary *_participantControllers;
    os_unfair_lock_s _participantsLock;
    NSUInteger _connectionRetryCount;
    NSObject<OS_dispatch_source> *_timer;
    CPParticipant *_cachedLocalParticipant;
    CPBroadcastLink *_broadcastLink;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPParticipant *localParticipant;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *networkQueue; // ivar: _networkQueue
@property (weak, nonatomic) NSObject<CPCoreServiceObserver> *observer; // ivar: _observer
@property (nonatomic) unsigned int reliableLinkPriority; // ivar: _reliableLinkPriority
@property (readonly, nonatomic) NSObject<CPCoreService> *remoteObjectProxy;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int unreliableLinkPriority; // ivar: _unreliableLinkPriority
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;


+(BOOL)_hasEntitlements;
-(BOOL)isLoggedIn;
-(id)_connectedParticipantsUnsafe;
-(id)_createDispatchTimer:(CGFloat)arg0 queue:(id)arg1 block:(id)arg2 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)allParticipants;
-(id)clientXPCInterface;
-(id)connectedParticipants;
-(id)initWithObserver:(id)arg0 ;
-(id)machServiceName;
-(id)reLinkForRemoteParticipant:(id)arg0 ofType:(unsigned char)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)reservedLinkForRemoteParticipant:(id)arg0 ofType:(unsigned char)arg1 ;
-(id)serverXPCInterface;
-(void)_closeBroadcastLink;
-(void)_getConnectedParticipantsWithReply:(id)arg0 ;
-(void)_participantDidJoinSession:(id)arg0 ;
-(void)_participantDidLeaveSession:(id)arg0 ;
-(void)_participantProcessConnectedFrom:(id)arg0 ;
-(void)_participantProcessDisconnectedFrom:(id)arg0 ;
-(void)_retryConnection;
-(void)_setupBroadcastLink;
-(void)_tearDownParticipants;
-(void)_tearDownTimer;
-(void)activeSceneSharingRequestsWithReply:(id)arg0 ;
-(void)activeSession:(id)arg0 ;
-(void)activeSharingRequestsWithReply:(id)arg0 ;
-(void)broadcastUnreliableData:(id)arg0 completion:(id)arg1 ;
-(void)currentlySharedAppsWithReply:(id)arg0 ;
-(void)dealloc;
-(void)didFailWithError:(id)arg0 ;
-(void)didInitiateAppSharingRequest:(id)arg0 ;
-(void)didReceiveAppSharingRequestFrom:(id)arg0 sharingRequest:(id)arg1 ;
-(void)didReceiveBroadcastData:(id)arg0 from:(id)arg1 ;
-(void)didReceiveData:(id)arg0 ofType:(unsigned char)arg1 from:(id)arg2 ;
-(void)getConnectedParticipantsWithReply:(id)arg0 ;
-(void)isConnectedToSession:(id)arg0 ;
-(void)localAccountName:(id)arg0 ;
-(void)participant:(id)arg0 didBecomeAvailable:(BOOL)arg1 ;
-(void)participantDidJoinSession:(id)arg0 ;
-(void)participantDidLaunchSharedApp:(id)arg0 appBundleId:(id)arg1 ;
-(void)participantDidLeaveSession:(id)arg0 ;
-(void)prefetchParticipants;
-(void)removeSessionObserver:(id)arg0 ;
-(void)requestBroadcastConnectionForService:(id)arg0 completion:(id)arg1 ;
-(void)requestConnectionObjectForRemoteParticipant:(id)arg0 linkType:(unsigned char)arg1 completion:(id)arg2 ;
-(void)requestConnectionObjectForRemoteParticipantSync:(id)arg0 linkType:(unsigned char)arg1 completion:(id)arg2 ;
-(void)resetPriorityForReliableLink:(unsigned int)arg0 ;
-(void)resetPriorityForUnreliableLink:(unsigned int)arg0 ;
-(void)sendAppSharingRequest:(id)arg0 completion:(id)arg1 ;
-(void)sendUnicastData:(id)arg0 ofType:(unsigned char)arg1 toParticipants:(id)arg2 completion:(id)arg3 ;
-(void)sessionDidChange:(id)arg0 ;
-(void)sessionDidEnd:(id)arg0 ;
-(void)sessionDidStart:(id)arg0 ;
-(void)willInitiateAppSharingRequest:(id)arg0 sharingHandler:(id)arg1 ;


@end


#endif