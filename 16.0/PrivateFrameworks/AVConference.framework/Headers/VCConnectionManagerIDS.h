// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCCONNECTIONMANAGERIDS_H
#define VCCONNECTIONMANAGERIDS_H



#import "VCConnectionManager.h"
#import "VCSessionBitrateArbiter.h"
#import "VCBitrateArbiter.h"

@interface VCConnectionManagerIDS : VCConnectionManager {
    CGFloat _lastTimestampForRemoteSendingFromNonPrimary;
    CGFloat _lastTimestampPreferredRemoteInterfaceUpdated;
    unsigned int _sentPacketCount;
    unsigned int _sentByteCount;
    unsigned int _receivedPacketCount;
    unsigned int _receivedByteCount;
    VCSessionBitrateArbiter *_multiwayBitrateArbiter;
    VCBitrateArbiter *_oneToOneBitrateArbiter;
    BOOL _isMultiwaySession;
    BOOL _optIntoExistingSubscribedStreams;
}




-(BOOL)addConnectionToConnectionArray:(id)arg0 ;
-(BOOL)canOptOutAllStreamsForConnection:(id)arg0 ;
-(BOOL)optIntoExistingSubscribedStreams;
-(BOOL)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg0 ;
-(BOOL)shouldDropCurrentPrimaryConnectionWithConnectionStats:(struct ? *)arg0 ;
-(BOOL)shouldKeepAllConnections;
-(BOOL)shouldReplaceConnection:(id)arg0 withConnection:(id)arg1 ;
-(BOOL)shouldUpdateServerBasedConnection:(id)arg0 ;
-(id)connectionForDuplication;
-(id)copyConnectionWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg0 isPrimary:(*BOOL)arg1 ;
-(id)getPrimaryConnectionToBeCompared;
-(id)getSecondaryConnectionToBeCompared;
-(id)initWithMultiwayEnabled:(BOOL)arg0 ;
-(id)lastPrimaryConnectionInUse;
-(id)primaryConnection;
-(id)secondaryConnection;
-(int)addConnection:(id)arg0 ;
-(int)removeConnection:(id)arg0 ;
-(struct ? *)getConnectionSelectionPolicy;
-(unsigned int)downlinkBitrateCapForConnection:(id)arg0 ;
-(unsigned int)getByteCountWithIndex:(unsigned char)arg0 isOutgoing:(BOOL)arg1 ;
-(unsigned int)getPacketCountWithIndex:(unsigned char)arg0 isOutgoing:(BOOL)arg1 ;
-(unsigned int)oneToOneBitrateCapForConnectionWithType:(unsigned int)arg0 ;
-(unsigned int)uplinkAudioOnlyBitrateCapOneToOne:(id)arg0 ;
-(unsigned int)uplinkBitrateCapForConnection:(id)arg0 ;
-(unsigned int)uplinkBitrateCapOneToOne:(id)arg0 ;
-(void)addDuplicationConnectionUpdateTelemetryWithSuggestedLinkTypeCombo:(id)arg0 payload:(id)arg1 ;
-(void)addLinkProbingTelemetry:(id)arg0 ;
-(void)dealloc;
-(void)didLinkProbingLockdownEnd;
-(void)didUpdateLinkPreferenceOrder:(id)arg0 ;
-(void)flushLinkProbingStatusWithOptions:(id)arg0 ;
-(void)handlePrimaryConnectionRemoved;
-(void)handleSecondaryConnectionRemoved;
-(void)internalUpdateOneToOneBitrateCapsForConnection:(id)arg0 ;
-(void)optOutAllStreamsForNonPrimaryConnections;
-(void)queryProbingResultsWithOptions:(id)arg0 ;
-(void)removeFromConnectionArray:(id)arg0 ;
-(void)reportActiveConnectionOneToOne:(id)arg0 isAudioOnly:(BOOL)arg1 ;
-(void)reportConnection:(id)arg0 isInitialConnection:(BOOL)arg1 ;
-(void)reportFirstActiveConnectionOneToOne:(id)arg0 remoteOSVersion:(id)arg1 redState:(BOOL)arg2 isAudioOnly:(BOOL)arg3 ;
-(void)reselectPrimaryConnection;
-(void)resetPacketCountAndByteCountWithConnection:(id)arg0 ;
-(void)resetParticipantGenerationCounter;
-(void)setConnectionForDuplication:(id)arg0 ;
-(void)setLastPrimaryConnectionInUse:(id)arg0 ;
-(void)setOptIntoExistingSubscribedStreams:(BOOL)arg0 ;
-(void)setPreferredLocalInterfaceForDuplication:(unsigned char)arg0 ;
-(void)setPreferredRemoteInterfaceForDuplication:(unsigned char)arg0 ;
-(void)setPrimaryConnection:(id)arg0 ;
-(void)setSecondaryConnection:(id)arg0 ;
-(void)sourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg0 isSourceOnCellular:(*BOOL)arg1 isSourceIPv6:(*BOOL)arg2 ;
-(void)startActiveProbingWithOptions:(id)arg0 ;
-(void)stopActiveProbingWithOptions:(id)arg0 ;
-(void)synchronizeParticipantGenerationCounter:(unsigned char)arg0 ;
-(void)updateAllBitrateCapsForConnection:(id)arg0 ;
-(void)updateCellularMTU:(int)arg0 ;
-(void)updateCellularTech:(int)arg0 forLocalInterface:(BOOL)arg1 ;
-(void)updateConnectionForDuplication;
-(void)updateConnectionSelectionPolicyWithPreferE2E:(BOOL)arg0 ;
-(void)updateDuplicationStateWithConnectionOperation:(int)arg0 isLocalOnWiFi:(BOOL)arg1 isRemoteOnWiFi:(BOOL)arg2 ;
-(void)updateNegotiatedSettingsOnetoOne:(id)arg0 ;
-(void)updateOneToOneBitrateCapsForConnection:(id)arg0 ;
-(void)updatePacketCountAndByteCountWithIndex:(unsigned char)arg0 packetSize:(int)arg1 numOfStreamId:(int)arg2 isPriorityIncluded:(BOOL)arg3 isOutgoing:(BOOL)arg4 ;
-(void)updateSessionStats:(unsigned short)arg0 ;
-(void)useConnectionAsPrimary:(id)arg0 ;


@end


#endif