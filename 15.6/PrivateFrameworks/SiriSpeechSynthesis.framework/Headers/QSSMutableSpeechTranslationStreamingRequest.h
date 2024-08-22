// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLESPEECHTRANSLATIONSTREAMINGREQUEST_H
#define QSSMUTABLESPEECHTRANSLATIONSTREAMINGREQUEST_H



#import "QSSSpeechTranslationStreamingRequest.h"
#import "QSSAudioPacket.h"
#import "QSSFinishAudio.h"
#import "QSSLanguageDetected.h"
#import "QSSResetServerEndpointer.h"
#import "QSSSetEndpointerState.h"
#import "QSSSpeechTranslationAudioPacket.h"
#import "QSSStartSpeechTranslationLoggingRequest.h"
#import "QSSStartSpeechTranslationRequest.h"

@interface QSSMutableSpeechTranslationStreamingRequest : QSSSpeechTranslationStreamingRequest

@property (copy, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (copy, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;
@property (copy, nonatomic) QSSLanguageDetected *contentAsQSSLanguageDetected;
@property (copy, nonatomic) QSSResetServerEndpointer *contentAsQSSResetServerEndpointer;
@property (copy, nonatomic) QSSSetEndpointerState *contentAsQSSSetEndpointerState;
@property (copy, nonatomic) QSSSpeechTranslationAudioPacket *contentAsQSSSpeechTranslationAudioPacket;
@property (copy, nonatomic) QSSStartSpeechTranslationLoggingRequest *contentAsQSSStartSpeechTranslationLoggingRequest;
@property (copy, nonatomic) QSSStartSpeechTranslationRequest *contentAsQSSStartSpeechTranslationRequest;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif