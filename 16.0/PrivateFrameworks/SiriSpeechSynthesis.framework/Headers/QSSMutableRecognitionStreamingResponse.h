// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLERECOGNITIONSTREAMINGRESPONSE_H
#define QSSMUTABLERECOGNITIONSTREAMINGRESPONSE_H



#import "QSSRecognitionStreamingResponse.h"
#import "QSSAudioLimitExceeded.h"
#import "QSSCheckForSpeechResponse.h"
#import "QSSClientSetupInfo.h"
#import "QSSEndPointCandidate.h"
#import "QSSEndPointLikelihood.h"
#import "QSSFinalSpeechRecognitionResponse.h"
#import "QSSPartialSpeechRecognitionResponse.h"
#import "QSSRecognitionCandidate.h"
#import "QSSRecognitionProgress.h"
#import "QSSRequestStatsResponse.h"
#import "QSSServerEndpointFeatures.h"
#import "QSSUpdatedAcousticProfile.h"

@interface QSSMutableRecognitionStreamingResponse : QSSRecognitionStreamingResponse

@property (copy, nonatomic) QSSAudioLimitExceeded *contentAsQSSAudioLimitExceeded;
@property (copy, nonatomic) QSSCheckForSpeechResponse *contentAsQSSCheckForSpeechResponse;
@property (copy, nonatomic) QSSClientSetupInfo *contentAsQSSClientSetupInfo;
@property (copy, nonatomic) QSSEndPointCandidate *contentAsQSSEndPointCandidate;
@property (copy, nonatomic) QSSEndPointLikelihood *contentAsQSSEndPointLikelihood;
@property (copy, nonatomic) QSSFinalSpeechRecognitionResponse *contentAsQSSFinalSpeechRecognitionResponse;
@property (copy, nonatomic) QSSPartialSpeechRecognitionResponse *contentAsQSSPartialSpeechRecognitionResponse;
@property (copy, nonatomic) QSSRecognitionCandidate *contentAsQSSRecognitionCandidate;
@property (copy, nonatomic) QSSRecognitionProgress *contentAsQSSRecognitionProgress;
@property (copy, nonatomic) QSSRequestStatsResponse *contentAsQSSRequestStatsResponse;
@property (copy, nonatomic) QSSServerEndpointFeatures *contentAsQSSServerEndpointFeatures;
@property (copy, nonatomic) QSSUpdatedAcousticProfile *contentAsQSSUpdatedAcousticProfile;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif