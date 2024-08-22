// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANSTALGORITHM_H
#define ANSTALGORITHM_H


#import <Foundation/Foundation.h>


@interface ANSTAlgorithm : NSObject



+(id)new;
-(BOOL)prepareWithError:(*id)arg0 ;
-(id)_init;
-(id)init;
-(struct __CVBuffer *)createPixelBuffer:(unsigned int)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 ;
-(struct __CVPixelBufferPool *)pixelBufferPoolCreateWithMinCapacity:(NSUInteger)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 pixelFormat:(unsigned int)arg3 ;


@end


#endif