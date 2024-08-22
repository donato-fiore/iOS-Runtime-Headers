// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAMERACALIBRATIONDATA_H
#define AVCAMERACALIBRATIONDATA_H

@class NSData;

#import <Foundation/Foundation.h>

#import "AVCameraCalibrationDataInternal.h"

@interface AVCameraCalibrationData : NSObject {
    AVCameraCalibrationDataInternal *_internal;
}


@property (readonly, nonatomic) ? extrinsicMatrix;
@property (readonly, nonatomic) ? intrinsicMatrix;
@property (readonly, nonatomic) CGSize intrinsicMatrixReferenceDimensions;
@property (readonly, nonatomic) NSData *inverseLensDistortionLookupTable;
@property (readonly, nonatomic) CGPoint lensDistortionCenter;
@property (readonly, nonatomic) NSData *lensDistortionLookupTable;
@property (readonly, nonatomic) float pixelSize;


-(id)_distortionLookupTableFromCoefficients:(id)arg0 distortionCenter:(struct CGPoint )arg1 pixelSize:(float)arg2 referenceDimensions:(struct CGSize )arg3 lookupTableLength:(int)arg4 ;
-(id)_initEmpty;
-(id)cameraCalibrationDataDictionary;
-(id)cameraCalibrationDataWithExifOrientation:(unsigned int)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithAuxiliaryMetadata:(struct CGImageMetadata *)arg0 ;
-(id)initWithCameraCalibrationDataDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithDepthMetadataDictionary:(id)arg0 ;
-(struct CGImageMetadata *)copyAuxiliaryMetadata;
-(void)dealloc;


@end


#endif