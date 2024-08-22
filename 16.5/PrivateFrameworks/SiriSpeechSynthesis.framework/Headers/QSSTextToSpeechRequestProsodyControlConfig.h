// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSTEXTTOSPEECHREQUESTPROSODYCONTROLCONFIG_H
#define QSSTEXTTOSPEECHREQUESTPROSODYCONTROLCONFIG_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSTextToSpeechRequestProsodyControlConfig : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechRequestProsodyControlConfig _root;
}


@property (readonly, nonatomic) float global_energy;
@property (readonly, nonatomic) float global_pitch;
@property (readonly, nonatomic) float global_rate;
@property (readonly, nonatomic) float global_sent_duration;
@property (readonly, nonatomic) float global_sent_energy;
@property (readonly, nonatomic) float global_sent_pitch;
@property (readonly, nonatomic) float global_sent_pitchrange;
@property (readonly, nonatomic) float global_sent_tilt;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechRequestProsodyControlConfig *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechRequestProsodyControlConfig *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechRequestProsodyControlConfig> )addObjectToBuffer:(*void)arg0 ;


@end


#endif