// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCTRANSPORTSESSIONIDSMULTILINK_H
#define VCTRANSPORTSESSIONIDSMULTILINK_H

@class NSString;
@protocol VCConnectionManagerDelegate, VCIDSSessionInfoSynchronizerDelegate;


#import "VCTransportSessionIDS.h"
#import "VCIDSSessionInfoSynchronizer.h"

@interface VCTransportSessionIDSMultiLink : VCTransportSessionIDS <VCConnectionManagerDelegate, VCIDSSessionInfoSynchronizerDelegate>

 {
    BOOL _isWiFiAssistActive;
    BOOL _oneToOneModeEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) VCIDSSessionInfoSynchronizer *sessionInfoSynchronizer; // ivar: _sessionInfoSynchronizer
@property (readonly) Class superclass;


-(id)initWithCallID:(unsigned int)arg0 reportingAgent:(id)arg1 ;
-(id)initWithCallID:(unsigned int)arg0 requireEncryptionInfo:(BOOL)arg1 reportingAgent:(id)arg2 notificationQueue:(id)arg3 isMultiwaySession:(BOOL)arg4 ;
-(int)onStart;
-(void)VCIDSSessionInfoSynchronizer:(*void)arg0 sendVCIDSSessionInfoRequest:(id)arg1 ;
-(void)connectionCallback:(id)arg0 isInitialConnection:(BOOL)arg1 ;
-(void)dealloc;
-(void)didEnableDuplication:(BOOL)arg0 activeConnection:(id)arg1 ;
-(void)didMediaQualityDegrade:(BOOL)arg0 ;
-(void)didUpdatePreferredInterfaceForDuplication:(unsigned char)arg0 notifyPeer:(BOOL)arg1 enableDuplication:(BOOL)arg2 isMediaUnrecoverableSignal:(BOOL)arg3 ;
-(void)discardConnection:(id)arg0 ;
-(void)flushLinkProbingStatusWithOptions:(id)arg0 ;
-(void)handleLinkConnectedWithInfo:(id)arg0 ;
-(void)handleLinkDisconnectedWithInfo:(id)arg0 ;
-(void)handleProbingResponse:(id)arg0 ;
-(void)handleSessionInfoResponse:(id)arg0 ;
-(void)logSignalStrength;
-(void)onStop;
-(void)optIntoExistingSubscribedStreamsForConnection:(id)arg0 ;
-(void)optOutAllStreamsForConnection:(id)arg0 ;
-(void)primaryConnectionChanged:(id)arg0 oldPrimaryConnection:(id)arg1 activeConnection:(id)arg2 ;
-(void)queryProbingResultsWithOptions:(id)arg0 ;
-(void)resetActiveConnection;
-(void)resetParticipantGenerationCounter;
-(void)setDefaultLink:(id)arg0 ;
-(void)setOneToOneModeEnabled:(BOOL)arg0 isInitiator:(BOOL)arg1 ;
-(void)setQuickRelayServerProvider:(int)arg0 ;
-(void)setRemoteDeviceVersionIDS;
-(void)setWiFiAssist:(BOOL)arg0 ;
-(void)startActiveProbingWithOptions:(id)arg0 ;
-(void)stopActiveProbingWithOptions:(id)arg0 ;
-(void)updateParticipantGenerationCounter:(unsigned char)arg0 ;


@end


#endif