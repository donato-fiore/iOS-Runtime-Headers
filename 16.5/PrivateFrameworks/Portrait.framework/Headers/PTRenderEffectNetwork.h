// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTRENDEREFFECTNETWORK_H
#define PTRENDEREFFECTNETWORK_H

@class NSString;
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
    *__CVBuffer _inRGBAAppleDepthRunner;
    *__CVBuffer _outDisparityAppleDepthRunner;
    *__CVBuffer _inTemporalDisparityAppleDepthRunner;
    id<MTLTexture> *_inRGBA;
    id<MTLTexture> *_inRGBARotated;
    id<MTLTexture>" _disparityInOut;
    id<MTLTexture> *_outDisparityRotated;
    *__CVBuffer _inputPixelBuffer;
    NSString *_inRGBAName;
    PTEffectUtil *_effectUtil;
    PTUtil *_util;
    BOOL _useHighResNetwork;
    int _frameId;
    int _outDispIndex;
    int _inDispIndex;
}


@property NSInteger frameIndex; // ivar: _frameIndex


+(id)lastNetworkVersion;
-(BOOL)highResNetwork;
-(BOOL)rotated;
-(NSUInteger)getLayoutFromSize:(struct ? )arg0 ;
-(id)findTensorNameUsingReflection:(id)arg0 name:(id)arg1 ;
-(id)getMTLTextureFromCVPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)inPrevDisparity;
-(id)inRGBA;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 commandQueue:(id)arg3 colorSize:(struct ? )arg4 effectUtil:(id)arg5 util:(id)arg6 useHighResNetwork:(BOOL)arg7 sharedResources:(id)arg8 ;
-(id)networkVersion;
-(id)outDisparity;
-(unsigned int)executeNetwork;
-(void)bindColorInputPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)dealloc;
-(void)dumpNetworkInputWithDefaults:(id)arg0 ;
-(void)dumpNetworkOutputWithDefaults:(id)arg0 ;
-(void)reset;


@end


#endif