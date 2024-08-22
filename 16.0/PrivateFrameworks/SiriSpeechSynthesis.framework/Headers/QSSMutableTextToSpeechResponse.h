// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLETEXTTOSPEECHRESPONSE_H
#define QSSMUTABLETEXTTOSPEECHRESPONSE_H

@class NSData, NSString, NSArray;


#import "QSSTextToSpeechResponse.h"
#import "QSSAudioDescription.h"
#import "QSSTextToSpeechResponseDevData.h"
#import "QSSTextToSpeechFeature.h"
#import "QSSTextToSpeechMeta.h"

@interface QSSMutableTextToSpeechResponse : QSSTextToSpeechResponse

@property (copy, nonatomic) NSData *audio;
@property (nonatomic) NSInteger audio_type;
@property (copy, nonatomic) QSSAudioDescription *decoder_description;
@property (copy, nonatomic) QSSTextToSpeechResponseDevData *dev_data;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) QSSTextToSpeechFeature *feature;
@property (copy, nonatomic) QSSTextToSpeechMeta *meta_info;
@property (copy, nonatomic) QSSAudioDescription *playback_description;
@property (nonatomic) int sample_rate;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSArray *word_timing_info;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)audio:(id)arg0 ;


@end


#endif