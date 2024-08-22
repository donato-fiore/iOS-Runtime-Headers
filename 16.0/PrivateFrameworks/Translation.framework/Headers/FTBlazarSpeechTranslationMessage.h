// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTBLAZARSPEECHTRANSLATIONMESSAGE_H
#define FTBLAZARSPEECHTRANSLATIONMESSAGE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying, FLTBFBufferAccessor><NSCopying;

#import <Foundation/Foundation.h>

#import "FTAudioLimitExceeded.h"
#import "FTAudioPacket.h"
#import "FTClientSetupInfo.h"
#import "FTFinalBlazarResponse.h"
#import "FTFinishAudio.h"
#import "FTLanguageDetected.h"
#import "FTRecognitionCandidate.h"
#import "FTRecognitionProgress.h"
#import "FTRequestStatsResponse.h"
#import "FTResetServerEndpointer.h"
#import "FTServerEndpointFeatures.h"
#import "FTSetEndpointerState.h"
#import "FTSpeechTranslationAudioPacket.h"
#import "FTSpeechTranslationFinalRecognitionResponse.h"
#import "FTSpeechTranslationMtResponse.h"
#import "FTSpeechTranslationPartialRecognitionResponse.h"
#import "FTSpeechTranslationServerEndpointFeatures.h"
#import "FTSpeechTranslationTextToSpeechResponse.h"
#import "FTStartSpeechTranslationLoggingRequest.h"
#import "FTStartSpeechTranslationRequest.h"

@interface FTBlazarSpeechTranslationMessage : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *BlazarSpeechTranslationMessage _root;
}


@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (readonly, nonatomic) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property (readonly, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property (readonly, nonatomic) FTClientSetupInfo *session_messageAsFTClientSetupInfo;
@property (readonly, nonatomic) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property (readonly, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property (readonly, nonatomic) FTLanguageDetected *session_messageAsFTLanguageDetected;
@property (readonly, nonatomic) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property (readonly, nonatomic) FTRecognitionProgress *session_messageAsFTRecognitionProgress;
@property (readonly, nonatomic) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
@property (readonly, nonatomic) FTResetServerEndpointer *session_messageAsFTResetServerEndpointer;
@property (readonly, nonatomic) FTServerEndpointFeatures *session_messageAsFTServerEndpointFeatures;
@property (readonly, nonatomic) FTSetEndpointerState *session_messageAsFTSetEndpointerState;
@property (readonly, nonatomic) FTSpeechTranslationAudioPacket *session_messageAsFTSpeechTranslationAudioPacket;
@property (readonly, nonatomic) FTSpeechTranslationFinalRecognitionResponse *session_messageAsFTSpeechTranslationFinalRecognitionResponse;
@property (readonly, nonatomic) FTSpeechTranslationMtResponse *session_messageAsFTSpeechTranslationMtResponse;
@property (readonly, nonatomic) FTSpeechTranslationPartialRecognitionResponse *session_messageAsFTSpeechTranslationPartialRecognitionResponse;
@property (readonly, nonatomic) FTSpeechTranslationServerEndpointFeatures *session_messageAsFTSpeechTranslationServerEndpointFeatures;
@property (readonly, nonatomic) FTSpeechTranslationTextToSpeechResponse *session_messageAsFTSpeechTranslationTextToSpeechResponse;
@property (readonly, nonatomic) FTStartSpeechTranslationLoggingRequest *session_messageAsFTStartSpeechTranslationLoggingRequest;
@property (readonly, nonatomic) FTStartSpeechTranslationRequest *session_messageAsFTStartSpeechTranslationRequest;
@property (readonly, nonatomic) NSInteger session_message_type;


+(Class)session_message_immutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForImmutableObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BlazarSpeechTranslationMessage *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BlazarSpeechTranslationMessage *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::BlazarSpeechTranslationMessage> )addObjectToBuffer:(*void)arg0 ;


@end


#endif