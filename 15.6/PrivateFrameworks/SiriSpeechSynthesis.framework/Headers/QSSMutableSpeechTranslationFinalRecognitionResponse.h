// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLESPEECHTRANSLATIONFINALRECOGNITIONRESPONSE_H
#define QSSMUTABLESPEECHTRANSLATIONFINALRECOGNITIONRESPONSE_H

@class NSString;


#import "QSSSpeechTranslationFinalRecognitionResponse.h"
#import "QSSRecognitionResult.h"

@interface QSSMutableSpeechTranslationFinalRecognitionResponse : QSSSpeechTranslationFinalRecognitionResponse

@property (copy, nonatomic) NSString *conversation_id;
@property (copy, nonatomic) QSSRecognitionResult *recognition_result;
@property (copy, nonatomic) NSString *recognition_text;
@property (copy, nonatomic) NSString *request_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *source_locale;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif