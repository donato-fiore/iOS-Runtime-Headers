// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSRECOGNITIONCANDIDATE_H
#define QSSRECOGNITIONCANDIDATE_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSAudioAnalytics.h"
#import "QSSLatnnMitigatorResult.h"
#import "QSSRecognitionResult.h"

@interface QSSRecognitionCandidate : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *RecognitionCandidate _root;
}


@property (readonly, nonatomic) QSSAudioAnalytics *audio_analytics;
@property (readonly, nonatomic) NSInteger fingerprint_detection;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) QSSLatnnMitigatorResult *latnn_mitigator_result;
@property (readonly, nonatomic) QSSRecognitionResult *recognition_result;
@property (readonly, nonatomic) NSString *request_locale;
@property (readonly, nonatomic) NSString *result_id;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) CGFloat snr;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSInteger watermark_detection;
@property (readonly, nonatomic) CGFloat watermark_peak_average;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecognitionCandidate *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecognitionCandidate *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::RecognitionCandidate> )addObjectToBuffer:(*void)arg0 ;


@end


#endif