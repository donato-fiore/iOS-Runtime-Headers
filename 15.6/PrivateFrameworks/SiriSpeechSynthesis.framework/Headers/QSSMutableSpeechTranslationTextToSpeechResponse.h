// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLESPEECHTRANSLATIONTEXTTOSPEECHRESPONSE_H
#define QSSMUTABLESPEECHTRANSLATIONTEXTTOSPEECHRESPONSE_H

@class NSString;


#import "QSSSpeechTranslationTextToSpeechResponse.h"
#import "QSSTextToSpeechResponse.h"

@interface QSSMutableSpeechTranslationTextToSpeechResponse : QSSSpeechTranslationTextToSpeechResponse

@property (copy, nonatomic) NSString *conversation_id;
@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSString *target_locale;
@property (copy, nonatomic) QSSTextToSpeechResponse *text_to_speech_response;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif