// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLESPEECHTRANSLATIONTEXTTOSPEECHRESPONSE_H
#define FTMUTABLESPEECHTRANSLATIONTEXTTOSPEECHRESPONSE_H

@class NSString;


#import "FTSpeechTranslationTextToSpeechResponse.h"
#import "FTTextToSpeechResponse.h"

@interface FTMutableSpeechTranslationTextToSpeechResponse : FTSpeechTranslationTextToSpeechResponse

@property (copy, nonatomic) NSString *conversation_id;
@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSString *target_locale;
@property (copy, nonatomic) FTTextToSpeechResponse *text_to_speech_response;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif