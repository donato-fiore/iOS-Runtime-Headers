// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTRECOGNITIONSTREAMINGRESPONSE_H
#define FTRECOGNITIONSTREAMINGRESPONSE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTAudioLimitExceeded.h"
#import "FTCheckForSpeechResponse.h"
#import "FTClientSetupInfo.h"
#import "FTEndPointCandidate.h"
#import "FTEndPointLikelihood.h"
#import "FTFinalSpeechRecognitionResponse.h"
#import "FTPartialSpeechRecognitionResponse.h"
#import "FTRecognitionCandidate.h"
#import "FTRecognitionProgress.h"
#import "FTRequestStatsResponse.h"
#import "FTServerEndpointFeatures.h"
#import "FTUpdatedAcousticProfile.h"

@interface FTRecognitionStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *RecognitionStreamingResponse _root;
}


@property (readonly, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property (readonly, nonatomic) FTCheckForSpeechResponse *contentAsFTCheckForSpeechResponse;
@property (readonly, nonatomic) FTClientSetupInfo *contentAsFTClientSetupInfo;
@property (readonly, nonatomic) FTEndPointCandidate *contentAsFTEndPointCandidate;
@property (readonly, nonatomic) FTEndPointLikelihood *contentAsFTEndPointLikelihood;
@property (readonly, nonatomic) FTFinalSpeechRecognitionResponse *contentAsFTFinalSpeechRecognitionResponse;
@property (readonly, nonatomic) FTPartialSpeechRecognitionResponse *contentAsFTPartialSpeechRecognitionResponse;
@property (readonly, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property (readonly, nonatomic) FTRecognitionProgress *contentAsFTRecognitionProgress;
@property (readonly, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property (readonly, nonatomic) FTServerEndpointFeatures *contentAsFTServerEndpointFeatures;
@property (readonly, nonatomic) FTUpdatedAcousticProfile *contentAsFTUpdatedAcousticProfile;
@property (readonly, nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecognitionStreamingResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecognitionStreamingResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::RecognitionStreamingResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif