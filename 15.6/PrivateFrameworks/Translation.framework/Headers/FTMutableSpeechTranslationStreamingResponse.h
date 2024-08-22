// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLESPEECHTRANSLATIONSTREAMINGRESPONSE_H
#define FTMUTABLESPEECHTRANSLATIONSTREAMINGRESPONSE_H



#import "FTSpeechTranslationStreamingResponse.h"
#import "FTAudioLimitExceeded.h"
#import "FTClientSetupInfo.h"
#import "FTFinalBlazarResponse.h"
#import "FTRecognitionCandidate.h"
#import "FTRecognitionProgress.h"
#import "FTRequestStatsResponse.h"
#import "FTServerEndpointFeatures.h"
#import "FTSpeechTranslationFinalRecognitionResponse.h"
#import "FTSpeechTranslationMtResponse.h"
#import "FTSpeechTranslationPartialRecognitionResponse.h"
#import "FTSpeechTranslationServerEndpointFeatures.h"
#import "FTSpeechTranslationTextToSpeechResponse.h"

@interface FTMutableSpeechTranslationStreamingResponse : FTSpeechTranslationStreamingResponse

@property (copy, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property (copy, nonatomic) FTClientSetupInfo *contentAsFTClientSetupInfo;
@property (copy, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property (copy, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property (copy, nonatomic) FTRecognitionProgress *contentAsFTRecognitionProgress;
@property (copy, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property (copy, nonatomic) FTServerEndpointFeatures *contentAsFTServerEndpointFeatures;
@property (copy, nonatomic) FTSpeechTranslationFinalRecognitionResponse *contentAsFTSpeechTranslationFinalRecognitionResponse;
@property (copy, nonatomic) FTSpeechTranslationMtResponse *contentAsFTSpeechTranslationMtResponse;
@property (copy, nonatomic) FTSpeechTranslationPartialRecognitionResponse *contentAsFTSpeechTranslationPartialRecognitionResponse;
@property (copy, nonatomic) FTSpeechTranslationServerEndpointFeatures *contentAsFTSpeechTranslationServerEndpointFeatures;
@property (copy, nonatomic) FTSpeechTranslationTextToSpeechResponse *contentAsFTSpeechTranslationTextToSpeechResponse;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif