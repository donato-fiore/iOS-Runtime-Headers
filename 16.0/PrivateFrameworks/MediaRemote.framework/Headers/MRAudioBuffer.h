// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRAUDIOBUFFER_H
#define MRAUDIOBUFFER_H

@class AVAudioCompressedBuffer, NSDictionary;

#import <Foundation/Foundation.h>


@interface MRAudioBuffer : NSObject

@property (readonly, nonatomic) AVAudioCompressedBuffer *buffer; // ivar: _buffer
@property (readonly, nonatomic) NSDictionary *formatSettings; // ivar: _formatSettings


-(id)initWithFormatSettings:(id)arg0 packetCapacity:(NSUInteger)arg1 maximumPacketSize:(NSUInteger)arg2 ;


@end


#endif