// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRICORENWCONNECTION_H
#define SIRICORENWCONNECTION_H

@class NSURL, NSString, SAConnectionPolicyRoute, SAConnectionPolicy, NSArray, NSError;
@protocol SiriCoreConnectionProvider, OS_dispatch_queue, SiriCoreConnectionProviderDelegate, OS_nw_connection, OS_nw_endpoint, OS_nw_content_context, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "SiriCoreConnectionType.h"
#import "SiriCoreConnectionMetrics.h"

@interface SiriCoreNWConnection : NSObject <SiriCoreConnectionProvider>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<SiriCoreConnectionProviderDelegate> *_delegate;
    NSURL *_url;
    NSString *_resolvedHost;
    NSObject<OS_nw_connection> *_connection;
    NSObject<OS_nw_endpoint> *_endpoint;
    NSObject<OS_nw_content_context> *_content_context;
    SAConnectionPolicyRoute *_route;
    SAConnectionPolicy *_policy;
    BOOL _prefersWWAN;
    BOOL _connectByPOPEnabled;
    BOOL _isMPTCP;
    BOOL _isCanceled;
    BOOL _isEstablishing;
    BOOL _isReady;
    BOOL _usingTLS;
    NSString *_connectionId;
    SiriCoreConnectionType *_connectionType;
    int _interfaceIndex;
    id *_openCompletion;
    NSObject<OS_dispatch_source> *_openTimer;
    NSObject<OS_dispatch_source> *_staleConnectionTimer;
    NSUInteger _readWriteCounter;
    NSObject<OS_dispatch_source> *_connectionUnviableTimer;
    NSUInteger _betterPathAvailableNotificationMachTime;
    NSArray *_attemptedEndpoints;
    BOOL _isViable;
    BOOL _scopeToWiFiOnly;
    SiriCoreConnectionMetrics *_metrics;
    CGFloat _keepaliveIdleTime;
    CGFloat _keepaliveIntervalTime;
    CGFloat _retransmissionBasedConnectionDropTime;
    NSUInteger _keepaliveUnackedCount;
    CGFloat _staleConnectionInterval;
    NSError *_mostRecentErrorFromNWConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)getMetricsContext:(id)arg0 ;
-(BOOL)_connectByPOPMethod;
-(BOOL)hasActiveConnection;
-(BOOL)isCanceled;
-(BOOL)isEstablishing;
-(BOOL)isMultipath;
-(BOOL)isPeerConnectionError:(id)arg0 ;
-(BOOL)isPeerNotNearbyError:(id)arg0 ;
-(BOOL)isReady;
-(BOOL)providerStatsIndicatePoorLinkQuality;
-(BOOL)shouldFallbackFromError:(id)arg0 ;
-(BOOL)shouldFallbackQuickly;
-(BOOL)supportsInitialPayload;
-(id)_connectionId;
-(id)_getAttemptedEndpoints;
-(id)_queue;
-(id)_sendBufferBytesRemaining:(id)arg0 ;
-(id)_setParametersForHost:(char *)arg0 useTLS:(BOOL)arg1 initialPayload:(id)arg2 ;
-(id)_url;
-(id)analysisInfo;
-(id)connectionType;
-(id)delegate;
-(id)headerDataWithForceReconnect:(BOOL)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)resolvedHost;
-(void)_addCorrespondingMetricsFromConnection:(id)arg0 inState:(int)arg1 ;
-(void)_cancelConnectionUnviableTimer;
-(void)_cancelOpenTimer;
-(void)_cancelStaleConnectionTimer;
-(void)_closeWithError:(id)arg0 ;
-(void)_configureConnection:(id)arg0 ;
-(void)_getNWConnectionWithInitialData:(id)arg0 completion:(id)arg1 ;
-(void)_invokeOpenCompletionWithError:(id)arg0 ;
-(void)_receivedBetterRouteNotification:(BOOL)arg0 ;
-(void)_receivedViabilityChangeNotification:(BOOL)arg0 ;
-(void)_setupOpenTimer;
-(void)_setupStaleConnectionTimer;
-(void)_startConnectionUnviableTimer;
-(void)close;
-(void)dealloc;
-(void)openConnectionForURL:(id)arg0 withConnectionId:(id)arg1 initialPayload:(id)arg2 completion:(id)arg3 ;
-(void)readData:(id)arg0 ;
-(void)setConnectByPOPMethod:(BOOL)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setKeepAlive:(CGFloat)arg0 withInterval:(CGFloat)arg1 withCount:(NSUInteger)arg2 ;
-(void)setPolicyRoute:(id)arg0 ;
-(void)setPrefersWWAN:(BOOL)arg0 ;
-(void)setProviderConnectionPolicy:(id)arg0 ;
-(void)setRetransmitConnectionDropTime:(CGFloat)arg0 ;
-(void)setScopeIsWiFiOnly;
-(void)setStaleInterval:(CGFloat)arg0 ;
-(void)updateConnectionMetrics:(id)arg0 completion:(id)arg1 ;
-(void)writeData:(id)arg0 completion:(id)arg1 ;


@end


#endif