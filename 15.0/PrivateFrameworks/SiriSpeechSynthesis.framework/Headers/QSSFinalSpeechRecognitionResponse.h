// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSFINALSPEECHRECOGNITIONRESPONSE_H
#define QSSFINALSPEECHRECOGNITIONRESPONSE_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSAudioAnalytics.h"
#import "QSSLatnnMitigatorResult.h"
#import "QSSRecognitionResult.h"

@interface QSSFinalSpeechRecognitionResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *FinalSpeechRecognitionResponse _root;
}


@property (readonly, nonatomic) QSSAudioAnalytics *audio_analytics;
@property (readonly, nonatomic) BOOL has_result;
@property (readonly, nonatomic) NSInteger lang_profile_recreate_codes;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) QSSLatnnMitigatorResult *latnn_mitigator_result;
@property (readonly, nonatomic) QSSRecognitionResult *recognition_result;
@property (readonly, nonatomic) NSString *request_locale;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSInteger watermark_detection;
@property (readonly, nonatomic) CGFloat watermark_peak_average;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct FinalSpeechRecognitionResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct FinalSpeechRecognitionResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::FinalSpeechRecognitionResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif