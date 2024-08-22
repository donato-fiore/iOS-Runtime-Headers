// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLEMULTIUSERSTREAMINGRESPONSE_H
#define FTMUTABLEMULTIUSERSTREAMINGRESPONSE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTMultiUserStreamingResponse.h"
#import "FTAudioLimitExceeded.h"
#import "FTClientSetupInfo.h"
#import "FTFinalBlazarResponse.h"
#import "FTFinalSpeechRecognitionResponse.h"
#import "FTPartialSpeechRecognitionResponse.h"
#import "FTRecognitionCandidate.h"
#import "FTRecognitionProgress.h"
#import "FTRequestStatsResponse.h"
#import "FTServerEndpointFeatures.h"

@interface FTMutableMultiUserStreamingResponse : FTMultiUserStreamingResponse

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (copy, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property (copy, nonatomic) FTClientSetupInfo *contentAsFTClientSetupInfo;
@property (copy, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property (copy, nonatomic) FTFinalSpeechRecognitionResponse *contentAsFTFinalSpeechRecognitionResponse;
@property (copy, nonatomic) FTPartialSpeechRecognitionResponse *contentAsFTPartialSpeechRecognitionResponse;
@property (copy, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property (copy, nonatomic) FTRecognitionProgress *contentAsFTRecognitionProgress;
@property (copy, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property (copy, nonatomic) FTServerEndpointFeatures *contentAsFTServerEndpointFeatures;
@property (nonatomic) NSInteger content_type;


+(Class)content_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)content_typeForMutableObject:(id)arg0 ;
+(NSInteger)content_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif