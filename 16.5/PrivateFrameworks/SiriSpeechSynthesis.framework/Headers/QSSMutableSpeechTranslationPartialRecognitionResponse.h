// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLESPEECHTRANSLATIONPARTIALRECOGNITIONRESPONSE_H
#define QSSMUTABLESPEECHTRANSLATIONPARTIALRECOGNITIONRESPONSE_H

@class NSString;


#import "QSSSpeechTranslationPartialRecognitionResponse.h"

@interface QSSMutableSpeechTranslationPartialRecognitionResponse : QSSSpeechTranslationPartialRecognitionResponse

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