// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSAUDIOANALYTICS_SPEECHRECOGNITIONFEATURESENTRY_H
#define QSSAUDIOANALYTICS_SPEECHRECOGNITIONFEATURESENTRY_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSAudioAnalytics_SpeechRecognitionFeaturesEntry : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SpeechRecognitionFeaturesEntry _root;
}


@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) float value;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechRecognitionFeaturesEntry *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechRecognitionFeaturesEntry *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::AudioAnalytics_::SpeechRecognitionFeaturesEntry> )addObjectToBuffer:(*void)arg0 ;


@end


#endif