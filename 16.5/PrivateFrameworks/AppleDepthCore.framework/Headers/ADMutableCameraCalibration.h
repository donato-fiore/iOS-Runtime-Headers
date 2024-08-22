// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADMUTABLECAMERACALIBRATION_H
#define ADMUTABLECAMERACALIBRATION_H

@protocol ADLensDistortionModel;


#import "ADCameraCalibration.h"

@interface ADMutableCameraCalibration : ADCameraCalibration

@property (nonatomic) ? cameraToPlatformTransform;
@property (retain, nonatomic) NSObject<ADLensDistortionModel> *distortionModel;
@property (nonatomic) ? intrinsicMatrix;
@property (nonatomic) float pixelSize;
@property (nonatomic) CGSize referenceDimensions;


+(id)new;
-(BOOL)adjustForImageRotation:(NSInteger)arg0 ;
-(BOOL)scale:(struct CGSize )arg0 ;
-(id)init;
-(void)centerCrop:(struct CGSize )arg0 ;
-(void)crop:(struct CGRect )arg0 ;


@end


#endif