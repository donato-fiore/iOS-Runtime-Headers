// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUIMAGERENDERJOB_H
#define NUIMAGERENDERJOB_H

@class CIRenderTask;
@protocol NUPurgeableStorage, NUPurgeableImage, NUMutablePurgeableImage;


#import "NURenderJob.h"
#import "NUPurgeableImageAccessGuard.h"
#import "NUPurgeableStoragePool.h"
#import "NUImageAccumulationNode.h"
#import "NURegion.h"

@interface NUImageRenderJob : NURenderJob {
    NUPurgeableImageAccessGuard *_accessRegionGuard;
    NUPurgeableStoragePool *_storagePool;
    id<NUPurgeableStorage> *_renderDestination;
}


@property (readonly, nonatomic) NUImageAccumulationNode *imageAccumulationNode;
@property (readonly, nonatomic) NURegion *regionToRender; // ivar: _regionToRender
@property (retain, nonatomic) CIRenderTask *renderTask; // ivar: _renderTask
@property (readonly, nonatomic) NSObject<NUPurgeableImage> *renderedImage; // ivar: _renderedImage
@property (readonly, nonatomic) NURegion *renderedRegion; // ivar: _renderedRegion
@property (readonly, nonatomic) NSObject<NUMutablePurgeableImage> *targetImage; // ivar: _targetImage


-(BOOL)complete:(*id)arg0 ;
-(BOOL)copyStorage:(id)arg0 fromRect:(struct ? )arg1 toImage:(id)arg2 atPoint:(struct ? )arg3 ;
-(BOOL)prepare:(*id)arg0 ;
-(BOOL)render:(*id)arg0 ;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)extentPolicy;
-(id)imageAccumulationNodeWithImageSize:(struct ? )arg0 tileSize:(struct ? )arg1 borderSize:(struct ? )arg2 format:(id)arg3 colorSpace:(id)arg4 ;
-(id)imageRequest;
-(id)initWithImageRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)newRenderPipelineStateForEvaluationMode:(NSInteger)arg0 ;
-(id)scalePolicy;
-(void)cleanUp;


@end


#endif