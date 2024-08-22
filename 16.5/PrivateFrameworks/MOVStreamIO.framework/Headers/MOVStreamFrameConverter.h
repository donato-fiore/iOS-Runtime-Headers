// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOVSTREAMFRAMECONVERTER_H
#define MOVSTREAMFRAMECONVERTER_H


#import <Foundation/Foundation.h>

#import "MIOPixelBufferPool.h"

@interface MOVStreamFrameConverter : NSObject {
    MIOPixelBufferPool *_pool;
    *OpaqueVTPixelTransferSession _transferSession;
}


@property BOOL transferSessionUsageDisabled; // ivar: _transferSessionUsageDisabled


-(id)init;
-(id)initWithTargetWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 format:(unsigned int)arg2 bytesPerRow:(NSUInteger)arg3 ;
-(id)initWithTargetWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 format:(unsigned int)arg2 bytesPerRows:(id)arg3 ;
-(id)initWithTargetWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 format:(unsigned int)arg2 extendedPixelsPerRow:(NSUInteger)arg3 ;
-(struct __CVBuffer *)convertPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)dealloc;


@end


#endif