// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPPOOLBASEDPIXELBUFFERCREATOR_H
#define VCPPOOLBASEDPIXELBUFFERCREATOR_H


#import <Foundation/Foundation.h>


@interface VCPPoolBasedPixelBufferCreator : NSObject {
    CF<__CVPixelBufferPool *> _pool;
    NSInteger _bufferWidth;
    NSInteger _bufferHeight;
    unsigned int _pixelFormat;
}




-(?)_createPixelBufferPool:(?)arg0 withBufferWidth:(?)arg1 bufferHeightandPixelFormat;
-(?)createPixelBuffer;
-(id)initWithBufferWidth:(NSInteger)arg0 bufferHeight:(NSInteger)arg1 andPixelFormat:(unsigned int)arg2 ;


@end


#endif