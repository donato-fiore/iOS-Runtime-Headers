// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NURENDERNODE_H
#define NURENDERNODE_H

@class NSMutableDictionary, AVAudioMix, CIImage, AVComposition, AVVideoComposition, NSString, NSDictionary;
@protocol NUImageProperties, NUVideoProperties;

#import <Foundation/Foundation.h>

#import "NUGeometrySpaceMap.h"
#import "NUImageGeometry.h"

@interface NURenderNode : NSObject {
    NSUInteger _hashValue;
}


@property NSInteger _evaluatedForMode; // ivar: __evaluatedForMode
@property (nonatomic) NSInteger cacheHitsCount; // ivar: _cacheHitsCount
@property (getter=isCached) BOOL cached; // ivar: _cached
@property (retain) NSMutableDictionary *cached_auxiliaryImages; // ivar: _cached_auxiliaryImages
@property (retain) NUGeometrySpaceMap *cached_geometrySpaceMap; // ivar: _cached_geometrySpaceMap
@property (retain) NSObject<NUImageProperties> *cached_imageProperties; // ivar: _cached_imageProperties
@property (retain) AVAudioMix *cached_outputAudioMix; // ivar: _cached_outputAudioMix
@property (retain) CIImage *cached_outputImage; // ivar: _cached_outputImage
@property (retain) NUImageGeometry *cached_outputImageGeometry; // ivar: _cached_outputImageGeometry
@property (retain) AVComposition *cached_outputVideo; // ivar: _cached_outputVideo
@property (retain) AVVideoComposition *cached_outputVideoComposition; // ivar: _cached_outputVideoComposition
@property (retain) NSObject<NUVideoProperties> *cached_videoProperties; // ivar: _cached_videoProperties
@property (readonly, nonatomic) NSString *dominantInputKey; // ivar: _dominantInputKey
@property (nonatomic) NSInteger evaluatedForMode;
@property (readonly) NSDictionary *inputs; // ivar: _inputs
@property (readonly, nonatomic) BOOL isCached; // ivar: _isCached
@property (readonly) BOOL isGeometryNode; // ivar: _isGeometryNode
@property (readonly) BOOL isPlaceholderNode;
@property (retain, nonatomic) NSString *nodeCreationJobName; // ivar: _nodeCreationJobName
@property (readonly, nonatomic) CGFloat nodeCreationTime; // ivar: _nodeCreationTime
@property (readonly) NSDictionary *settings; // ivar: _settings
@property (readonly, nonatomic) NSString *spaceMapKey; // ivar: _spaceMapKey
@property (readonly) NSDictionary *xforms; // ivar: _xforms


+(id)nodeFromCache:(id)arg0 ;
+(id)nodeFromCache:(id)arg0 cache:(id)arg1 ;
-(BOOL)canPropagateOriginalAuxiliaryData;
-(BOOL)canPropagateOriginalLivePhotoMetadataTrack;
-(BOOL)hasCyclicalDependencyForInput:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRenderNode:(id)arg0 ;
-(BOOL)isEqualToSettingsAndInputs:(id)arg0 ;
-(BOOL)requiresAudioMix;
-(BOOL)requiresVideoComposition;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(NSUInteger)_hash;
-(NSUInteger)hash;
-(id)_descriptionWithOffset:(NSInteger)arg0 showInputs:(BOOL)arg1 ;
-(id)_dictionaryToSingleLineString:(id)arg0 ;
-(id)_evaluateAudioMix:(*id)arg0 ;
-(id)_evaluateAuxiliaryImageForType:(NSInteger)arg0 error:(*id)arg1 ;
-(id)_evaluateGeometrySpaceMap:(*id)arg0 ;
-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateImageGeometry:(*id)arg0 ;
-(id)_evaluateImageProperties:(*id)arg0 ;
-(id)_evaluateTimedMetadataSampleWithIdentifier:(id)arg0 atTime:(struct ? )arg1 error:(*id)arg2 ;
-(id)_evaluateVideo:(*id)arg0 ;
-(id)_evaluateVideoAttributes:(*id)arg0 ;
-(id)_evaluateVideoComposition:(*id)arg0 ;
-(id)_evaluateVideoProperties:(*id)arg0 ;
-(id)_generateSpaceMapKey;
-(id)debugDescription;
-(id)debugQuickLookObject;
-(id)description;
-(id)descriptionSubClassHook;
-(id)evaluateRenderDependenciesWithRequest:(id)arg0 error:(*id)arg1 ;
-(id)evaluateSettings:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;
-(id)geometryNode;
-(id)imageProperties:(*id)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 inputs:(id)arg1 ;
-(id)inputForKey:(id)arg0 ;
-(id)nodeByReplayingAgainstCache:(id)arg0 error:(*id)arg1 ;
-(id)nodeByReplayingAgainstCache:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;
-(id)originalAuxiliaryImageForType:(NSInteger)arg0 error:(*id)arg1 ;
-(id)outputAudioMix:(*id)arg0 ;
-(id)outputGeometrySpaceMap:(*id)arg0 ;
-(id)outputImage:(*id)arg0 ;
-(id)outputImageGeometry:(*id)arg0 ;
-(id)outputTimedMetadataSampleWithIdentifier:(id)arg0 atTime:(struct ? )arg1 error:(*id)arg2 ;
-(id)outputVideo:(*id)arg0 ;
-(id)outputVideoAttributes:(*id)arg0 ;
-(id)outputVideoComposition:(*id)arg0 ;
-(id)placeholderNodeWithCachedInputs:(id)arg0 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;
-(id)uniqueInputNode;
-(id)videoProperties:(*id)arg0 ;
-(void)_appendInputsWithOffset:(NSInteger)arg0 to:(id)arg1 ;
-(void)nu_updateDigest:(id)arg0 ;
-(void)resetInput:(id)arg0 forKey:(id)arg1 ;


@end


#endif