// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLESPEECHTRANSLATIONSTREAMINGRESPONSE_H
#define QSSMUTABLESPEECHTRANSLATIONSTREAMINGRESPONSE_H



#import "QSSSpeechTranslationStreamingResponse.h"
#import "QSSAudioLimitExceeded.h"
#import "QSSClientSetupInfo.h"
#import "QSSFinalBlazarResponse.h"
#import "QSSRecognitionCandidate.h"
#import "QSSRecognitionProgress.h"
#import "QSSRequestStatsResponse.h"
#import "QSSServerEndpointFeatures.h"
#import "QSSSpeechTranslationFinalRecognitionResponse.h"
#import "QSSSpeechTranslationMtResponse.h"
#import "QSSSpeechTranslationPartialRecognitionResponse.h"
#import "QSSSpeechTranslationServerEndpointFeatures.h"
#import "QSSSpeechTranslationTextToSpeechResponse.h"

@interface QSSMutableSpeechTranslationStreamingResponse : QSSSpeechTranslationStreamingResponse

@property (copy, nonatomic) QSSAudioLimitExceeded *contentAsQSSAudioLimitExceeded;
@property (copy, nonatomic) QSSClientSetupInfo *contentAsQSSClientSetupInfo;
@property (copy, nonatomic) QSSFinalBlazarResponse *contentAsQSSFinalBlazarResponse;
@property (copy, nonatomic) QSSRecognitionCandidate *contentAsQSSRecognitionCandidate;
@property (copy, nonatomic) QSSRecognitionProgress *contentAsQSSRecognitionProgress;
@property (copy, nonatomic) QSSRequestStatsResponse *contentAsQSSRequestStatsResponse;
@property (copy, nonatomic) QSSServerEndpointFeatures *contentAsQSSServerEndpointFeatures;
@property (copy, nonatomic) QSSSpeechTranslationFinalRecognitionResponse *contentAsQSSSpeechTranslationFinalRecognitionResponse;
@property (copy, nonatomic) QSSSpeechTranslationMtResponse *contentAsQSSSpeechTranslationMtResponse;
@property (copy, nonatomic) QSSSpeechTranslationPartialRecognitionResponse *contentAsQSSSpeechTranslationPartialRecognitionResponse;
@property (copy, nonatomic) QSSSpeechTranslationServerEndpointFeatures *contentAsQSSSpeechTranslationServerEndpointFeatures;
@property (copy, nonatomic) QSSSpeechTranslationTextToSpeechResponse *contentAsQSSSpeechTranslationTextToSpeechResponse;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif