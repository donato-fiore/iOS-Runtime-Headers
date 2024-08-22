// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSAUDIOZEROFILTER_H
#define CSAUDIOZEROFILTER_H


#import <Foundation/Foundation.h>


@interface CSAudioZeroFilter : NSObject {
    unique_ptr<CSAudioZeroFilterImpl<unsigned short>, std::default_delete<CSAudioZeroFilterImpl<unsigned short>>> _audioZeroFilterImpl;
}




-(NSUInteger)endAudioAndFetchAnyTrailingZerosPacket:(*id)arg0 ;
-(NSUInteger)filterZerosInAudioPacket:(id)arg0 atBufferHostTime:(NSUInteger)arg1 filteredPacket:(*id)arg2 ;
-(id)initWithZeroWindowSize:(NSUInteger)arg0 approxAbsSpeechThreshold:(unsigned short)arg1 numHostTicksPerAudioSample:(CGFloat)arg2 ;
-(id)metrics;


@end


#endif