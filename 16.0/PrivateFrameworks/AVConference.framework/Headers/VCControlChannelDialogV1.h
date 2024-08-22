// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCCONTROLCHANNELDIALOGV1_H
#define VCCONTROLCHANNELDIALOGV1_H

@class NSArray;


#import "VCControlChannelDialog.h"

@interface VCControlChannelDialogV1 : VCControlChannelDialog {
    NSArray *_optionalTopics;
}




+(BOOL)encryptMessage:(id)arg0 buffer:(char *)arg1 size:(unsigned int)arg2 sequenceNumber:(unsigned short)arg3 transactionDelegate:(id)arg4 ;
+(BOOL)processMessageFromParticipant:(id)arg0 transactionID:(id)arg1 messageType:(unsigned int)arg2 sessionID:(unsigned int)arg3 transactionDelegate:(id)arg4 ;
+(id)newEncryptedMessageFromMessage:(id)arg0 sequenceNumber:(unsigned short)arg1 transactionDelegate:(id)arg2 ;
+(void)sendConfirmationToParticipantID:(id)arg0 transactionID:(id)arg1 sessionID:(unsigned int)arg2 transactionDelegate:(id)arg3 ;
-(BOOL)decryptMessageWithMKI:(*void)arg0 message:(id)arg1 buffer:(char *)arg2 size:(unsigned int)arg3 sequenceNumber:(unsigned short)arg4 ;
-(BOOL)processMessageFromParticipant:(id)arg0 transactionID:(id)arg1 messageType:(unsigned int)arg2 transactionDelegate:(id)arg3 ;
-(id)initWithSessionID:(unsigned int)arg0 participantID:(id)arg1 participantUUID:(id)arg2 optionalTopics:(id)arg3 participantConfig:(struct ? *)arg4 transactionDelegate:(id)arg5 ;
-(id)newDataFromMessage:(id)arg0 topic:(id)arg1 transactionID:(NSUInteger)arg2 isReliable:(BOOL)arg3 transactionDelegate:(id)arg4 ;
-(id)processEncryptedPayload:(id)arg0 isData:(BOOL)arg1 topic:(*id)arg2 sequenceNumber:(id)arg3 MKIData:(id)arg4 participantID:(id)arg5 ;
-(id)processMessageData:(id)arg0 participantID:(id)arg1 topic:(*id)arg2 transactionID:(*id)arg3 messageStatus:(*unsigned int)arg4 isInternalMessage:(*BOOL)arg5 ;
-(void)dealloc;
-(void)getTopic:(*id)arg0 message:(*id)arg1 fromPayload:(id)arg2 ;


@end


#endif