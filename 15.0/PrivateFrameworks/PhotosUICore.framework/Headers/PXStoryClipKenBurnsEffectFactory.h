// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYCLIPKENBURNSEFFECTFACTORY_H
#define PXSTORYCLIPKENBURNSEFFECTFACTORY_H

@protocol PXStoryClipComposition, PXStoryDisplayAssetCroppingContext, PXDisplayAssetFetchResult, PXStoryTimelineSpec;

#import <Foundation/Foundation.h>


@interface PXStoryClipKenBurnsEffectFactory : NSObject {
    CGRect _bounds;
    NSInteger _clipCount;
    NSInteger _clipCapacity;
    *CGRect _clipFrames;
    *UIEdgeInsets _clipSafeAreaInsets;
    *CGSize _clipAssetSizes;
    *CGRect _clipSuggestedCrops;
    *CGAffineTransform _clipSourceTransforms;
    *CGAffineTransform _clipTargetTransforms;
    BOOL _shouldFitSourceAndTargetIndependently;
    NSInteger _assetCapacity;
    *? _assetContentInfos;
    *NSInteger _assetPlaybackStyles;
}


@property (readonly, nonatomic) NSObject<PXStoryClipComposition> *clipComposition; // ivar: _clipComposition
@property (readonly, nonatomic) NSObject<PXStoryDisplayAssetCroppingContext> *croppingContext; // ivar: _croppingContext
@property (readonly, nonatomic) NSUInteger croppingOptions; // ivar: _croppingOptions
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *displayAssets; // ivar: _displayAssets
@property (readonly, nonatomic) NSInteger numberOfParameters; // ivar: _numberOfParameters
@property (readonly, nonatomic) NSObject<PXStoryTimelineSpec> *spec; // ivar: _spec


+(void)factoryForSpec:(id)arg0 clipComposition:(id)arg1 displayAssets:(id)arg2 croppingContext:(id)arg3 croppingOptions:(NSUInteger)arg4 assetContentInfos:(struct ? *)arg5 playbackStyles:(*NSInteger)arg6 separatorEffectParameters:(struct ? *)arg7 handler:(id)arg8 ;
-(id)_init;
-(id)init;
-(void)_configureClipAtIndex:(NSInteger)arg0 forPanWithCameraMovingTowardsEdge:(unsigned int)arg1 distance:(CGFloat)arg2 ;
-(void)_configureWithSpec:(id)arg0 clipComposition:(id)arg1 displayAssets:(id)arg2 croppingContext:(id)arg3 croppingOptions:(NSUInteger)arg4 assetContentInfos:(struct ? *)arg5 playbackStyles:(*NSInteger)arg6 separatorEffectParameters:(struct ? *)arg7 ;
-(void)_getParameters:(struct ? *)arg0 forConfiguration:(id)arg1 ;
-(void)dealloc;
-(void)getParameters:(struct ? *)arg0 forOppositePansWithDistance:(CGFloat)arg1 ;
-(void)getParameters:(struct ? *)arg0 forPanWithCameraMovingTowardsEdge:(unsigned int)arg1 distance:(CGFloat)arg2 ;
-(void)getParameters:(struct ? *)arg0 forParallelPansWithDistance:(CGFloat)arg1 ;
-(void)getParameters:(struct ? *)arg0 forRotationWithAngle:(CGFloat)arg1 scale:(CGFloat)arg2 ;
-(void)getParameters:(struct ? *)arg0 forRotationWithAngle:(CGFloat)arg1 scale:(CGFloat)arg2 relativeTransformOrigin:(struct CGPoint )arg3 ;
-(void)getParameters:(struct ? *)arg0 forSplitAssetOppositePansWithDistance:(CGFloat)arg1 ;
-(void)getParameters:(struct ? *)arg0 forZoomWithScale:(CGFloat)arg1 ;
-(void)getParameters:(struct ? *)arg0 forZoomWithScale:(CGFloat)arg1 relativeTransformOrigin:(struct CGPoint )arg2 ;
-(void)getParametersForNoEffect:(struct ? *)arg0 ;


@end


#endif