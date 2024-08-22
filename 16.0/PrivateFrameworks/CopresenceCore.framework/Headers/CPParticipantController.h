// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPPARTICIPANTCONTROLLER_H
#define CPPARTICIPANTCONTROLLER_H

@class NSMutableDictionary, NSString;
@protocol CPLinkDelegate, CPLinkProtocol, OS_dispatch_queue, CPConnectionProviding, CPParticipantDelegate;

#import <Foundation/Foundation.h>

#import "CPLink.h"
#import "CPParticipant.h"

@interface CPParticipantController : NSObject <CPLinkDelegate, CPLinkProtocol>

 {
    NSObject<OS_dispatch_queue> *_networkQueue;
    NSMutableDictionary *_links;
    os_unfair_lock_s _connectionsLock;
    NSUInteger _connectionRetryCount;
    Fsm<States, States::Idle, Triggers> fsm;
}


@property (weak, nonatomic) NSObject<CPConnectionProviding> *connectionProvider; // ivar: _connectionProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPParticipantDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CPLinkDelegate> *linkDelegate; // ivar: _linkDelegate
@property (readonly, nonatomic) CPLink *modelSyncLink; // ivar: _modelSyncLink
@property (readonly, nonatomic) CPParticipant *participant; // ivar: _participant
@property (readonly, nonatomic) CPLink *reliableLink; // ivar: _reliableLink
@property (nonatomic) unsigned int reliableLinkPriority; // ivar: _reliableLinkPriority
@property (readonly, nonatomic) CPLink *reservedReliableLink; // ivar: _reservedReliableLink
@property (readonly, nonatomic) CPLink *reservedUnreliableLink; // ivar: _reservedUnreliableLink
@property (readonly) Class superclass;
@property (readonly, nonatomic) CPLink *unreliableLink; // ivar: _unreliableLink
@property (nonatomic) unsigned int unreliableLinkPriority; // ivar: _unreliableLinkPriority


-(BOOL)_allLinksReady;
-(BOOL)isReady;
-(id)initWithParticipant:(id)arg0 connectionProvider:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)_cleanup;
-(void)_dumpConnectionState;
-(void)_initConnections;
-(void)_onError:(id)arg0 ;
-(void)_triggerAsyncFSMEvent:(int)arg0 ;
-(void)_triggerAsyncFSMEvent:(int)arg0 timeout:(NSUInteger)arg1 ;
-(void)close;
-(void)didBecomeReady:(id)arg0 ;
-(void)didFailWithError:(id)arg0 ;
-(void)didReceiveData:(id)arg0 from:(id)arg1 ;
-(void)notifyAppLaunch;
-(void)sendUnicastData:(id)arg0 ofType:(unsigned char)arg1 completion:(id)arg2 ;
-(void)setupLinkOfType:(unsigned char)arg0 completion:(id)arg1 ;


@end


#endif