// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRICORENETWORKINGANALYTICS_H
#define SIRICORENETWORKINGANALYTICS_H

@class NSUUID;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SiriCoreNetworkingAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_netId;
    NSUUID *_orchestratorRequestId;
    BOOL _isConnectionActive;
    unsigned int _sequenceNumber;
}




+(id)debugNetworkInterfacesFromSiriCoreConnectionMetrics:(id)arg0 ;
+(id)debugSessionConnectionNetworkFromSiriCoreConnectionMetrics:(id)arg0 ;
+(id)endpointFromDictionary:(id)arg0 ;
+(id)endpointsFromArray:(id)arg0 ;
+(id)establishmentResolutionFromArray:(id)arg0 ;
+(id)handShakeProtocolFromArray:(id)arg0 ;
+(id)networkInterfacesFromDictionary:(id)arg0 ;
+(id)pathInterfacesFromArray:(id)arg0 ;
+(id)pingInfoFromSiriCoreConnectionMetrics:(id)arg0 ;
+(id)proxyConfigurationFromDictionary:(id)arg0 ;
+(id)sessionConnectionNetworkFromSiriCoreConnectionMetrics:(id)arg0 ;
+(id)sessionConnectionQualityFromSiriCoreConnectionMetrics:(id)arg0 ;
+(id)sharedSiriCoreNetworkingAnalytics;
+(int)connectionMethodFromString:(id)arg0 ;
+(int)connectionModeFromString:(id)arg0 ;
+(int)connectionTypeFromString:(id)arg0 ;
+(int)endpointTypeFromNumber:(id)arg0 ;
+(int)handshakeProtocolFromString:(id)arg0 ;
+(int)pathStatusFromNumber:(id)arg0 ;
+(int)pathTypeFromNumber:(id)arg0 ;
+(int)phyModeFromString:(id)arg0 ;
+(int)qualityFromString:(id)arg0 ;
+(int)sessionStateFromString:(id)arg0 ;
+(int)sessionTypeFromString:(id)arg0 ;
+(int)snapshotStateFromStringEvent:(id)arg0 ;
+(int)tlsFromString:(id)arg0 ;
-(BOOL)emitLogDebug;
-(id)_createRequestLinkInfoFromUUID:(id)arg0 component:(int)arg1 ;
-(id)_createSchemaClientEventFromUUID:(id)arg0 ;
-(id)_init;
-(id)init;
-(unsigned int)getSequenceNumber;
-(void)increaseSequenceNumber;
-(void)logDebugNetworkConnectionStatePreparationSnapshotCaptured:(id)arg0 ;
-(void)logDebugNetworkConnectionStateReadySnapshotCaptured:(id)arg0 ;
-(void)logDebugSessionConnectionSnapshotCaptured:(id)arg0 ;
-(void)logNetworkConnectionStatePreparationSnapshotCaptured:(id)arg0 ;
-(void)logNetworkConnectionStateReadySnapshotCaptured:(id)arg0 ;
-(void)logPeerConnectionFailed:(id)arg0 ;
-(void)logRequestLinkBetweenOrchestratorAndNetworkComponent;
-(void)logSessionConnectionFailed:(id)arg0 ;
-(void)logSessionConnectionHttpHeaderCreated:(id)arg0 ;
-(void)logSessionConnectionSnapshotCaptured:(id)arg0 ;
-(void)reset;
-(void)resetNetId;
-(void)resetSequenceNumber;
-(void)updateIsConnectionActive:(BOOL)arg0 ;
-(void)updateOrchestratorRequestId:(id)arg0 ;


@end


#endif