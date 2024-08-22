// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARSPATIALMAPPINGRESULTDATA_H
#define ARSPATIALMAPPINGRESULTDATA_H

@class NSString, NSArray;
@protocol ARResultData, MTLDevice;

#import <Foundation/Foundation.h>


@interface ARSpatialMappingResultData : NSObject <ARResultData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEmpty) BOOL empty; // ivar: _empty
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *meshChunks; // ivar: _meshChunks
@property (nonatomic) *CV3DReconMeshList meshList; // ivar: _meshList
@property (retain, nonatomic) NSObject<MTLDevice> *mtlDevice; // ivar: _mtlDevice
@property (nonatomic) NSUInteger sceneReconstruction; // ivar: _sceneReconstruction
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


+(id)emptyResultData;
-(id)anchorsForCameraWithTransform:(struct ? )arg0 referenceOriginTransform:(struct ? )arg1 existingAnchors:(id)arg2 anchorsToRemove:(id)arg3 ;
-(id)anchorsFromMeshChunksForCameraWithTransform:(struct ? )arg0 referenceOriginTransform:(struct ? )arg1 existingAnchors:(id)arg2 anchorsToRemove:(id)arg3 ;
-(id)anchorsFromMeshListForCameraWithTransform:(struct ? )arg0 referenceOriginTransform:(struct ? )arg1 existingAnchors:(id)arg2 anchorsToRemove:(id)arg3 ;
-(id)initWithMeshChunks:(id)arg0 ;
-(id)initWithMeshList:(struct CV3DReconMeshList *)arg0 sceneReconstruction:(NSUInteger)arg1 timestamp:(CGFloat)arg2 ;
-(void)dealloc;
-(void)updateSemanticsFromSamplingData:(struct __CFData *)arg0 ;


@end


#endif