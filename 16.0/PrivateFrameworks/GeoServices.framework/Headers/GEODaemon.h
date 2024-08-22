// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEODAEMON_H
#define GEODAEMON_H

@class NSMutableDictionary, NSMutableArray, NSString, NSSet;
@protocol GEOPListStateCapturing, OS_dispatch_source, OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GEODaemon : NSObject <GEOPListStateCapturing>

 {
    NSMutableDictionary *_servers;
    NSMutableArray *_serversToStart;
    NSObject<OS_dispatch_source> *_sigInfoSrc;
    NSObject<OS_dispatch_source> *_sigTermSrc;
    NSObject<OS_dispatch_source> *_sigUsr1Src;
    NSObject<OS_xpc_object> *_listener;
    NSUInteger _stateCaptureHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *peers; // ivar: _peers
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serverQueue; // ivar: _serverQueue
@property (readonly, nonatomic) BOOL shouldExitOnShutdown;
@property (readonly) Class superclass;


-(id)_createPeerForConnection:(id)arg0 ;
-(id)captureStatePlistWithHints:(struct os_state_hints_s *)arg0 ;
-(id)initPrimaryDaemon;
-(id)initWithPort:(char *)arg0 createXPCListenerBlock:(id)arg1 ;
-(id)startServerClassIfNecessary:(Class)arg0 ;
-(void)_handleNewConnection:(id)arg0 ;
-(void)_localeChanged:(id)arg0 ;
-(void)_shutdown:(BOOL)arg0 ;
-(void)addServer:(id)arg0 ;
-(void)addServerClass:(Class)arg0 ;
-(void)dealloc;
-(void)peerDidConnect:(id)arg0 ;
-(void)peerDidDisconnect:(id)arg0 ;
-(void)shutdown;
-(void)shutdown:(BOOL)arg0 ;
-(void)start;


@end


#endif