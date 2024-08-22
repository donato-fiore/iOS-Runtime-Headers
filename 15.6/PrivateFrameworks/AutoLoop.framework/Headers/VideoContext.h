// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIDEOCONTEXT_H
#define VIDEOCONTEXT_H

@class CIContext, NSDictionary;

#import <Foundation/Foundation.h>

#import "VideoWriter.h"

@interface VideoContext : NSObject

@property (readonly) CIContext *ciCtx; // ivar: ciCtx
@property BOOL colorManagement; // ivar: _colorManagement
@property (readonly) NSDictionary *pixelAttrs; // ivar: pixelAttrs
@property (readonly) unsigned int pixelFormat; // ivar: pixelFormat
@property (readonly) unsigned int pixelFormatFlags; // ivar: pixelFormatFlags
@property (readonly) VideoWriter *writer; // ivar: writer


-(BOOL)pixelBuffer:(struct __CVBuffer *)arg0 conformsToImage:(id)arg1 ;
-(id)initWithWriter:(id)arg0 pixelFormatFlags:(unsigned int)arg1 ;
-(id)initWithWriter:(id)arg0 pixelFormatFlags:(unsigned int)arg1 colorManagement:(BOOL)arg2 ;
-(int)appendFrame:(id)arg0 frameTime:(struct ? )arg1 srcPixBuf:(struct __CVBuffer *)arg2 ;
-(struct __CVBuffer *)createPixelBuffer;
-(struct __CVBuffer *)createPixelBuffer:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(struct __CVBuffer *)pixelBufferFromImage:(id)arg0 ;
-(struct __CVBuffer *)pixelBufferFromImage:(id)arg0 withAttachFrom:(struct __CVBuffer *)arg1 ;


@end


#endif