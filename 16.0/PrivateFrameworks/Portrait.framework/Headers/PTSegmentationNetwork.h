// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTSEGMENTATIONNETWORK_H
#define PTSEGMENTATIONNETWORK_H

@class NSString;
@protocol MTLDevice, MTLCommandQueue, MTLTexture;

#import <Foundation/Foundation.h>

#import "PTEspressoGenericExecutor.h"
#import "PTEffectUtil.h"
#import "PTUtil.h"

@interface PTSegmentationNetwork : NSObject {
    PTEspressoGenericExecutor *_executor;
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLTexture> *_inRGBA;
    id<MTLTexture> *_outSkinMask;
    id<MTLTexture> *_outPersonMask;
    NSString *_inRGBAName;
    PTEffectUtil *_effectUtil;
    PTUtil *_util;
}




-(id)getMTLTextureFromCVPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)inRGBA;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 commandQueue:(id)arg3 effectUtil:(id)arg4 util:(id)arg5 sharedResources:(id)arg6 ;
-(id)outPersonMask;
-(id)outSkinMask;
-(unsigned int)executeNetwork;


@end


#endif