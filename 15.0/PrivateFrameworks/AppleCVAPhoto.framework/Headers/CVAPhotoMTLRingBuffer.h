// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVAPHOTOMTLRINGBUFFER_H
#define CVAPHOTOMTLRINGBUFFER_H


#import <Foundation/Foundation.h>


@interface CVAPhotoMTLRingBuffer : NSObject {
    array<id<MTLBuffer>, 3> _buffers;
    NSUInteger _index;
}




-(id)advancedBuffer;
-(id)currentBuffer;
-(id)getBufferAt:(NSUInteger)arg0 ;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 options:(NSUInteger)arg2 device:(id)arg3 ;
-(id)initWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 device:(id)arg2 ;


@end


#endif