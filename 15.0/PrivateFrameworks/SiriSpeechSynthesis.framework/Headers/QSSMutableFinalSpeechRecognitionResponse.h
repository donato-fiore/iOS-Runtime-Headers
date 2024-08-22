// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLEFINALSPEECHRECOGNITIONRESPONSE_H
#define QSSMUTABLEFINALSPEECHRECOGNITIONRESPONSE_H

@class NSString;


#import "QSSFinalSpeechRecognitionResponse.h"
#import "QSSAudioAnalytics.h"
#import "QSSLatnnMitigatorResult.h"
#import "QSSRecognitionResult.h"

@interface QSSMutableFinalSpeechRecognitionResponse : QSSFinalSpeechRecognitionResponse

@property (copy, nonatomic) QSSAudioAnalytics *audio_analytics;
@property (nonatomic) BOOL has_result;
@property (nonatomic) NSInteger lang_profile_recreate_codes;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) QSSLatnnMitigatorResult *latnn_mitigator_result;
@property (copy, nonatomic) QSSRecognitionResult *recognition_result;
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