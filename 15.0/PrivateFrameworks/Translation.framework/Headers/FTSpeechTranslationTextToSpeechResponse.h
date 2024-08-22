// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTSPEECHTRANSLATIONTEXTTOSPEECHRESPONSE_H
#define FTSPEECHTRANSLATIONTEXTTOSPEECHRESPONSE_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTTextToSpeechResponse.h"

@interface FTSpeechTranslationTextToSpeechResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SpeechTranslationTextToSpeechResponse _root;
}


@property (readonly, nonatomic) NSString *conversation_id;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) NSString *target_locale;
@property (readonly, nonatomic) FTTextToSpeechResponse *text_to_speech_response;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechTranslationTextToSpeechResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechTranslationTextToSpeechResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::SpeechTranslationTextToSpeechResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif