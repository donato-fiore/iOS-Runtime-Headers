// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLEFINALSPEECHRECOGNITIONRESPONSE_H
#define FTMUTABLEFINALSPEECHRECOGNITIONRESPONSE_H

@class NSString;


#import "FTFinalSpeechRecognitionResponse.h"
#import "FTAudioAnalytics.h"
#import "FTLatnnMitigatorResult.h"
#import "FTRecognitionResult.h"

@interface FTMutableFinalSpeechRecognitionResponse : FTFinalSpeechRecognitionResponse

@property (copy, nonatomic) FTAudioAnalytics *audio_analytics;
@property (nonatomic) BOOL has_result;
@property (nonatomic) NSInteger lang_profile_recreate_codes;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) FTLatnnMitigatorResult *latnn_mitigator_result;
@property (copy, nonatomic) FTRecognitionResult *recognition_result;
@property (copy, nonatomic) NSString *request_locale;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (nonatomic) NSInteger watermark_detection;
@property (nonatomic) CGFloat watermark_peak_average;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif