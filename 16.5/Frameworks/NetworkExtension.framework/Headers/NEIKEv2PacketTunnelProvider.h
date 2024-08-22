// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2PACKETTUNNELPROVIDER_H
#define NEIKEV2PACKETTUNNELPROVIDER_H

@class NSArray, NSDictionary, NWResolver, NWPath, NWPathEvaluator;
@protocol OS_dispatch_source, OS_dispatch_semaphore, OS_dispatch_queue;


#import "NEPacketTunnelProvider.h"
#import "NEIKEv2Server.h"
#import "NEIKEv2Rekey.h"
#import "NEIKEv2MOBIKE.h"
#import "NEUserNotification.h"
#import "NEIKEv2Session.h"

@interface NEIKEv2PacketTunnelProvider : NEPacketTunnelProvider {
    BOOL _isIfCellular;
    BOOL _hasNAT;
    BOOL _dispose;
    BOOL _sessionDidConnect;
    BOOL _mobikeCapable;
    BOOL _authenticationPrompted;
    BOOL _isObserving;
    BOOL _shouldRetryWithRandomLocalPort;
    unsigned int _flags;
    NSArray *_ikeConfig;
    NSArray *_localTrafficSelectors;
    NSArray *_remoteTrafficSelectors;
    NSDictionary *_options;
    *NEVirtualInterface_s _virtualInterface;
    NEIKEv2Server *_server;
    NWResolver *_resolver;
    NSObject<OS_dispatch_source> *_resolverWaitTimer;
    NEIKEv2Rekey *_rekey;
    NSObject<OS_dispatch_semaphore> *_getSocketSemaphore;
    NEIKEv2MOBIKE *_mobikeHandle;
    id *_startTunnelCompletionHandler;
    id *_stopTunnelCompletionHandler;
    id *_dnsResolverCompletionHandler;
    NSInteger _tunnelKind;
    NWPath *_path;
    NEUserNotification *_g_notification;
    NSUInteger _randomLocalPortFallbackRetryCount;
    NEIKEv2Session *_session;
    NSUInteger _ifIndex;
    NSInteger _pathStatus;
    NSObject<OS_dispatch_queue> *_queue;
    NWPathEvaluator *_scopedPathEvaluator;
}




-(id)description;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)observerHelperHandler:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setTunnelNetworkSettings:(id)arg0 completionHandler:(id)arg1 ;
-(void)startTunnelWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopTunnelWithReason:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)wake;


@end


#endif