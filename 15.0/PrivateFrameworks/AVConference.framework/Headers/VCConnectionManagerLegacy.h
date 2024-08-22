// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCCONNECTIONMANAGERLEGACY_H
#define VCCONNECTIONMANAGERLEGACY_H

@class NSString;
@protocol VCConnectionProtocol;


#import "VCConnectionManager.h"

@interface VCConnectionManagerLegacy : VCConnectionManager

@property (retain, nonatomic) NSObject<VCConnectionProtocol> *pendingPrimaryConnection; // ivar: _pendingPrimaryConnection
@property (retain, nonatomic) NSObject<VCConnectionProtocol> *pendingSecondaryConnection; // ivar: _pendingSecondaryConnection
@property (copy, nonatomic) NSString *relayConnectionID; // ivar: _relayConnectionID


-(BOOL)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg0 ;
-(BOOL)shouldNominateConnection:(id)arg0 ;
-(id)copyConnectionWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg0 isPrimary:(*BOOL)arg1 ;
-(id)getPrimaryConnectionToBeCompared;
-(id)getSecondaryConnectionToBeCompared;
-(id)init;
-(int)addConnection:(id)arg0 ;
-(int)nominateConnection:(id)arg0 asPrimary:(BOOL)arg1 interfaceMask:(int)arg2 demote:(*int)arg3 connectionPriority:(*int)arg4 replaceOnly:(*int)arg5 ;
-(int)removeConnection:(id)arg0 ;
-(int)removeConnectionWithIPPort:(struct tagIPPORT *)arg0 isLocalInterface:(BOOL)arg1 ;
-(int)removeConnectionWithIPPortInternal:(struct tagIPPORT *)arg0 isLocalInterface:(BOOL)arg1 ;
-(int)shouldNominateCandidatePair:(struct tagCANDIDATEPAIR *)arg0 interfaceMask:(int)arg1 nominated:(*int)arg2 demote:(*int)arg3 connectionPriority:(*int)arg4 replaceOnly:(*int)arg5 ;
-(int)shouldNominateCandidatePairInternal:(struct tagCANDIDATEPAIR *)arg0 interfaceMask:(int)arg1 nominated:(*int)arg2 demote:(*int)arg3 connectionPriority:(*int)arg4 replaceOnly:(*int)arg5 ;
-(int)updateStateWithCurrentConnection:(id)arg0 asPrimary:(BOOL)arg1 interfaceMask:(int)arg2 demote:(*int)arg3 replaceOnly:(*int)arg4 ;
-(unsigned int)getByteCountWithIndex:(unsigned char)arg0 isOutgoing:(BOOL)arg1 ;
-(unsigned int)getPacketCountWithIndex:(unsigned char)arg0 isOutgoing:(BOOL)arg1 ;
-(void)dealloc;
-(void)flushLinkProbingStatusWithOptions:(id)arg0 ;
-(void)queryProbingResultsWithOptions:(id)arg0 ;
-(void)reportConnection:(id)arg0 isInitialConnection:(BOOL)arg1 ;
-(void)reportLinkProbingStatsWithDuplicationJustStarted:(BOOL)arg0 ;
-(void)sourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg0 isSourceOnCellular:(*BOOL)arg1 isSourceIPv6:(*BOOL)arg2 ;
-(void)startActiveProbingWithOptions:(id)arg0 ;
-(void)stopActiveProbingWithOptions:(id)arg0 ;
-(void)synchronizeParticipantGenerationCounter:(unsigned char)arg0 ;
-(void)updateAllBitrateCapsForConnection:(id)arg0 ;
-(void)updateCellularMTU:(int)arg0 ;
-(void)updateCellularTech:(int)arg0 forLocalInterface:(BOOL)arg1 ;
-(void)updateConnectionForDuplication;
-(void)updateNegotiatedSettingsOnetoOne:(id)arg0 ;
-(void)updateOneToOneBitrateCapsForConnection:(id)arg0 ;
-(void)updatePacketCountAndByteCountWithIndex:(unsigned char)arg0 packetSize:(int)arg1 numOfStreamId:(int)arg2 isPriorityIncluded:(BOOL)arg3 isOutgoing:(BOOL)arg4 ;
-(void)updateSessionStats:(unsigned short)arg0 ;


@end


#endif