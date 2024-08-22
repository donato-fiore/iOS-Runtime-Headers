// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWAUDIOFORMAT_H
#define BWAUDIOFORMAT_H

@class NSDictionary;


#import "BWFormat.h"

@interface BWAudioFormat : BWFormat {
    *opaqueCMFormatDescription _audioFormatDescription;
    NSDictionary *_avAudioSettings;
}


@property (readonly) NSDictionary *audioCompressionSBPOptions;
@property (readonly) *opaqueCMFormatDescription audioFormatDescription;


+(BOOL)compressionOptionTrimSampleBufferDurationsIsRequiredForAudioSettings:(id)arg0 ;
+(id)formatForAVAudioSettings:(id)arg0 inputFormat:(id)arg1 ;
+(id)formatWithAudioFormatDescription:(struct opaqueCMFormatDescription *)arg0 ;
+(void)initialize;
-(id)debugDescription;
-(id)description;
-(struct opaqueCMFormatDescription *)formatDescription;
-(unsigned int)mediaType;
-(void)dealloc;


@end


#endif