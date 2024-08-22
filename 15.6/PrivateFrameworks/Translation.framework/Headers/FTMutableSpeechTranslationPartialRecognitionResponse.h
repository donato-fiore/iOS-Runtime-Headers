// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLESPEECHTRANSLATIONPARTIALRECOGNITIONRESPONSE_H
#define FTMUTABLESPEECHTRANSLATIONPARTIALRECOGNITIONRESPONSE_H

@class NSString;


#import "FTSpeechTranslationPartialRecognitionResponse.h"

@interface FTMutableSpeechTranslationPartialRecognitionResponse : FTSpeechTranslationPartialRecognitionResponse

@property (nonatomic) int confidence;
@property (copy, nonatomic) NSString *conversation_id;
@property (nonatomic) BOOL is_stable_result;
@property (copy, nonatomic) NSString *recognition_text;
@property (copy, nonatomic) NSString *request_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *source_locale;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif