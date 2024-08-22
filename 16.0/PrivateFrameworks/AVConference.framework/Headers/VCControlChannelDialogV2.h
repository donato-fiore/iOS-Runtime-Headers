// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCCONTROLCHANNELDIALOGV2_H
#define VCCONTROLCHANNELDIALOGV2_H



#import "VCControlChannelDialog.h"

@interface VCControlChannelDialogV2 : VCControlChannelDialog {
    *tagVCCryptor _uplinkCryptor;
    *tagVCCryptor _downlinkCryptor;
    os_unfair_lock_s _uplinkCryptorLock;
}




-(id)allocEncryptedPayloadFromPayloadData:(id)arg0 ;
-(id)copyDecryptedDataFromEncryptedPayload:(id)arg0 ;
-(id)initWithSessionID:(unsigned int)arg0 participantID:(id)arg1 participantUUID:(id)arg2 participantConfig:(struct ? *)arg3 transactionDelegate:(id)arg4 ;
-(id)newDataFromMessage:(id)arg0 topic:(id)arg1 transactionID:(NSUInteger)arg2 isReliable:(BOOL)arg3 transactionDelegate:(id)arg4 ;
-(id)processMessageData:(id)arg0 participantID:(id)arg1 topic:(*id)arg2 transactionID:(*id)arg3 messageStatus:(*unsigned int)arg4 isInternalMessage:(*BOOL)arg5 ;
-(void)dealloc;
-(void)sendConfirmationToParticipantID:(id)arg0 transactionID:(id)arg1 sessionID:(unsigned int)arg2 transactionDelegate:(id)arg3 ;


@end


#endif