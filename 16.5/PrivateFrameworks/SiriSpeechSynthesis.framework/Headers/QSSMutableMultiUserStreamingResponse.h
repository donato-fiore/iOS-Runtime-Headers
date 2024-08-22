// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLEMULTIUSERSTREAMINGRESPONSE_H
#define QSSMUTABLEMULTIUSERSTREAMINGRESPONSE_H



#import "QSSMultiUserStreamingResponse.h"
#import "QSSAudioLimitExceeded.h"
#import "QSSClientSetupInfo.h"
#import "QSSFinalBlazarResponse.h"
#import "QSSFinalSpeechRecognitionResponse.h"
#import "QSSPartialSpeechRecognitionResponse.h"
#import "QSSRecognitionCandidate.h"
#import "QSSRecognitionProgress.h"
#import "QSSRequestStatsResponse.h"
#import "QSSServerEndpointFeatures.h"

@interface QSSMutableMultiUserStreamingResponse : QSSMultiUserStreamingResponse

@property (copy, nonatomic) QSSAudioLimitExceeded *contentAsQSSAudioLimitExceeded;
@property (copy, nonatomic) QSSClientSetupInfo *contentAsQSSClientSetupInfo;
@property (copy, nonatomic) QSSFinalBlazarResponse *contentAsQSSFinalBlazarResponse;
@property (copy, nonatomic) QSSFinalSpeechRecognitionResponse *contentAsQSSFinalSpeechRecognitionResponse;
@property (copy, nonatomic) QSSPartialSpeechRecognitionResponse *contentAsQSSPartialSpeechRecognitionResponse;
@property (copy, nonatomic) QSSRecognitionCandidate *contentAsQSSRecognitionCandidate;
@property (copy, nonatomic) QSSRecognitionProgress *contentAsQSSRecognitionProgress;
@property (copy, nonatomic) QSSRequestStatsResponse *contentAsQSSRequestStatsResponse;
@property (copy, nonatomic) QSSServerEndpointFeatures *contentAsQSSServerEndpointFeatures;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif