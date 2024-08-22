// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUVIDEOSOURCENODE_H
#define NUVIDEOSOURCENODE_H

@class NSURL, AVAsset, NSArray, NSDictionary;
@protocol OS_dispatch_queue;


#import "NUSourceNode.h"

@interface NUVideoSourceNode : NUSourceNode {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _loaded;
    NSURL *_URL;
    AVAsset *_asset;
    ? _duration;
    ? _size;
    ? _cleanAperture;
    NSInteger _orientation;
    ? _disparitySize;
    NSArray *_metadata;
    NSDictionary *_colorProperties;
    ? _livePhotoKeyFrameTime;
}


@property (readonly) ? cleanAperture;
@property (readonly) ? duration;
@property (readonly) BOOL isHDR;


-(BOOL)_load:(*id)arg0 ;
-(BOOL)load:(*id)arg0 ;
-(BOOL)requiresAudioMix;
-(BOOL)requiresVideoComposition;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(BOOL)supportsPipelineState:(id)arg0 error:(*id)arg1 ;
-(NSInteger)sourceOrientation;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)_evaluateImageWithSourceOptions:(id)arg0 subsampleFactor:(*NSInteger)arg1 error:(*id)arg2 ;
-(id)_evaluateTimedMetadataSampleWithIdentifier:(id)arg0 atTime:(struct ? )arg1 error:(*id)arg2 ;
-(id)_evaluateVideo:(*id)arg0 ;
-(id)_evaluateVideoAttributes:(*id)arg0 ;
-(id)_evaluateVideoCompositionWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)_evaluateVideoPropertiesWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)_settingsForPipelineState:(id)arg0 ownedFrame:(BOOL)arg1 ;
-(id)asset:(*id)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(id)initWithURL:(id)arg0 identifier:(id)arg1 ;
-(id)preparedNodeWithSourceContainer:(id)arg0 pipelineState:(id)arg1 pipelineSettings:(id)arg2 sourceSettings:(id)arg3 error:(*id)arg4 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;
-(id)sourceOptionsForSettings:(id)arg0 error:(*id)arg1 ;
-(struct ? )pixelSizeWithSourceOptions:(id)arg0 ;


@end


#endif