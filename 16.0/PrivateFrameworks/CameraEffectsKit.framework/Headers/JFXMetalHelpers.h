// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXMETALHELPERS_H
#define JFXMETALHELPERS_H

@protocol MTLDevice;

#import <Foundation/Foundation.h>


@interface JFXMetalHelpers : NSObject {
    id<MTLDevice> *m_device;
}




+(NSUInteger)metalPixelFormatForImage:(struct __CVBuffer *)arg0 ;
+(id)copyMetalLibraryWithDevice:(id)arg0 error:(*id)arg1 ;
+(struct __CVBuffer *)createCVTextureFromImage:(struct __CVBuffer *)arg0 withTextureCache:(struct __CVMetalTextureCache *)arg1 ;
-(BOOL)runComputeEncoder:(id)arg0 pipelineState:(id)arg1 referenceTexture:(id)arg2 ;
-(id)device;
-(id)initWithDevice:(id)arg0 ;
-(id)newPipelineStateForFunctionWithName:(id)arg0 ;
-(id)newTexture:(id)arg0 ;
-(id)newTextureWithSameSizeAs:(id)arg0 pixelFormat:(NSUInteger)arg1 ;
-(id)newTextureWithWidth:(unsigned int)arg0 height:(unsigned int)arg1 pixelFormat:(NSUInteger)arg2 usage:(NSUInteger)arg3 ;


@end


#endif