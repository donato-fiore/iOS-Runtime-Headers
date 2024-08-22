// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRNEURALTEXTDETECTORV2_H
#define CRNEURALTEXTDETECTORV2_H



#import "CRNeuralTextDetector.h"
#import "CRTextDetectorModel.h"

@interface CRNeuralTextDetectorV2 : CRNeuralTextDetector

@property (retain) CRTextDetectorModel *model; // ivar: _model


+(struct unique_ptr<CRImageBuffer, std::default_delete<CRImageBuffer>> )createImageMap:(id)arg0 targetSize:(struct CGSize )arg1 ;
+(struct vector<std::unique_ptr<CRImageBuffer>, std::allocator<std::unique_ptr<CRImageBuffer>>> )createGeometricMaps:(struct CGSize )arg0 ;
+(void)aggregateScoreAndGeoMap:(id)arg0 inputGeo:(id)arg1 targetSize:(struct CGSize )arg2 outputScoreMap:(struct vImage_Buffer *)arg3 outputGeoMap:(*void)arg4 outputOrigin:(struct CGPoint )arg5 ;
+(void)calculateTargetOutputSize:(struct CGSize *)arg0 adjustedInputScale:(*CGFloat)arg1 paddedSize:(struct CGSize *)arg2 imageSize:(struct CGSize )arg3 maximumSize:(struct CGSize )arg4 ;
+(void)genPolyResultsForMIVSNMS:(struct vImage_Buffer *)arg0 geoMap:(*void)arg1 output:(*void)arg2 mergingType:(int)arg3 ;
+(void)getMasksForScoreMap:(struct vImage_Buffer *)arg0 imageMask:(struct vImage_Buffer *)arg1 binaryMask:(struct vImage_Buffer *)arg2 ;
+(void)scaleBufferNearestNeighbor:(struct vImage_Buffer *)arg0 geoMap:(*void)arg1 dest:(struct vImage_Buffer *)arg2 destGeomap:(*void)arg3 binaryMask:(struct vImage_Buffer *)arg4 ;
-(id)detectInImage:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)processScoreMap:(struct vImage_Buffer *)arg0 geoMap:(*void)arg1 adjustedSize:(struct CGSize )arg2 scoreMapFullTile:(struct vImage_Buffer *)arg3 geoMapFullTile:(*void)arg4 adjustedFullTileSize:(struct CGSize )arg5 targetSize:(struct CGSize )arg6 targetSizeFullTile:(struct CGSize )arg7 intermediateResults:(*id)arg8 tileRects:(id)arg9 ;
-(struct CGSize )smallestImageSizeForTextWithRelativeHeight:(CGFloat)arg0 originalImageSize:(struct CGSize )arg1 ;


@end


#endif