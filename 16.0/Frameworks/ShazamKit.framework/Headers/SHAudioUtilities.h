// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHAUDIOUTILITIES_H
#define SHAUDIOUTILITIES_H


#import <Foundation/Foundation.h>


@interface SHAudioUtilities : NSObject



// +(BOOL)buffersFromAudioFile:(id)arg0 format:(id)arg1 accumulator:(id)arg2 error:(unk)arg3  ;
+(BOOL)isAudioFormatSupported:(id)arg0 ;
+(CGFloat)convertMachTimeToMilliseconds:(NSUInteger)arg0 ;
+(CGFloat)convertMachTimeToSeconds:(NSUInteger)arg0 ;
+(CGFloat)durationOfBuffer:(id)arg0 ;
+(id)appendBuffer:(id)arg0 toBuffer:(id)arg1 ;
+(id)audioBufferFromData:(*void)arg0 byteSize:(NSUInteger)arg1 inFormat:(id)arg2 ;
+(id)bufferHead:(id)arg0 duration:(CGFloat)arg1 ;
+(id)bufferTail:(id)arg0 duration:(CGFloat)arg1 ;
+(id)extractFromBuffer:(id)arg0 atPosition:(unsigned int)arg1 length:(unsigned int)arg2 ;
+(id)pcmBufferFromAudioFile:(id)arg0 outputFormat:(id)arg1 durationToRead:(CGFloat)arg2 error:(*id)arg3 ;
+(id)pcmBufferFromAudioFile:(id)arg0 outputFormat:(id)arg1 error:(*id)arg2 ;
+(id)splitBuffer:(id)arg0 atPosition:(unsigned int)arg1 ;
+(id)splitBuffer:(id)arg0 fromStartPosition:(unsigned int)arg1 intoDurationsOfSize:(CGFloat)arg2 ;
// +(void)mixedTracksFromAsset:(id)arg0 format:(id)arg1 accumulator:(id)arg2 completionHandler:(unk)arg3  ;


@end


#endif