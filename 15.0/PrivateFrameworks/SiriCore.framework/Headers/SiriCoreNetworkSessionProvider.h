// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRICORENETWORKSESSIONPROVIDER_H
#define SIRICORENETWORKSESSIONPROVIDER_H

@class NSURL, SAConnectionPolicyRoute, SAConnectionPolicy, NSString, NSURLSession, NSOperationQueue, NSURLSessionStreamTask, NSInputStream, NSOutputStream;
@protocol NSURLSessionDelegate, NSStreamDelegate, SiriCoreConnectionProvider, SiriCoreConnectionProviderDelegate, OS_dispatch_queue, OS_dispatch_group, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "SiriCoreConnectionType.h"

@interface SiriCoreNetworkSessionProvider : NSObject <NSURLSessionDelegate, NSStreamDelegate, SiriCoreConnectionProvider>

 {
    id<SiriCoreConnectionProviderDelegate> *_delegate;
    NSURL *_url;
    SAConnectionPolicyRoute *_route;
    SAConnectionPolicy *_policy;
    BOOL _prefersWWAN;
    BOOL _connectByPOPEnabled;
    BOOL _isMPTCP;
    SiriCoreConnectionType *_connectionType;
    int _interfaceIndex;
    NSString *_interfaceName;
    BOOL _isCanceled;
    BOOL _isEstablishing;
    BOOL _isReady;
    NSURLSession *_urlSession;
    NSOperationQueue *_opQueue;
    NSURLSessionStreamTask *_streamTask;
    id *_completion_block;
    NSString *_resolvedHost;
    NSString *_connectionId;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _readBuffer;
    NSInputStream *_inputStream;
    NSObject<OS_dispatch_group> *_readGroup;
    BOOL _waitingOnReadGroup;
    NSOutputStream *_outputStream;
    NSObject<OS_dispatch_source> *_openTimer;
    NSObject<OS_dispatch_source> *_staleConnectionTimer;
    NSUInteger _readWriteCounter;
    CGFloat _staleConnectionInterval;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)getMetricsContext:(id)arg0 ;
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
-(id)analysisInfo;
-(id)connectionType;
-(id)delegate;
-(id)headerDataWithForceReconnect:(BOOL)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)resolvedHost;
-(void)URLSession:(id)arg0 betterRouteDiscoveredForStreamTask:(id)arg1 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 streamTask:(id)arg1 didBecomeInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)_cancelOpenTimer;
-(void)_cancelStaleConnectionTimer;
-(void)_closeWithError:(id)arg0 ;
-(void)_invokeOpenCompletionWithError:(id)arg0 ;
-(void)_setupOpenTimer;
-(void)_setupStaleConnectionTimer;
-(void)_streamDidBecomeUnviable;
-(void)close;
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
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;
-(void)updateConnectionMetrics:(id)arg0 completion:(id)arg1 ;
-(void)writeData:(id)arg0 completion:(id)arg1 ;


@end


#endif