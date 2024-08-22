// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUCGIMAGESOURCENODE_H
#define NUCGIMAGESOURCENODE_H

@class NSURL, NSString, NSDictionary;
@protocol OS_dispatch_queue;


#import "NUSourceNode.h"

@interface NUCGImageSourceNode : NUSourceNode {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly) NSURL *URL; // ivar: _URL
@property (readonly) NSString *UTI; // ivar: _UTI
@property NSInteger alphaInfo; // ivar: _alphaInfo
@property (retain) NSDictionary *auxiliaryImagesProperties; // ivar: _auxiliaryImagesProperties
@property (retain, nonatomic) NSDictionary *cgImageProperties; // ivar: _cgImageProperties
@property (retain, nonatomic) *CGImageSource cgImageSource; // ivar: _cgImageSource
@property (retain, nonatomic) *CGColorSpace colorSpace; // ivar: _colorSpace
@property NSInteger componentInfo; // ivar: _componentInfo
@property BOOL loaded; // ivar: _loaded
@property NSInteger orientation; // ivar: _orientation
@property ? size; // ivar: _size


+(BOOL)isFusedOvercaptureFromCGImageProperties:(id)arg0 ;
-(BOOL)_load:(*id)arg0 ;
-(BOOL)_setAuxiliaryImagePropertiesFromCGProperties:(id)arg0 error:(*id)arg1 ;
-(BOOL)_setGeometryFromProperties:(id)arg0 error:(*id)arg1 ;
-(BOOL)canPropagateOriginalAuxiliaryData;
-(BOOL)load:(*id)arg0 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(BOOL)supportsPipelineState:(id)arg0 error:(*id)arg1 ;
-(NSInteger)normalizeSubsampleFactor:(NSInteger)arg0 ;
-(NSInteger)sourceOrientation;
-(id)_evaluateAuxiliaryImageForType:(NSInteger)arg0 error:(*id)arg1 ;
-(id)_evaluateImageGeometryWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)_evaluateImageWithSourceOptions:(id)arg0 subsampleFactor:(*NSInteger)arg1 error:(*id)arg2 ;
-(id)_evaluateRawImagePropertiesWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)_finalizeSourceOptions:(id)arg0 subsampleFactor:(NSInteger)arg1 ;
-(id)auxiliaryImagePropertiesForAuxImageType:(NSInteger)arg0 ;
-(id)debugQuickLookObject;
-(id)initWithImageSource:(struct CGImageSource *)arg0 identifier:(id)arg1 ;
-(id)initWithSettings:(id)arg0 ;
-(id)initWithURL:(id)arg0 UTI:(id)arg1 identifier:(id)arg2 ;
-(id)initWithURL:(id)arg0 UTI:(id)arg1 settings:(id)arg2 ;
-(id)preparedNodeWithSourceContainer:(id)arg0 pipelineState:(id)arg1 pipelineSettings:(id)arg2 sourceSettings:(id)arg3 error:(*id)arg4 ;
-(id)resolvedAuxiliaryImageNodeForPipelineState:(id)arg0 error:(*id)arg1 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;
-(struct ? )pixelSizeWithSourceOptions:(id)arg0 ;
-(void)_addDefaultFinalizedSourceOptions:(id)arg0 ;
-(void)_init;
-(void)dealloc;


@end


#endif