// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSSPEECHTRANSLATIONSTREAMINGREQUEST_H
#define QSSSPEECHTRANSLATIONSTREAMINGREQUEST_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSAudioPacket.h"
#import "QSSFinishAudio.h"
#import "QSSLanguageDetected.h"
#import "QSSResetServerEndpointer.h"
#import "QSSSetEndpointerState.h"
#import "QSSSpeechTranslationAudioPacket.h"
#import "QSSStartSpeechTranslationLoggingRequest.h"
#import "QSSStartSpeechTranslationRequest.h"

@interface QSSSpeechTranslationStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SpeechTranslationStreamingRequest _root;
}


@property (readonly, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (readonly, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;
@property (readonly, nonatomic) QSSLanguageDetected *contentAsQSSLanguageDetected;
@property (readonly, nonatomic) QSSResetServerEndpointer *contentAsQSSResetServerEndpointer;
@property (readonly, nonatomic) QSSSetEndpointerState *contentAsQSSSetEndpointerState;
@property (readonly, nonatomic) QSSSpeechTranslationAudioPacket *contentAsQSSSpeechTranslationAudioPacket;
@property (readonly, nonatomic) QSSStartSpeechTranslationLoggingRequest *contentAsQSSStartSpeechTranslationLoggingRequest;
@property (readonly, nonatomic) QSSStartSpeechTranslationRequest *contentAsQSSStartSpeechTranslationRequest;
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