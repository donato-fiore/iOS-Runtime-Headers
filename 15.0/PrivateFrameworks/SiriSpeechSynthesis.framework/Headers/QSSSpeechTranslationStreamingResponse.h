// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSSPEECHTRANSLATIONSTREAMINGRESPONSE_H
#define QSSSPEECHTRANSLATIONSTREAMINGRESPONSE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

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

@interface QSSSpeechTranslationStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SpeechTranslationStreamingResponse _root;
}


@property (readonly, nonatomic) QSSAudioLimitExceeded *contentAsQSSAudioLimitExceeded;
@property (readonly, nonatomic) QSSClientSetupInfo *contentAsQSSClientSetupInfo;
@property (readonly, nonatomic) QSSFinalBlazarResponse *contentAsQSSFinalBlazarResponse;
@property (readonly, nonatomic) QSSRecognitionCandidate *contentAsQSSRecognitionCandidate;
@property (readonly, nonatomic) QSSRecognitionProgress *contentAsQSSRecognitionProgress;
@property (readonly, nonatomic) QSSRequestStatsResponse *contentAsQSSRequestStatsResponse;
@property (readonly, nonatomic) QSSServerEndpointFeatures *contentAsQSSServerEndpointFeatures;
@property (readonly, nonatomic) QSSSpeechTranslationFinalRecognitionResponse *contentAsQSSSpeechTranslationFinalRecognitionResponse;
@property (readonly, nonatomic) QSSSpeechTranslationMtResponse *contentAsQSSSpeechTranslationMtResponse;
@property (readonly, nonatomic) QSSSpeechTranslationPartialRecognitionResponse *contentAsQSSSpeechTranslationPartialRecognitionResponse;
@property (readonly, nonatomic) QSSSpeechTranslationServerEndpointFeatures *contentAsQSSSpeechTranslationServerEndpointFeatures;
@property (readonly, nonatomic) QSSSpeechTranslationTextToSpeechResponse *contentAsQSSSpeechTranslationTextToSpeechResponse;
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