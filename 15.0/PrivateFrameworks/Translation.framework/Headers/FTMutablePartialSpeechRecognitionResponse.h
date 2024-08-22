// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLEPARTIALSPEECHRECOGNITIONRESPONSE_H
#define FTMUTABLEPARTIALSPEECHRECOGNITIONRESPONSE_H

@class NSString;


#import "FTPartialSpeechRecognitionResponse.h"

@interface FTMutablePartialSpeechRecognitionResponse : FTPartialSpeechRecognitionResponse

@property (nonatomic) int audio_duration_ms;
@property (nonatomic) int confidence;
@property (nonatomic) BOOL is_stable_result;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *recognition_text;
@property (copy, nonatomic) NSString *request_locale;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif