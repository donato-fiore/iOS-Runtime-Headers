// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTSPEECHTRANSLATIONFINALRECOGNITIONRESPONSE_H
#define FTSPEECHTRANSLATIONFINALRECOGNITIONRESPONSE_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTRecognitionResult.h"

@interface FTSpeechTranslationFinalRecognitionResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SpeechTranslationFinalRecognitionResponse _root;
}


@property (readonly, nonatomic) NSString *conversation_id;
@property (readonly, nonatomic) FTRecognitionResult *recognition_result;
@property (readonly, nonatomic) NSString *recognition_text;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) NSString *source_locale;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechTranslationFinalRecognitionResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechTranslationFinalRecognitionResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::SpeechTranslationFinalRecognitionResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif