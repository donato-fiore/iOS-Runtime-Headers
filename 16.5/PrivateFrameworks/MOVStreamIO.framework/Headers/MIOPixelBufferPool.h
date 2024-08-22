// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIOPIXELBUFFERPOOL_H
#define MIOPIXELBUFFERPOOL_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface MIOPixelBufferPool : NSObject

@property (nonatomic) *__CVPixelBufferPool pixelBufferPool; // ivar: _pixelBufferPool
@property (retain, nonatomic) NSDictionary *poolAttributes; // ivar: _poolAttributes


+(id)createMIOPixelBufferPoolWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 pixelFormat:(unsigned int)arg2 ;
+(id)createMIOPixelBufferPoolWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 pixelFormat:(unsigned int)arg2 exactBytesPerRow:(NSUInteger)arg3 minBufferCount:(NSUInteger)arg4 ;
+(id)createMIOPixelBufferPoolWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 pixelFormat:(unsigned int)arg2 exactBytesPerRows:(id)arg3 minBufferCount:(NSUInteger)arg4 ;
+(id)createMIOPixelBufferPoolWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 pixelFormat:(unsigned int)arg2 extendedPixelsPerRow:(NSUInteger)arg3 minBufferCount:(NSUInteger)arg4 ;
+(id)createMIOPixelBufferPoolWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 pixelFormat:(unsigned int)arg2 minBufferCount:(NSUInteger)arg3 ;
+(id)createNewL008MIOPixelBufferPoolWithReferencePixelBuffer:(struct __CVBuffer *)arg0 minBufferCount:(NSUInteger)arg1 ;
+(id)createNewL010MIOPixelBufferPoolWithReferencePixelBuffer:(struct __CVBuffer *)arg0 minBufferCount:(NSUInteger)arg1 ;
-(CGFloat)getMaximumBufferAge;
-(NSUInteger)getAllocationThreshold;
-(NSUInteger)getMinimumBufferCount;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 bufferAttributes:(struct __CFDictionary *)arg1 poolAttributes:(struct __CFDictionary *)arg2 error:(*id)arg3 ;
-(struct __CVBuffer *)getPixelBuffer;
-(void)dealloc;


@end


#endif