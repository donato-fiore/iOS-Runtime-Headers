// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAUDIOCOMPRESSEDBUFFER_H
#define AVAUDIOCOMPRESSEDBUFFER_H



#import "AVAudioBuffer.h"

@interface AVAudioCompressedBuffer : AVAudioBuffer

@property (readonly, nonatomic) unsigned int byteCapacity;
@property (nonatomic) unsigned int byteLength;
@property (readonly, nonatomic) *void data;
@property (readonly, nonatomic) NSInteger maximumPacketSize;
@property (readonly, nonatomic) unsigned int packetCapacity;
@property (nonatomic) unsigned int packetCount;
@property (readonly, nonatomic) *AudioStreamPacketDescription packetDescriptions;


-(id)initWithFormat:(id)arg0 packetCapacity:(unsigned int)arg1 ;
-(id)initWithFormat:(id)arg0 packetCapacity:(unsigned int)arg1 maximumPacketSize:(NSInteger)arg2 ;


@end


#endif