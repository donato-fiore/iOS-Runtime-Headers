// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLERECOGNITIONCANDIDATE_H
#define QSSMUTABLERECOGNITIONCANDIDATE_H

@class NSString;


#import "QSSRecognitionCandidate.h"
#import "QSSAudioAnalytics.h"
#import "QSSLatnnMitigatorResult.h"
#import "QSSRecognitionResult.h"

@interface QSSMutableRecognitionCandidate : QSSRecognitionCandidate

@property (copy, nonatomic) QSSAudioAnalytics *audio_analytics;
@property (nonatomic) NSInteger fingerprint_detection;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) QSSLatnnMitigatorResult *latnn_mitigator_result;
@property (copy, nonatomic) QSSRecognitionResult *recognition_result;
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