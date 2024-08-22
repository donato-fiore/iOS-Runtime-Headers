// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCTRANSPORT_H
#define VCTRANSPORT_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCTransport : NSObject {
    *tagHANDLE tpHandle;
    NSMutableDictionary *iceBlocks;
    NSObject<OS_dispatch_queue> *delegateQueue;
    NSMutableDictionary *dataReceivedHandlers;
    NSObject<OS_dispatch_queue> *dataReceivedHandlerQueue;
}




+(id)sharedInstance;
-(?)iceConnectedForCallID:(?)arg0 result:(?)arg1 didReceivePacket:(?)arg2 useRelay:(?)arg3 secretKeyskeResult;
-(?)setupDTLSSecurity:(?)arg0 connectionResultcompletionHandler;
-(?)updateBasebandForConnection:(?)arg0 notificationRegistrationTokencallType;
-(BOOL)ipPortStillExists:(struct tagIPPORT *)arg0 requiresWifi:(BOOL)arg1 ;
-(id)getRemoteCIDForDstIPPort:(struct tagIPPORT *)arg0 callID:(unsigned int)arg1 ;
-(id)init;
-(int)detailedErrorCodeForConnectionWithCallID:(unsigned int)arg0 ;
-(int)discardRelayBindingForCallID:(unsigned int)arg0 ;
-(int)discardRelayBindingForCallID:(unsigned int)arg0 withChannelNumber:(int)arg1 ;
-(int)flushBasebandQueue:(*void)arg0 ;
-(int)getCellTechForCallID:(unsigned int)arg0 localCellTech:(*int)arg1 isLocalCellularQoSEnabled:(*int)arg2 remoteCellTech:(*int)arg3 isRemoteCellularQoSEnabled:(*int)arg4 ;
-(int)getConnectionDataForCallID:(unsigned int)arg0 version:(unsigned char)arg1 useCompressedData:(BOOL)arg2 pConnectionData:(**void)arg3 connectDataSizeInBytes:(*int)arg4 relayDictionary:(struct __CFDictionary *)arg5 interfaceUpdate:(BOOL)arg6 nonCellularCandidateTimeout:(CGFloat)arg7 ;
-(int)getLoopbackIP:(struct tagIPPORT *)arg0 ;
-(int)getNextBestCandidate:(struct tagCANDIDATE *)arg0 callID:(unsigned int)arg1 isLocal:(int)arg2 IPPortToExclude:(struct tagIPPORT *)arg3 ;
-(int)getRemoteICEVersion:(unsigned int)arg0 remoteICEVersion:(*unsigned int)arg1 ;
-(int)getSignalStrengthBars:(*int)arg0 displayBars:(*int)arg1 maxDisplayBars:(*int)arg2 ;
-(int)processRemoteInterfaceChangeMessageWithLocalCallID:(unsigned int)arg0 remoteCallID:(unsigned int)arg1 remoteData:(*void)arg2 remoteLen:(int)arg3 remoteCandidateVersion:(unsigned short)arg4 ;
-(int)sendData:(id)arg0 localCallID:(unsigned int)arg1 remoteCallID:(unsigned int)arg2 encrypted:(BOOL)arg3 OFTType:(int)arg4 ;
-(int)sendUDPPacketReliableEncrypted:(id)arg0 localIPPort:(struct tagIPPORT *)arg1 destinationIPPort:(struct tagIPPORT *)arg2 oftType:(int)arg3 ;
-(int)setForceIPv6ForCallID:(unsigned int)arg0 ;
-(int)setForceRelayForCallID:(unsigned int)arg0 ;
-(int)setICETimeout:(CGFloat)arg0 ;
-(int)setSKEState:(struct SKEStateOpaque *)arg0 forCallID:(unsigned int)arg1 ;
-(int)startConnectionCheckForCallID:(unsigned int)arg0 remoteConnectionDataBlob:(id)arg1 relayDictionary:(id)arg2 iceTimeout:(CGFloat)arg3 securityIdentity:(struct __SecIdentity *)arg4 skeState:(struct SKEStateOpaque *)arg5 usedRelay:(*int)arg6 ;
-(int)stopConnectivityCheckForCallID:(unsigned int)arg0 ;
-(int)updateICERoleForCallID:(unsigned int)arg0 role:(int)arg1 remoteCallID:(unsigned int)arg2 sessionID:(struct __CFString *)arg3 ;
-(int)updateInterfaceList:(unsigned int)arg0 shouldFilterCellInterface:(BOOL)arg1 isUpdateNeeded:(*int)arg2 ;
-(int)updateQoS:(BOOL)arg0 ;
-(int)updateQualityIndicator:(int)arg0 isIPv6:(BOOL)arg1 ;
-(void)cleanup;
-(void)dealloc;
-(void)iceNewCandidatesForCallID:(unsigned int)arg0 blob:(char *)arg1 size:(int)arg2 newCandidateVersion:(unsigned short)arg3 ;
-(void)iceRemoveIPPort:(struct tagIPPORT *)arg0 forCallID:(unsigned int)arg1 isLocalInterface:(BOOL)arg2 ;
-(void)iceShouldNominateNewCandidate:(struct tagCANDIDATEPAIR *)arg0 forCallID:(unsigned int)arg1 interfaceMask:(int)arg2 nominated:(*int)arg3 demote:(*int)arg4 connectionPriority:(*int)arg5 replaceOnly:(*int)arg6 ;
-(void)receivedDataPacket:(char *)arg0 length:(int)arg1 forCallID:(unsigned int)arg2 encrypted:(BOOL)arg3 OFTType:(int)arg4 ;
// -(void)registerDataReceivedHandler:(id)arg0 forCallID:(unk)arg1  ;
// -(void)registerICEBlockForCallID:(unsigned int)arg0 connectedBlock:(id)arg1 newCandidatesBlock:(unk)arg2 newNominationBlock:(id)arg3 removeIPPortBlock:(unk)arg4  ;
-(void)setARPLHandler:(id)arg0 ;
-(void)setReportingAgent:(struct opaqueRTCReporting *)arg0 ;


@end


#endif