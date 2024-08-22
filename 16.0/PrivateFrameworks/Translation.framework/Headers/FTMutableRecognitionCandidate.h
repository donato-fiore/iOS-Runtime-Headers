// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLERECOGNITIONCANDIDATE_H
#define FTMUTABLERECOGNITIONCANDIDATE_H

@class NSString;


#import "FTRecognitionCandidate.h"
#import "FTAudioAnalytics.h"
#import "FTLatnnMitigatorResult.h"
#import "FTRecognitionResult.h"

@interface FTMutableRecognitionCandidate : FTRecognitionCandidate

@property (copy, nonatomic) FTAudioAnalytics *audio_analytics;
@property (nonatomic) NSInteger fingerprint_detection;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) FTLatnnMitigatorResult *latnn_mitigator_result;
@property (copy, nonatomic) FTRecognitionResult *recognition_result;
@property (copy, nonatomic) NSString *request_locale;
@property (copy, nonatomic) NSString *result_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) CGFloat snr;
@property (copy, nonatomic) NSString *speech_id;
@property (nonatomic) NSInteger watermark_detection;
@property (nonatomic) CGFloat watermark_peak_average;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif