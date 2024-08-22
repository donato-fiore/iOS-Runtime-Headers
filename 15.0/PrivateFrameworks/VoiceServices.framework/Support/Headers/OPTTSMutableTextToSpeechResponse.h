// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OPTTSMUTABLETEXTTOSPEECHRESPONSE_H
#define OPTTSMUTABLETEXTTOSPEECHRESPONSE_H

@class NSData, NSString, NSArray;


#import "OPTTSTextToSpeechResponse.h"
#import "OPTTSAudioDescription.h"
#import "OPTTSTextToSpeechMeta.h"

@interface OPTTSMutableTextToSpeechResponse : OPTTSTextToSpeechResponse

@property (copy, nonatomic) NSData *audio;
@property (nonatomic) NSInteger audio_type;
@property (copy, nonatomic) OPTTSAudioDescription *decoder_description;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) OPTTSTextToSpeechMeta *meta_info;
@property (copy, nonatomic) OPTTSAudioDescription *playback_description;
@property (nonatomic) int sample_rate;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSArray *word_timing_info;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)audio:(id)arg0 ;


@end


#endif