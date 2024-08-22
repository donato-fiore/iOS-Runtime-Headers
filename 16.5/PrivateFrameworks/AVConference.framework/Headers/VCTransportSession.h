// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCTRANSPORTSESSION_H
#define VCTRANSPORTSESSION_H

@class NSString, NSMutableArray, TimingCollection;
@protocol OS_dispatch_queue, VCConnectionProtocol;

#import <Foundation/Foundation.h>

#import "VCConnectionManager.h"

@interface VCTransportSession : NSObject {
    BOOL _isCallActive;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSString *_localFrameworkVersion;
    NSString *_remoteFrameworkVersion;
    *opaqueRTCReporting _reportingAgent;
    NSMutableArray *_streams;
    _opaque_pthread_mutex_t _stateLock;
    os_unfair_lock_s _nwMonitorLock;
    *unk _notificationHandler;
    *unk _packetEventHandler;
    *void _handlerContext;
}


@property (readonly, nonatomic) unsigned int basebandNotificationRegistrationToken; // ivar: _basebandNotificationRegistrationToken
@property (readonly, nonatomic) VCConnectionManager *connectionManager; // ivar: _connectionManager
@property (retain, nonatomic) NSObject *connectionSetupPiggybackBlob; // ivar: _connectionSetupPiggybackBlob
@property (readonly, nonatomic) unsigned int connectionSetupRTTEstimate;
@property (readonly, nonatomic) int detailedErrorCode;
@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler
@property (nonatomic, setter=setCallActive:) BOOL isCallActive;
@property (readonly, nonatomic) BOOL isHandoverSupported;
@property (readonly) BOOL isIPv6;
@property (readonly, nonatomic) BOOL isRemoteOSPreLion;
@property (readonly) int networkInterfaceType;
@property (readonly) unsigned int networkMTU;
@property (readonly, nonatomic) *tagVCNWConnectionMonitor nwMonitor; // ivar: _monitor
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *nwMonitorEventHandlerQueue; // ivar: _handlerQueue
@property (retain, nonatomic) TimingCollection *perfTimings; // ivar: _perfTimings
@property (retain, nonatomic) NSObject<VCConnectionProtocol> *registeredConnection; // ivar: _registeredConnection
@property (nonatomic) BOOL requiresWiFi; // ivar: _requiresWiFi
@property (nonatomic) BOOL shouldSetupNWMonitor; // ivar: _shouldSetupNWMonitor
@property (nonatomic) BOOL useCompressedConnectionData; // ivar: _useCompressedConnectionData


+(int)vtpPacketTypeForStreamType:(unsigned int)arg0 ;
+(unsigned int)trafficClassForStreamType:(unsigned int)arg0 ;
-(BOOL)getConnectionSetupData:(*id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(id)initWithNotificationQueue:(id)arg0 reportingAgent:(struct opaqueRTCReporting *)arg1 ;
-(id)initWithNotificationQueue:(id)arg0 reportingAgent:(struct opaqueRTCReporting *)arg1 notificationHandler:(*unk)arg2 eventHandler:(*unk)arg3 handlerQueue:(id)arg4 context:(*void)arg5 ;
-(int)createTransportStream:(struct OpaqueVCTransportStream **)arg0 withType:(unsigned int)arg1 options:(id)arg2 ;
-(int)createVFD:(*int)arg0 forStreamType:(unsigned int)arg1 ;
-(int)deregisterNotificationForTransportStream:(struct OpaqueVCTransportStream *)arg0 ;
-(int)flushBasebandQueueForConnection:(id)arg0 payloadInfoList:(id)arg1 ;
-(int)flushBasebandQueueWithPayloads:(id)arg0 flushCount:(*unsigned int)arg1 ;
-(int)getSignalStrengthBars:(*int)arg0 displayBars:(*int)arg1 maxDisplayBars:(*int)arg2 ;
-(int)registerBasebandNotificationsForConnection:(id)arg0 ;
-(int)updateBasebandForConnection:(id)arg0 ;
-(int)updateQualityIndicator:(int)arg0 isIPv6:(BOOL)arg1 ;
-(struct tagVCNWConnectionMonitor *)createNWMonitor;
-(void)callEventHandlerWithEvent:(unsigned int)arg0 info:(id)arg1 ;
-(void)cleanupBaseband;
-(void)dealloc;
-(void)deregisterBasebandNotifications;
-(void)destroyNWMonitor;
-(void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)arg0 ;
-(void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)arg0 ;
-(void)handleTransportStreamDeactivated:(struct OpaqueVCTransportStream *)arg0 ;
-(void)reportNetworkConditionsDegraded;
-(void)resetActiveConnection;
-(void)setConnectionSelectionVersionWithLocalFrameworkVersion:(id)arg0 remoteFrameworkVersion:(id)arg1 ;
-(void)setOneToOneModeEnabled:(BOOL)arg0 isInitiator:(BOOL)arg1 ;
-(void)setupNWMonitor;
-(void)setupNWMonitorNotificationHandler;
-(void)setupNWMonitorPacketEventHandler;
-(void)start;
-(void)stop;


@end


#endif