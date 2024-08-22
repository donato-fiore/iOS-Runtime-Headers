// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSRECOGNITIONSTREAMINGRESPONSE_H
#define QSSRECOGNITIONSTREAMINGRESPONSE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

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

@interface QSSRecognitionStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *RecognitionStreamingResponse _root;
}


@property (readonly, nonatomic) QSSAudioLimitExceeded *contentAsQSSAudioLimitExceeded;
@property (readonly, nonatomic) QSSCheckForSpeechResponse *contentAsQSSCheckForSpeechResponse;
@property (readonly, nonatomic) QSSClientSetupInfo *contentAsQSSClientSetupInfo;
@property (readonly, nonatomic) QSSEndPointCandidate *contentAsQSSEndPointCandidate;
@property (readonly, nonatomic) QSSEndPointLikelihood *contentAsQSSEndPointLikelihood;
@property (readonly, nonatomic) QSSFinalSpeechRecognitionResponse *contentAsQSSFinalSpeechRecognitionResponse;
@property (readonly, nonatomic) QSSPartialSpeechRecognitionResponse *contentAsQSSPartialSpeechRecognitionResponse;
@property (readonly, nonatomic) QSSRecognitionCandidate *contentAsQSSRecognitionCandidate;
@property (readonly, nonatomic) QSSRecognitionProgress *contentAsQSSRecognitionProgress;
@property (readonly, nonatomic) QSSRequestStatsResponse *contentAsQSSRequestStatsResponse;
@property (readonly, nonatomic) QSSServerEndpointFeatures *contentAsQSSServerEndpointFeatures;
@property (readonly, nonatomic) QSSUpdatedAcousticProfile *contentAsQSSUpdatedAcousticProfile;
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