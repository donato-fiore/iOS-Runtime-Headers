// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPORTRAITVIDEODEBUGDETECTIONSRENDERNODE_H
#define PIPORTRAITVIDEODEBUGDETECTIONSRENDERNODE_H

@class NURenderNode, PTCinematographyScript, NSCache;



@interface PIPortraitVideoDebugDetectionsRenderNode : NURenderNode

@property (retain, nonatomic) PTCinematographyScript *cinematographyScript; // ivar: _cinematographyScript
@property (retain, nonatomic) NSCache *labelImageCache; // ivar: _labelImageCache
@property (nonatomic) ? renderTime; // ivar: _renderTime


-(BOOL)requiresVideoComposition;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(id)_evaluateImage:(*id)arg0 ;
-(id)_imageByAddingDetection:(id)arg0 toImage:(id)arg1 isPrimary:(BOOL)arg2 canvasSize:(struct CGSize )arg3 inverseOrientation:(NSInteger)arg4 ;
-(id)initWithInput:(id)arg0 assetURL:(id)arg1 cinematographyState:(id)arg2 monochrome:(BOOL)arg3 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;


@end


#endif