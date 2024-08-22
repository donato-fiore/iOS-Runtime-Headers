// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUCROPNODE_H
#define NUCROPNODE_H



#import "NUTransformNode.h"
#import "NUImageTransformAffine.h"

@interface NUCropNode : NUTransformNode

@property ? cropRect; // ivar: _cropRect
@property (readonly) BOOL resetCleanAperture; // ivar: _resetCleanAperture
@property (retain) NUImageTransformAffine *transform; // ivar: _transform


-(BOOL)canPropagateOriginalAuxiliaryData;
-(BOOL)canPropagateOriginalLivePhotoMetadataTrack;
-(BOOL)scaledCropOrigin:(struct CGPoint *)arg0 error:(*id)arg1 ;
-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateImageGeometry:(*id)arg0 ;
-(id)_evaluateVideoProperties:(*id)arg0 ;
-(id)_transformWithError:(*id)arg0 ;
-(id)debugQuickLookObject;
-(id)initWithRect:(struct ? )arg0 input:(id)arg1 ;
-(id)initWithRect:(struct ? )arg0 input:(id)arg1 resetCleanAperture:(BOOL)arg2 settings:(id)arg3 ;
-(id)initWithSettings:(id)arg0 inputs:(id)arg1 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;
-(struct CGPoint )scaleCropOriginForOriginalVideoSize:(struct CGSize )arg0 originalCleanAperture:(struct CGRect )arg1 renderScale:(CGFloat)arg2 inputExtent:(struct ? )arg3 ;


@end


#endif