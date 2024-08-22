// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLEMULTILINGUALSTREAMINGRESPONSE_H
#define FTMUTABLEMULTILINGUALSTREAMINGRESPONSE_H



#import "FTMultilingualStreamingResponse.h"
#import "FTAudioLimitExceeded.h"
#import "FTFinalBlazarResponse.h"
#import "FTFinalSpeechRecognitionResponse.h"
#import "FTPartialSpeechRecognitionResponse.h"
#import "FTRecognitionCandidate.h"
#import "FTRequestStatsResponse.h"

@interface FTMutableMultilingualStreamingResponse : FTMultilingualStreamingResponse

@property (copy, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property (copy, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property (copy, nonatomic) FTFinalSpeechRecognitionResponse *contentAsFTFinalSpeechRecognitionResponse;
@property (copy, nonatomic) FTPartialSpeechRecognitionResponse *contentAsFTPartialSpeechRecognitionResponse;
@property (copy, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property (copy, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif