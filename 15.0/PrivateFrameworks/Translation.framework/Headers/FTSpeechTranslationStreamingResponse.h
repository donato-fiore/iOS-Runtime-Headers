// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTSPEECHTRANSLATIONSTREAMINGRESPONSE_H
#define FTSPEECHTRANSLATIONSTREAMINGRESPONSE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

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

@interface FTSpeechTranslationStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SpeechTranslationStreamingResponse _root;
}


@property (readonly, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property (readonly, nonatomic) FTClientSetupInfo *contentAsFTClientSetupInfo;
@property (readonly, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property (readonly, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property (readonly, nonatomic) FTRecognitionProgress *contentAsFTRecognitionProgress;
@property (readonly, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property (readonly, nonatomic) FTServerEndpointFeatures *contentAsFTServerEndpointFeatures;
@property (readonly, nonatomic) FTSpeechTranslationFinalRecognitionResponse *contentAsFTSpeechTranslationFinalRecognitionResponse;
@property (readonly, nonatomic) FTSpeechTranslationMtResponse *contentAsFTSpeechTranslationMtResponse;
@property (readonly, nonatomic) FTSpeechTranslationPartialRecognitionResponse *contentAsFTSpeechTranslationPartialRecognitionResponse;
@property (readonly, nonatomic) FTSpeechTranslationServerEndpointFeatures *contentAsFTSpeechTranslationServerEndpointFeatures;
@property (readonly, nonatomic) FTSpeechTranslationTextToSpeechResponse *contentAsFTSpeechTranslationTextToSpeechResponse;
@property (readonly, nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechTranslationStreamingResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechTranslationStreamingResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::SpeechTranslationStreamingResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif