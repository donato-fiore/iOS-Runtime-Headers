// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2PACKETTUNNELPROVIDER_H
#define NEIKEV2PACKETTUNNELPROVIDER_H

@class NSArray, NSDictionary, NWPath, NWResolver, NWPathEvaluator;
@protocol OS_dispatch_semaphore, OS_dispatch_queue, OS_dispatch_source;


#import "NEPacketTunnelProvider.h"
#import "NEUserNotification.h"
#import "NEIKEv2MOBIKE.h"
#import "NEIKEv2Rekey.h"
#import "NEIKEv2Server.h"
#import "NEIKEv2Session.h"

@interface NEIKEv2PacketTunnelProvider : NEPacketTunnelProvider

@property BOOL authenticationPrompted; // ivar: _authenticationPrompted
@property BOOL dispose; // ivar: _dispose
@property (copy) id *dnsResolverCompletionHandler; // ivar: _dnsResolverCompletionHandler
@property unsigned int flags; // ivar: _flags
@property (retain) NEUserNotification *g_notification; // ivar: _g_notification
@property (retain) NSObject<OS_dispatch_semaphore> *getSocketSemaphore; // ivar: _getSocketSemaphore
@property BOOL hasNAT; // ivar: _hasNAT
@property NSUInteger ifIndex; // ivar: _ifIndex
@property (retain) NSArray *ikeConfig; // ivar: _ikeConfig
@property BOOL isIfCellular; // ivar: _isIfCellular
@property BOOL isObserving; // ivar: _isObserving
@property (retain) NSArray *localTrafficSelectors; // ivar: _localTrafficSelectors
@property BOOL mobikeCapable; // ivar: _mobikeCapable
@property (retain) NEIKEv2MOBIKE *mobikeHandle; // ivar: _mobikeHandle
@property (retain) NSDictionary *options; // ivar: _options
@property (retain) NWPath *path; // ivar: _path
@property NSInteger pathStatus; // ivar: _pathStatus
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) NEIKEv2Rekey *rekey; // ivar: _rekey
@property (retain) NSArray *remoteTrafficSelectors; // ivar: _remoteTrafficSelectors
@property (retain) NWResolver *resolver; // ivar: _resolver
@property (retain) NSObject<OS_dispatch_source> *resolverWaitTimer; // ivar: _resolverWaitTimer
@property (retain) NWPathEvaluator *scopedPathEvaluator; // ivar: _scopedPathEvaluator
@property (retain) NEIKEv2Server *server; // ivar: _server
@property (retain) NEIKEv2Session *session; // ivar: _session
@property BOOL sessionDidConnect; // ivar: _sessionDidConnect
@property (copy) id *startTunnelCompletionHandler; // ivar: _startTunnelCompletionHandler
@property (copy) id *stopTunnelCompletionHandler; // ivar: _stopTunnelCompletionHandler
@property NSInteger tunnelKind; // ivar: _tunnelKind
@property *NEVirtualInterface_s virtualInterface; // ivar: _virtualInterface


-(BOOL)NEIKEv2ProviderAuthenticate:(id)arg0 ;
-(BOOL)invokeStartTunnelCompletionHandler:(id)arg0 ;
-(BOOL)tryAlternateServerAddresses;
-(NSInteger)tunnelTeardown;
-(id)createPacketTunnelNetworkSettings;
-(id)description;
-(id)init;
-(id)stringForTunnelKind;
-(int)handleRedirectNotification:(id)arg0 ;
-(int)tunnelBringup;
-(void)dealloc;
-(void)handleAdditionalServerAddressesNotification:(id)arg0 ;
-(void)handleConfigChange;
-(void)handleDNSResolution;
-(void)handleDefaultPathChange;
-(void)handleInterfaceChange:(BOOL)arg0 ;
-(void)handleInterfaceDown;
-(void)handleScopedPathChange;
-(void)ignoreSigPipe;
-(void)invokeCancelTunnel:(int)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)observerHelperHandler:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)reset:(BOOL)arg0 ;
-(void)resolveServerAddressIfNeeded:(id)arg0 ;
-(void)setTunnelNetworkSettings:(id)arg0 completionHandler:(id)arg1 ;
-(void)setupIKEv2CallbackBlocks;
-(void)startIKEv2TunnelWithOptions:(id)arg0 ;
-(void)startRekeyTimer:(BOOL)arg0 ;
-(void)startTunnelWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopIKEv2TunnelWithReason:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)stopObserving;
-(void)stopTunnelWithReason:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)wake;
-(void)wakeIKEv2;
-(void)watchIKESocketChange;


@end


#endif