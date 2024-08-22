// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLEMULTILINGUALSTREAMINGRESPONSE_H
#define QSSMUTABLEMULTILINGUALSTREAMINGRESPONSE_H



#import "QSSMultilingualStreamingResponse.h"
#import "QSSAudioLimitExceeded.h"
#import "QSSFinalBlazarResponse.h"
#import "QSSFinalSpeechRecognitionResponse.h"
#import "QSSPartialSpeechRecognitionResponse.h"
#import "QSSRecognitionCandidate.h"
#import "QSSRequestStatsResponse.h"

@interface QSSMutableMultilingualStreamingResponse : QSSMultilingualStreamingResponse

@property (copy, nonatomic) QSSAudioLimitExceeded *contentAsQSSAudioLimitExceeded;
@property (copy, nonatomic) QSSFinalBlazarResponse *contentAsQSSFinalBlazarResponse;
@property (copy, nonatomic) QSSFinalSpeechRecognitionResponse *contentAsQSSFinalSpeechRecognitionResponse;
@property (copy, nonatomic) QSSPartialSpeechRecognitionResponse *contentAsQSSPartialSpeechRecognitionResponse;
@property (copy, nonatomic) QSSRecognitionCandidate *contentAsQSSRecognitionCandidate;
@property (copy, nonatomic) QSSRequestStatsResponse *contentAsQSSRequestStatsResponse;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif