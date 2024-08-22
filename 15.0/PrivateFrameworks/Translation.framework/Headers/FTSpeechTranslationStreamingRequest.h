// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTSPEECHTRANSLATIONSTREAMINGREQUEST_H
#define FTSPEECHTRANSLATIONSTREAMINGREQUEST_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTAudioPacket.h"
#import "FTFinishAudio.h"
#import "FTLanguageDetected.h"
#import "FTResetServerEndpointer.h"
#import "FTSetEndpointerState.h"
#import "FTSpeechTranslationAudioPacket.h"
#import "FTStartSpeechTranslationLoggingRequest.h"
#import "FTStartSpeechTranslationRequest.h"

@interface FTSpeechTranslationStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SpeechTranslationStreamingRequest _root;
}


@property (readonly, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (readonly, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (readonly, nonatomic) FTLanguageDetected *contentAsFTLanguageDetected;
@property (readonly, nonatomic) FTResetServerEndpointer *contentAsFTResetServerEndpointer;
@property (readonly, nonatomic) FTSetEndpointerState *contentAsFTSetEndpointerState;
@property (readonly, nonatomic) FTSpeechTranslationAudioPacket *contentAsFTSpeechTranslationAudioPacket;
@property (readonly, nonatomic) FTStartSpeechTranslationLoggingRequest *contentAsFTStartSpeechTranslationLoggingRequest;
@property (readonly, nonatomic) FTStartSpeechTranslationRequest *contentAsFTStartSpeechTranslationRequest;
@property (readonly, nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechTranslationStreamingRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechTranslationStreamingRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::SpeechTranslationStreamingRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif