// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCCONTROLCHANNELMULTIWAY_H
#define VCCONTROLCHANNELMULTIWAY_H

@class NSMutableDictionary, NSString;
@protocol VCControlChannelTransactionDelegate, OS_dispatch_queue;


#import "VCControlChannel.h"

@interface VCControlChannelMultiWay : VCControlChannel <VCControlChannelTransactionDelegate>

 {
    *_opaque_pthread_t _pidReceiveProc;
    NSMutableDictionary *_activeParticipants;
    NSMutableDictionary *_cryptors;
    *void _currentSendMKI;
    *void _currentReceiveMKI;
    NSObject<OS_dispatch_queue> *_sequentialKeyMaterialQueue;
    NSInteger _transactionID;
    BOOL _didSubmitCCReliableDataNotReceivedSymptom;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *dialogs; // ivar: _dialogs
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isEncryptionEnabled; // ivar: _isEncryptionEnabled
@property (readonly) BOOL isRunning; // ivar: _isRunning
@property (readonly, nonatomic) NSUInteger nextTransactionID;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int transportSessionID; // ivar: _transportSessionID
@property (nonatomic) int vfdCancel; // ivar: _vfdCancel
@property (nonatomic) int vfdMessage; // ivar: _vfdMessage


+(?)allocPayoadDataFromVTPPacket:(?)arg0 vpktFlagschannelDataFormat;
-(BOOL)addActiveParticipant:(NSUInteger)arg0 participantUUID:(id)arg1 withConfiguration:(struct ? *)arg2 ;
-(BOOL)decryptWithMKI:(*void)arg0 data:(char *)arg1 size:(int)arg2 sequenceNumber:(unsigned short)arg3 ;
-(BOOL)encryptData:(char *)arg0 size:(int)arg1 sequenceNumber:(unsigned short)arg2 ;
-(BOOL)isParticipantActive:(NSUInteger)arg0 ;
-(BOOL)sendReliableMessage:(id)arg0 withTopic:(id)arg1 participantID:(NSUInteger)arg2 timeout:(unsigned int)arg3 completion:(id)arg4 ;
-(BOOL)sendReliableMessageAndWait:(id)arg0 withTopic:(id)arg1 participantID:(NSUInteger)arg2 ;
-(BOOL)sendReliableMessageAndWait:(id)arg0 withTopic:(id)arg1 participantID:(NSUInteger)arg2 timeout:(id)arg3 ;
-(id)copyDialogForParticipantID:(id)arg0 ;
-(id)initWithTransportSessionID:(unsigned int)arg0 reportingAgent:(struct opaqueRTCReporting *)arg1 ;
-(id)initWithTransportSessionID:(unsigned int)arg0 reportingAgent:(struct opaqueRTCReporting *)arg1 mode:(int)arg2 ;
-(id)lastUsedMKIBytes;
-(id)remoteParticipantIDFromChannelDataFormat:(struct tagVCIDSChannelDataFormat *)arg0 ;
-(int)getKeyDerivationCryptoSet:(struct ? *)arg0 withKeyMaterial:(id)arg1 derivedSSRC:(*unsigned int)arg2 ;
-(int)protocolVersionforParticipantID:(id)arg0 ;
-(int)updateEncryption:(struct ? *)arg0 derivedSSRC:(unsigned int)arg1 ;
-(void)addNewKeyMaterial:(id)arg0 ;
-(void)addToReceivedStats:(int)arg0 ;
-(void)addToSentStats:(int)arg0 ;
-(void)dealloc;
-(void)deregisterPeriodicTask;
-(void)finalizeEncryption;
-(void)flushActiveMessages;
-(void)flushRealTimeReportingStats;
-(void)flushReportingStats;
-(void)initializeEncryption;
-(void)initializeSRTPInfo:(struct tagSRTPINFO *)arg0 ;
-(void)messageReceived:(id)arg0 participantInfo:(struct tagVCIDSChannelDataFormat *)arg1 ;
-(void)periodicTask:(*void)arg0 ;
-(void)processParticipantRemoval:(id)arg0 ;
-(void)registerPeriodicTask;
-(void)removeActiveParticipant:(NSUInteger)arg0 ;
-(void)removeAllActiveParticipants;
-(void)reportSignificantHandshakeDelaySymptomForParticipantID:(id)arg0 ;
-(void)scheduleAfter:(unsigned int)arg0 block:(id)arg1 ;
-(void)sendReliableMessage:(id)arg0 withTopic:(id)arg1 participantID:(NSUInteger)arg2 ;
-(void)sendUnreliableMessage:(id)arg0 withTopic:(id)arg1 participantID:(NSUInteger)arg2 ;
-(void)setCurrentSendMKIWithKeyMaterial:(id)arg0 ;
-(void)setEncryptionWithEncryptionMaterial:(struct ? *)arg0 ;
-(void)start;
-(void)stop;
-(void)updateEncryptionWithEncryptionMaterial:(struct ? *)arg0 ;
-(void)updateEncryptionWithKeyMaterial:(id)arg0 ;
-(void)updateTransactionIDWithKeyMaterial:(id)arg0 ;


@end


#endif