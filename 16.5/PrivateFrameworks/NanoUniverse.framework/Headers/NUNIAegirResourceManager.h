// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUNIAEGIRRESOURCEMANAGER_H
#define NUNIAEGIRRESOURCEMANAGER_H

@class CLKUIResourceProviderKey, MTLFunctionConstantValues, NSMapTable, NSString;
@protocol CLKUIResourceProviderDelegate, MTLDevice, MTLLibrary, MTLRenderPipelineState, MTLBuffer;

#import <Foundation/Foundation.h>

#import "_TtC12NanoUniverse22AegirCloudCoverService.h"

@interface NUNIAegirResourceManager : NSObject <CLKUIResourceProviderDelegate>

 {
    id<MTLDevice> *_device;
    CLKUIResourceProviderKey *_resourceProviderKey;
    NSUInteger _clients;
    NSUInteger _displayPixelFormat;
    id<MTLLibrary> *_library;
    id<MTLRenderPipelineState> *_pipelineStateLocationDot;
    id<MTLRenderPipelineState> *_pipelineStateThreshold;
    id<MTLRenderPipelineState> *_pipelineStatePost;
    id<MTLRenderPipelineState> *_pipelineStateDisplay;
    id<MTLRenderPipelineState> *_pipelineStateStarfield;
    id<MTLRenderPipelineState> *_pipelineStateStar;
    id<MTLRenderPipelineState>"] _pipelineStateSpheroids;
    id<MTLBuffer> *_rectVerticesBuffer;
    id<MTLBuffer> *_starVerticesBuffer;
    MTLFunctionConstantValues *_pipelineConstants;
    NSMapTable *_textureGroupHashTable;
}


@property (readonly, nonatomic) _TtC12NanoUniverse22AegirCloudCoverService *cloudsService; // ivar: _cloudsService
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstanceWithDisplayPixelFormat:(NSUInteger)arg0 ;
+(void)_deallocInstance:(id)arg0 ;
-(id)_generatePipelineVshName:(id)arg0 fshName:(id)arg1 config:(NSUInteger)arg2 blend0:(NSUInteger)arg3 blend1:(NSUInteger)arg4 pixelFormat0:(NSUInteger)arg5 pixelFormat1:(NSUInteger)arg6 ;
-(id)_provideEarthCloudsAtlasBacking:(id)arg0 ;
-(id)initWithDisplayPixelFormat:(NSUInteger)arg0 ;
-(id)provideAtlasBacking:(id)arg0 ;
-(id)rectVerticesBuffer;
-(id)renderDisplayPipeline;
-(id)renderOffscreenPipelineForLocationDot;
-(id)renderOffscreenPipelineForPost;
-(id)renderOffscreenPipelineForSpheroid:(NSUInteger)arg0 config:(NSUInteger)arg1 ;
-(id)renderOffscreenPipelineForStar;
-(id)renderOffscreenPipelineForStarfield;
-(id)renderOffscreenPipelineForThreshold;
-(id)resourceProviderKey;
-(id)starVerticesBuffer;
-(id)textureGroupWithSuffix:(id)arg0 ;
-(void)_asyncDeallocInstance;
-(void)_deferredCloudDataFetchIfNeeded;
-(void)_handleCloudCoverTextureExpired;
-(void)_loadGeometry;
-(void)addClient;
-(void)dealloc;
-(void)purgeAllCloudCoverTextures;
-(void)removeClient;
-(void)setPipelineConstants:(struct NUNIAegirPipelineConstants )arg0 ;


@end


#endif