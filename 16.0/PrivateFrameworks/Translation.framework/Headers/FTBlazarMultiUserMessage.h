// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTBLAZARMULTIUSERMESSAGE_H
#define FTBLAZARMULTIUSERMESSAGE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying, FLTBFBufferAccessor><NSCopying;

#import <Foundation/Foundation.h>

#import "FTAudioLimitExceeded.h"
#import "FTAudioPacket.h"
#import "FTClientSetupInfo.h"
#import "FTFinalBlazarResponse.h"
#import "FTFinalSpeechRecognitionResponse.h"
#import "FTFinishAudio.h"
#import "FTMultiUserStartSpeechRequest.h"
#import "FTPartialSpeechRecognitionResponse.h"
#import "FTRecognitionCandidate.h"
#import "FTRecognitionProgress.h"
#import "FTRequestStatsResponse.h"
#import "FTResetServerEndpointer.h"
#import "FTServerEndpointFeatures.h"
#import "FTSetAlternateRecognitionSausage.h"
#import "FTSetEndpointerState.h"
#import "FTSetRequestOrigin.h"
#import "FTSetSpeechContext.h"
#import "FTSetSpeechProfile.h"
#import "FTUpdateAudioInfo.h"

@interface FTBlazarMultiUserMessage : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *BlazarMultiUserMessage _root;
}


@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (readonly, nonatomic) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property (readonly, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property (readonly, nonatomic) FTClientSetupInfo *session_messageAsFTClientSetupInfo;
@property (readonly, nonatomic) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property (readonly, nonatomic) FTFinalSpeechRecognitionResponse *session_messageAsFTFinalSpeechRecognitionResponse;
@property (readonly, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property (readonly, nonatomic) FTMultiUserStartSpeechRequest *session_messageAsFTMultiUserStartSpeechRequest;
@property (readonly, nonatomic) FTPartialSpeechRecognitionResponse *session_messageAsFTPartialSpeechRecognitionResponse;
@property (readonly, nonatomic) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property (readonly, nonatomic) FTRecognitionProgress *session_messageAsFTRecognitionProgress;
@property (readonly, nonatomic) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
@property (readonly, nonatomic) FTResetServerEndpointer *session_messageAsFTResetServerEndpointer;
@property (readonly, nonatomic) FTServerEndpointFeatures *session_messageAsFTServerEndpointFeatures;
@property (readonly, nonatomic) FTSetAlternateRecognitionSausage *session_messageAsFTSetAlternateRecognitionSausage;
@property (readonly, nonatomic) FTSetEndpointerState *session_messageAsFTSetEndpointerState;
@property (readonly, nonatomic) FTSetRequestOrigin *session_messageAsFTSetRequestOrigin;
@property (readonly, nonatomic) FTSetSpeechContext *session_messageAsFTSetSpeechContext;
@property (readonly, nonatomic) FTSetSpeechProfile *session_messageAsFTSetSpeechProfile;
@property (readonly, nonatomic) FTUpdateAudioInfo *session_messageAsFTUpdateAudioInfo;
@property (readonly, nonatomic) NSInteger session_message_type;


+(Class)session_message_immutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForImmutableObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BlazarMultiUserMessage *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BlazarMultiUserMessage *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::BlazarMultiUserMessage> )addObjectToBuffer:(*void)arg0 ;


@end


#endif