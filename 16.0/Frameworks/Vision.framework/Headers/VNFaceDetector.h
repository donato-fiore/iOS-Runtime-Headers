// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNFACEDETECTOR_H
#define VNFACEDETECTOR_H

@class NSString;
@protocol VNDetectorKeyProviding;


#import "VNDetector.h"

@interface VNFaceDetector : VNDetector <VNDetectorKeyProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)calculateTilesForRegionOfInterest:(struct CGRect )arg0 imageWidth:(NSUInteger)arg1 imageHeight:(NSUInteger)arg2 tileSizeInPixels:(NSUInteger)arg3 overlapFraction:(float)arg4 aspectRatioThreshold:(float)arg5 columns:(*NSUInteger)arg6 rows:(*NSUInteger)arg7 tiles:(*void)arg8 error:(*id)arg9 ;
+(BOOL)shouldDumpDebugIntermediates;
+(Class)detectorClassForConfigurationOptions:(id)arg0 error:(*id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
+(void)fullyPopulateConfigurationOptions:(id)arg0 ;
+(void)printDebugInfo:(id)arg0 facesDataRaw:(*void)arg1 faceDetectorBGRAImage:(struct __CVBuffer *)arg2 tempImage:(struct vImage_Buffer )arg3 ;
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg0 ;
-(id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg0 options:(id)arg1 regionOfInterest:(struct CGRect )arg2 warningRecorder:(id)arg3 error:(*id)arg4 progressHandler:(id)arg5 ;
-(void)purgeIntermediates;


@end


#endif