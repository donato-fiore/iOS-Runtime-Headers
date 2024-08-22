// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKRINGBUFFER_H
#define GKRINGBUFFER_H


#import <Foundation/Foundation.h>


@interface GKRingBuffer : NSObject {
    *void ringBufRef;
    unsigned int endTime;
    unsigned int capacity;
    unsigned int bytesPerFrame;
}




-(BOOL)store:(char *)arg0 numSamples:(unsigned int)arg1 timestamp:(unsigned int)arg2 ;
-(id)init;
-(id)initWithCapacity:(unsigned int)arg0 bytesPerFrame:(unsigned int)arg1 ;
-(int)fetch:(char *)arg0 numSamples:(unsigned int)arg1 timestamp:(unsigned int)arg2 ;
-(int)needsNewNumSamples:(unsigned int)arg0 timestamp:(unsigned int)arg1 ;
-(void)dealloc;
-(void)increaseCapacity:(unsigned int)arg0 ;


@end


#endif