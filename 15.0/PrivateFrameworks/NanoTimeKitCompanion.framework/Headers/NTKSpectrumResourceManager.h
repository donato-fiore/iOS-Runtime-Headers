// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKSPECTRUMRESOURCEMANAGER_H
#define NTKSPECTRUMRESOURCEMANAGER_H

@protocol MTLDevice, MTLBuffer, MTLTexture, MTLLibrary;

#import <Foundation/Foundation.h>


@interface NTKSpectrumResourceManager : NSObject {
    id<MTLDevice> *_device;
    NSUInteger _clients;
    NSUInteger _pixelFormat;
    id<MTLBuffer> *_verticesBuffer;
    id<MTLRenderPipelineState>" _pipelineStates;
    id<MTLTexture> *_vignetteTexture;
    id<MTLTexture> *_overlayTexture;
    id<MTLLibrary> *_library;
}




+(id)sharedInstanceWithPixelFormat:(NSUInteger)arg0 ;
+(void)_deallocInstance:(id)arg0 ;
-(id)_generatePipeline:(NSUInteger)arg0 ;
-(id)initWithPixelFormat:(NSUInteger)arg0 ;
-(id)overlayTexture;
-(id)renderPipelineForConfig:(NSUInteger)arg0 ;
-(id)verticesBuffer;
-(id)vignetteTexture;
-(void)_asyncDeallocInstance;
-(void)_loadGeometry;
-(void)addClient;
-(void)dealloc;
-(void)removeClient;


@end


#endif