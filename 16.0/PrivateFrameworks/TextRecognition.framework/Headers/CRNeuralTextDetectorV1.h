// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRNEURALTEXTDETECTORV1_H
#define CRNEURALTEXTDETECTORV1_H



#import "CRNeuralTextDetector.h"
#import "CRTextDetectorModel.h"

@interface CRNeuralTextDetectorV1 : CRNeuralTextDetector

@property (retain) CRTextDetectorModel *model; // ivar: _model


+(?)aggregateScoreAndGeoMap:(?)arg0 inputGeo:(?)arg1 targetSize:(?)arg2 outputScoreMap:(?)arg3 outputGeoMapoutputOrigin;
+(?)allocGeometricMaps;
+(?)deallocGeometricMaps;
+(?)genPolyResults:(?)arg0 geoMap:(?)arg1 scalemergingType;
+(?)scaleBufferNearestNeighbor:(?)arg0 geoMap:(?)arg1 dest:(?)arg2 destGeomapbinaryMask;
+(struct vImage_Buffer )extractImageMap:(id)arg0 targetSize:(struct CGSize )arg1 ;
+(void)calculateTargetOutputSize:(struct CGSize *)arg0 adjustedInputScale:(*CGFloat)arg1 paddedSize:(struct CGSize *)arg2 imageSize:(struct CGSize )arg3 maximumSize:(struct CGSize )arg4 ;
+(void)getMasksForScoreMap:(struct vImage_Buffer *)arg0 imageMask:(struct vImage_Buffer *)arg1 binaryMask:(struct vImage_Buffer *)arg2 ;
-(?)processScoreMap:(?)arg0 geoMap:(?)arg1 targetSizescale;
-(id)detectInImage:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(struct CGSize )smallestImageSizeForTextWithRelativeHeight:(CGFloat)arg0 originalImageSize:(struct CGSize )arg1 ;


@end


#endif