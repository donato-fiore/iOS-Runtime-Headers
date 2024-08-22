// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLEBLAZARMULTILINGUALMESSAGE_H
#define FTMUTABLEBLAZARMULTILINGUALMESSAGE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTBlazarMultilingualMessage.h"
#import "FTAudioLimitExceeded.h"
#import "FTAudioPacket.h"
#import "FTFinalBlazarResponse.h"
#import "FTFinalSpeechRecognitionResponse.h"
#import "FTFinishAudio.h"
#import "FTLanguageDetected.h"
#import "FTPartialSpeechRecognitionResponse.h"
#import "FTRecognitionCandidate.h"
#import "FTRequestStatsResponse.h"
#import "FTSetRequestOrigin.h"
#import "FTSetSpeechContext.h"
#import "FTSetSpeechProfile.h"
#import "FTStartMultilingualSpeechRequest.h"
#import "FTUpdateAudioInfo.h"

@interface FTMutableBlazarMultilingualMessage : FTBlazarMultilingualMessage

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (copy, nonatomic) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property (copy, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property (copy, nonatomic) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property (copy, nonatomic) FTFinalSpeechRecognitionResponse *session_messageAsFTFinalSpeechRecognitionResponse;
@property (copy, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property (copy, nonatomic) FTLanguageDetected *session_messageAsFTLanguageDetected;
@property (copy, nonatomic) FTPartialSpeechRecognitionResponse *session_messageAsFTPartialSpeechRecognitionResponse;
@property (copy, nonatomic) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property (copy, nonatomic) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
@property (copy, nonatomic) FTSetRequestOrigin *session_messageAsFTSetRequestOrigin;
@property (copy, nonatomic) FTSetSpeechContext *session_messageAsFTSetSpeechContext;
@property (copy, nonatomic) FTSetSpeechProfile *session_messageAsFTSetSpeechProfile;
@property (copy, nonatomic) FTStartMultilingualSpeechRequest *session_messageAsFTStartMultilingualSpeechRequest;
@property (copy, nonatomic) FTUpdateAudioInfo *session_messageAsFTUpdateAudioInfo;
@property (nonatomic) NSInteger session_message_type;


+(Class)session_message_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForMutableObject:(id)arg0 ;
+(NSInteger)session_message_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif