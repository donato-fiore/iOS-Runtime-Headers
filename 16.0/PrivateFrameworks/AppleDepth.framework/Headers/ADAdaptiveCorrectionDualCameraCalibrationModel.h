// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADADAPTIVECORRECTIONDUALCAMERACALIBRATIONMODEL_H
#define ADADAPTIVECORRECTIONDUALCAMERACALIBRATIONMODEL_H


#import <Foundation/Foundation.h>


@interface ADAdaptiveCorrectionDualCameraCalibrationModel : NSObject

@property (nonatomic) float focalLengthPixAux; // ivar: _focalLengthPixAux
@property (nonatomic) float focalLengthPixRef; // ivar: _focalLengthPixRef
@property (nonatomic) CGPoint opticalCenterAux; // ivar: _opticalCenterAux
@property (nonatomic) CGPoint opticalCenterRef; // ivar: _opticalCenterRef
@property (nonatomic) ? refToAuxExtrinsic; // ivar: _refToAuxExtrinsic


-(NSInteger)computeStereoRectificationHomographiesMappingRectTeleToTele:(struct ? *)arg0 rectTeleToWide:(struct ? *)arg1 teleToRectTele:(struct ? *)arg2 ;


@end


#endif