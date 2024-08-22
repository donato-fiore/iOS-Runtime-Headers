// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLESPEECHTRANSLATIONSTREAMINGREQUEST_H
#define FTMUTABLESPEECHTRANSLATIONSTREAMINGREQUEST_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTSpeechTranslationStreamingRequest.h"
#import "FTAudioPacket.h"
#import "FTFinishAudio.h"
#import "FTLanguageDetected.h"
#import "FTResetServerEndpointer.h"
#import "FTSetEndpointerState.h"
#import "FTSpeechTranslationAudioPacket.h"
#import "FTStartSpeechTranslationLoggingRequest.h"
#import "FTStartSpeechTranslationRequest.h"

@interface FTMutableSpeechTranslationStreamingRequest : FTSpeechTranslationStreamingRequest

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (copy, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (copy, nonatomic) FTLanguageDetected *contentAsFTLanguageDetected;
@property (copy, nonatomic) FTResetServerEndpointer *contentAsFTResetServerEndpointer;
@property (copy, nonatomic) FTSetEndpointerState *contentAsFTSetEndpointerState;
@property (copy, nonatomic) FTSpeechTranslationAudioPacket *contentAsFTSpeechTranslationAudioPacket;
@property (copy, nonatomic) FTStartSpeechTranslationLoggingRequest *contentAsFTStartSpeechTranslationLoggingRequest;
@property (copy, nonatomic) FTStartSpeechTranslationRequest *contentAsFTStartSpeechTranslationRequest;
@property (nonatomic) NSInteger content_type;


+(Class)content_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)content_typeForMutableObject:(id)arg0 ;
+(NSInteger)content_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif