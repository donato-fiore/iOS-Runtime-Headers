// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCTRANSPORTSESSIONIDS_H
#define VCTRANSPORTSESSIONIDS_H

@class NSString;


#import "VCTransportSession.h"
#import "VCDatagramChannelIDS.h"

@interface VCTransportSessionIDS : VCTransportSession {
    VCDatagramChannelIDS *_datagramChannel;
    BOOL _requireEncryptionInfo;
}


@property (copy, nonatomic) NSString *destination; // ivar: _destination
@property (nonatomic) int socket; // ivar: _socket


-(BOOL)getConnectionSetupData:(*id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(id)connectionSetupPiggybackBlob;
-(id)datagramChannel;
-(id)initWithCallID:(unsigned int)arg0 reportingAgent:(id)arg1 ;
-(id)initWithCallID:(unsigned int)arg0 requireEncryptionInfo:(BOOL)arg1 reportingAgent:(id)arg2 notificationQueue:(id)arg3 ;
-(int)flushBasebandQueueForConnection:(id)arg0 payloadInfoList:(id)arg1 ;
-(int)getSignalStrengthBars:(*int)arg0 displayBars:(*int)arg1 maxDisplayBars:(*int)arg2 ;
-(int)onStart;
-(int)registerBasebandNotificationsForConnection:(id)arg0 ;
-(int)updateQualityIndicator:(int)arg0 isIPv6:(BOOL)arg1 ;
-(unsigned int)remoteDeviceVersionIDS;
-(void)cleanupDatagramChannel;
-(void)dealloc;
-(void)deregisterBasebandNotifications;
-(void)dispatchedProcessDatagramChannelEventInfo:(id)arg0 ;
-(void)handleCellularMTUChanged:(id)arg0 ;
-(void)handleCellularSoMaskChanged:(id)arg0 ;
-(void)handleChannelInfoReport:(id)arg0 ;
-(void)handleDefaultLinkUpdatedWithInfo:(id)arg0 ;
-(void)handleIDSEncryptionInfoEvent:(id)arg0 ;
-(void)handleIDSMembershipChangeInfoEvent:(id)arg0 ;
-(void)handleLinkConnectedWithInfo:(id)arg0 ;
-(void)handleLinkConstrainsChanged:(id)arg0 ;
-(void)handleLinkDisconnectedWithInfo:(id)arg0 ;
-(void)handlePreConnectionDataReceived:(id)arg0 ;
-(void)handleProbingResponse:(id)arg0 ;
-(void)handleRATChanged:(id)arg0 ;
-(void)handleSessionInfoResponse:(id)arg0 ;
-(void)onStop;
-(void)processDatagramChannelEventInfo:(id)arg0 ;
-(void)setConnectionSetupPiggybackBlob:(id)arg0 ;
-(void)setConnectionSetupTime;
-(void)setPiggybackBlobPreference;
-(void)setQuickRelayServerProvider:(int)arg0 ;
-(void)start;
-(void)startMKMRecoveryForParticipantIDs:(id)arg0 ;
-(void)stop;


@end


#endif