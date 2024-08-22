// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PIPARALLAXRENDERBUFFER_H
#define _PIPARALLAXRENDERBUFFER_H

@class NUColorSpace, NSString, NUPixelFormat, CIRenderInfo, CIRenderTask;
@protocol NUImageBuffer;

#import <Foundation/Foundation.h>


@interface _PIParallaxRenderBuffer : NSObject <NUImageBuffer>



@property (readonly, nonatomic) *__CVBuffer CVPixelBuffer;
@property (readonly, nonatomic) NUColorSpace *colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NUPixelFormat *format;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NUImageBuffer> *pixelBuffer; // ivar: _pixelBuffer
@property (readonly, nonatomic) CIRenderInfo *renderInfo; // ivar: _renderInfo
@property (readonly, nonatomic) CIRenderTask *renderTask; // ivar: _renderTask
@property (readonly, nonatomic) ? size;
@property (readonly) Class superclass;


-(id)initWithPixelBuffer:(id)arg0 renderTask:(id)arg1 ;


@end


#endif