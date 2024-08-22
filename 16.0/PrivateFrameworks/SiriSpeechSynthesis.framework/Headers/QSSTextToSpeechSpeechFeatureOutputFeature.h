// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSTEXTTOSPEECHSPEECHFEATUREOUTPUTFEATURE_H
#define QSSTEXTTOSPEECHSPEECHFEATUREOUTPUTFEATURE_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSTextToSpeechSpeechFeatureOutputFeature : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechSpeechFeatureOutputFeature _root;
}


@property (readonly, nonatomic) float begin_time;
@property (readonly, nonatomic) float duration;
@property (readonly, nonatomic) float end_time;
@property (readonly, nonatomic) float energy;
@property (readonly, nonatomic) NSString *phone_name;
@property (readonly, nonatomic) float pitch;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechSpeechFeatureOutputFeature *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechSpeechFeatureOutputFeature *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureOutputFeature> )addObjectToBuffer:(*void)arg0 ;


@end


#endif