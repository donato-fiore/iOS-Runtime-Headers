// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTRENDEREFFECTNETWORK_H
#define PTRENDEREFFECTNETWORK_H

@class NSString, ADEspressoRunner;
@protocol MTLDevice, MTLCommandQueue, MTLTexture;

#import <Foundation/Foundation.h>

#import "PTEspressoGenericExecutor.h"
#import "PTEffectUtil.h"
#import "PTUtil.h"

@interface PTRenderEffectNetwork : NSObject {
    PTEspressoGenericExecutor *_executor;
    NSString *_reinjectDisparity;
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    ADEspressoRunner *_espressoRunner;
    *__CVBuffer _inRGBAAppleDepthRunner;
    *__CVBuffer _outDisparityAppleDepthRunner;
    *__CVBuffer _inTemporalDisparityAppleDepthRunner;
    id<MTLTexture> *_inRGBA;
    id<MTLTexture> *_inRGBARotated;
    id<MTLTexture> *_inTemporalDisparity;
    id<MTLTexture> *_outDisparity;
    id<MTLTexture> *_outDisparityRotated;
    PTEffectUtil *_effectUtil;
    PTUtil *_util;
}


@property NSInteger frameIndex; // ivar: _frameIndex


-(NSUInteger)getLayoutFromSize:(struct ? )arg0 ;
-(id)getMTLTextureFromCVPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)inRGBA;
-(id)initWithDevice:(id)arg0 commandQueue:(id)arg1 colorSize:(struct ? )arg2 effectUtil:(id)arg3 util:(id)arg4 ;
-(id)outDisparity;
-(unsigned int)executeNetwork;
-(void)dealloc;
-(void)dumpNetworkInputWithDefaults:(id)arg0 ;
-(void)dumpNetworkOutputWithDefaults:(id)arg0 ;
-(void)reset;


@end


#endif