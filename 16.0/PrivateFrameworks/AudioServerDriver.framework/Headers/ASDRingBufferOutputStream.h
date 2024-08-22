// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDRINGBUFFEROUTPUTSTREAM_H
#define ASDRINGBUFFEROUTPUTSTREAM_H

@protocol ASDManagedRingBuffer;


#import "ASDStream.h"

@interface ASDRingBufferOutputStream : ASDStream {
    unique_ptr<ASDBufferList, std::default_delete<ASDBufferList>> _bufferList;
}


@property (readonly, nonatomic) NSObject<ASDManagedRingBuffer> *ringBuffer; // ivar: _ringBuffer


-(id)initWithDirection:(unsigned int)arg0 withPlugin:(id)arg1 ;
-(id)initWithRingBuffer:(id)arg0 withPlugin:(id)arg1 ;
-(id)writeMixBlock:(SEL)arg0 ;
-(void)setPhysicalFormat:(id)arg0 ;
-(void)startStream;
-(void)stopStream;


@end


#endif