// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NURAWIMAGESOURCENODE_H
#define NURAWIMAGESOURCENODE_H

@class NSCache;


#import "NUCGImageSourceNode.h"

@interface NURAWImageSourceNode : NUCGImageSourceNode {
    NSCache *_propertiesByOptionCache;
}




+(id)_firstFilterOfType:(int)arg0 inArray:(id)arg1 ;
+(int)_filterTypeForClassName:(id)arg0 ;
-(BOOL)canPropagateOriginalAuxiliaryData;
-(BOOL)load:(*id)arg0 ;
-(BOOL)shouldGenerateMeteorGainMap;
-(id)_RAWCameraSpaceProperties:(id)arg0 RAWProperties:(id)arg1 ;
-(id)_RAWToneCurveProperties:(id)arg0 ;
-(id)_appendFilter:(id)arg0 filterType:(int)arg1 settings:(id)arg2 source:(id)arg3 ;
-(id)_cachedRawImagePropertiesForOptions:(id)arg0 error:(*id)arg1 ;
-(id)_evaluateImageGeometryWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)_evaluateImageWithSourceOptions:(id)arg0 subsampleFactor:(*NSInteger)arg1 error:(*id)arg2 ;
-(id)_neutralColorArrayForSettings:(id)arg0 ;
-(id)_neutralColorVectorForSettings:(id)arg0 ;
-(id)_rawFiltersWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)_rawMethodVersionForSettings:(id)arg0 error:(*id)arg1 ;
-(id)_sourceOptionsForSettings:(id)arg0 rawMethodVersion:(id)arg1 sushiLevel:(id)arg2 ;
-(id)initWithImageSource:(struct CGImageSource *)arg0 identifier:(id)arg1 ;
-(id)initWithURL:(id)arg0 UTI:(id)arg1 identifier:(id)arg2 ;
-(id)initWithURL:(id)arg0 UTI:(id)arg1 settings:(id)arg2 ;
-(id)preparedNodeWithSourceContainer:(id)arg0 pipelineState:(id)arg1 pipelineSettings:(id)arg2 sourceSettings:(id)arg3 error:(*id)arg4 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;
-(id)sourceOptionsForSettings:(id)arg0 error:(*id)arg1 ;
-(void)_addDefaultFinalizedSourceOptions:(id)arg0 ;
-(void)_processRAWProperties:(id)arg0 ;


@end


#endif