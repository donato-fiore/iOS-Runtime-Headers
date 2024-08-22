// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSSPEECHTRANSLATIONPARTIALRECOGNITIONRESPONSE_H
#define QSSSPEECHTRANSLATIONPARTIALRECOGNITIONRESPONSE_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSSpeechTranslationPartialRecognitionResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SpeechTranslationPartialRecognitionResponse _root;
}


@property (readonly, nonatomic) int confidence;
@property (readonly, nonatomic) NSString *conversation_id;
@property (readonly, nonatomic) BOOL is_stable_result;
@property (readonly, nonatomic) NSString *recognition_text;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) NSString *source_locale;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechTranslationPartialRecognitionResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechTranslationPartialRecognitionResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::SpeechTranslationPartialRecognitionResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif