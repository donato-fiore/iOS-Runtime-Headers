// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVAUDIOPCMBUFFER_H
#define AVAUDIOPCMBUFFER_H

@class NSArray;


#import "AVAudioBuffer.h"

@interface AVAudioPCMBuffer : AVAudioBuffer

@property (readonly, nonatomic) NSArray *averagePowerPerChannel;
@property (readonly, nonatomic) **float floatChannelData;
@property (readonly, nonatomic) unsigned int frameCapacity;
@property (nonatomic) unsigned int frameLength;
@property (readonly, nonatomic) **short int16ChannelData;
@property (readonly, nonatomic) **int int32ChannelData;
@property (readonly, nonatomic) NSArray *peakPowerPerChannel;
@property (readonly, nonatomic) NSUInteger stride;


-(BOOL)appendDataFromBuffer:(id)arg0 ;
-(BOOL)appendDataFromBuffer:(id)arg0 channel:(NSInteger)arg1 ;
-(float)calculatePower:(NSUInteger)arg0 forFloatData:(*float)arg1 stride:(NSInteger)arg2 frameLength:(unsigned int)arg3 ;
-(id)calculatePower:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPCMFormat:(id)arg0 bufferListNoCopy:(struct AudioBufferList *)arg1 deallocator:(id)arg2 ;
-(id)initWithPCMFormat:(id)arg0 frameCapacity:(unsigned int)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)splitIntoSingleChannelBuffers;
-(void)_initChannelPtrs;
-(void)setByteLength:(unsigned int)arg0 ;


@end


#endif