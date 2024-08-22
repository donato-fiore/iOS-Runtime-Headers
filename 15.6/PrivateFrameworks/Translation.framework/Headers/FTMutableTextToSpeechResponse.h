// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLETEXTTOSPEECHRESPONSE_H
#define FTMUTABLETEXTTOSPEECHRESPONSE_H

@class NSData, NSString, NSArray;


#import "FTTextToSpeechResponse.h"
#import "FTAudioDescription.h"
#import "FTTextToSpeechFeature.h"
#import "FTTextToSpeechMeta.h"

@interface FTMutableTextToSpeechResponse : FTTextToSpeechResponse

@property (copy, nonatomic) NSData *audio;
@property (nonatomic) NSInteger audio_type;
@property (copy, nonatomic) FTAudioDescription *decoder_description;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) FTTextToSpeechFeature *feature;
@property (copy, nonatomic) FTTextToSpeechMeta *meta_info;
@property (copy, nonatomic) FTAudioDescription *playback_description;
@property (nonatomic) int sample_rate;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSArray *word_timing_info;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)audio:(id)arg0 ;


@end


#endif