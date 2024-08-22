// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAMERACALIBRATIONDATACAPTURECONNECTIONCONFIGURATION_H
#define FIGCAMERACALIBRATIONDATACAPTURECONNECTIONCONFIGURATION_H



#import "FigCaptureConnectionConfiguration.h"

@interface FigCameraCalibrationDataCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

@property (nonatomic) BOOL mirroringEnabled; // ivar: _mirroringEnabled
@property (nonatomic) int orientation; // ivar: _orientation


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)description;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif