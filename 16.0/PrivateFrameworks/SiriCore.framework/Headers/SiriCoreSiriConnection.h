// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRICORESIRICONNECTION_H
#define SIRICORESIRICONNECTION_H

@class NSMutableSet, NSMutableArray, NSString, SAConnectionPolicy, NSError, NSURL;
@protocol SiriCoreSiriBackgroundConnectionDelegate, SiriCoreSiriConnection, OS_dispatch_queue, OS_dispatch_group, SiriCoreSiriConnectionDelegate;

#import <Foundation/Foundation.h>

#import "SiriCoreSiriBackgroundConnection.h"

@interface SiriCoreSiriConnection : NSObject <SiriCoreSiriBackgroundConnectionDelegate, SiriCoreSiriConnection>

 {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isCanceled;
    BOOL _sendPings;
    BOOL _isCanceledInternal;
    NSMutableSet *_pendingBackgroundConnections;
    NSMutableSet *_comatoseBackgroundConnections;
    NSMutableSet *_scheduledRoutes;
    SiriCoreSiriBackgroundConnection *_activeBackgroundConnection;
    NSObject<OS_dispatch_group> *_activeConnectionGroup;
    NSMutableArray *_connMethodUsedHistory;
}


@property (copy, nonatomic) NSString *aceHost; // ivar: _aceHost
@property (copy, nonatomic) NSString *assistantIdentifier; // ivar: _assistantIdentifier
@property (copy, nonatomic) NSString *connectionId; // ivar: _connectionId
@property (copy, nonatomic) SAConnectionPolicy *connectionPolicy; // ivar: _connectionPolicy
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SiriCoreSiriConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL deviceIsInWalkaboutExperimentGroup; // ivar: _deviceIsInWalkaboutExperimentGroup
@property (nonatomic) BOOL forceReconnect; // ivar: _forceReconnect
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL imposePolicyBan; // ivar: _imposePolicyBan
@property (copy, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (copy, nonatomic) NSString *peerAssistantIdentifier; // ivar: _peerAssistantIdentifier
@property (retain, nonatomic) Class peerProviderClass; // ivar: _peerProviderClass
@property (copy, nonatomic) NSString *peerType; // ivar: _peerType
@property (copy, nonatomic) NSString *peerVersion; // ivar: _peerVersion
@property (nonatomic) BOOL prefersWWAN; // ivar: _prefersWWAN
@property (copy, nonatomic) NSString *productTypePrefix; // ivar: _productTypePrefix
@property (nonatomic) BOOL siriConnectionUsesPeerManagedSync; // ivar: _siriConnectionUsesPeerManagedSync
@property (nonatomic) BOOL skipPeer; // ivar: _skipPeer
@property (copy, nonatomic) NSError *skipPeerError; // ivar: _skipPeerError
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (copy, nonatomic) NSURL *url; // ivar: _url
@property (nonatomic) BOOL useWiFiHint; // ivar: _useWiFiHint
@property (nonatomic) BOOL usesProxyConnection; // ivar: _usesProxyConnection


-(id)_activeOrAnyPendingConnection;
-(id)_connectionInfoForRoute:(id)arg0 policy:(id)arg1 ;
-(id)analysisInfo;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)_accessPotentiallyActiveConnections:(id)arg0 ;
-(void)_cancelSynchronously:(id)arg0 ;
-(void)_handleLastEventFromBackgroundConnection:(id)arg0 pendingConnectionExhaustionHandler:(id)arg1 ;
-(void)_recordConnectionMethodForMetrics:(id)arg0 ;
-(void)_scheduleBackgroundConnectionWithRoute:(id)arg0 delay:(CGFloat)arg1 policy:(id)arg2 ;
-(void)_startBackgroundConnectionWithRoute:(id)arg0 policy:(id)arg1 ;
-(void)_waitForActiveConnection:(id)arg0 ;
-(void)barrier:(id)arg0 ;
-(void)cancelSynchronously:(BOOL)arg0 onQueue:(BOOL)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)getAnalysisInfo:(id)arg0 ;
-(void)getConnectionMetricsSynchronously:(BOOL)arg0 completion:(id)arg1 ;
-(void)probeConnection;
-(void)sendCommand:(id)arg0 errorHandler:(id)arg1 ;
-(void)sendCommands:(id)arg0 errorHandler:(id)arg1 ;
-(void)setSendPings:(BOOL)arg0 ;
-(void)siriBackgroundConnection:(id)arg0 didEncounterError:(id)arg1 analysisInfo:(id)arg2 ;
-(void)siriBackgroundConnection:(id)arg0 didEncounterIntermediateError:(id)arg1 ;
-(void)siriBackgroundConnection:(id)arg0 didOpenWithConnectionType:(id)arg1 routeId:(id)arg2 delay:(CGFloat)arg3 ;
-(void)siriBackgroundConnection:(id)arg0 didReceiveAceObject:(id)arg1 ;
-(void)siriBackgroundConnection:(id)arg0 willStartConnectionWithHTTPHeader:(id)arg1 ;
-(void)siriBackgroundConnection:(id)arg0 willStartWithConnectionType:(id)arg1 ;
-(void)siriBackgroundConnectionDidClose:(id)arg0 ;
-(void)start;


@end


#endif