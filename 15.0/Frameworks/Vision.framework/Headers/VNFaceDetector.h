// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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


+(BOOL)shouldDumpDebugIntermediates;
+(Class)detectorClassForConfigurationOptions:(id)arg0 error:(*id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
+(void)fullyPopulateConfigurationOptions:(id)arg0 ;
+(void)printDebugInfo:(id)arg0 facesDataRaw:(*void)arg1 faceDetectorBGRAImage:(struct __CVBuffer *)arg2 tempImage:(struct vImage_Buffer )arg3 ;
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg0 ;
-(void)purgeIntermediates;


@end


#endif