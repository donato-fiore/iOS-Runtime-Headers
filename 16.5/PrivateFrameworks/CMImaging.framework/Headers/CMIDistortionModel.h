// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMIDISTORTIONMODEL_H
#define CMIDISTORTIONMODEL_H


#import <Foundation/Foundation.h>


@interface CMIDistortionModel : NSObject {
    float _inverseScalingLUT;
}


@property (readonly, nonatomic) ? gdcParams; // ivar: _gdcParams


+(int)generateInverseScalingLUT:(*float)arg0 withGDCParams:(struct ? *)arg1 ;
+(int)generateInverseScalingLUT:(*id)arg0 withGDCParams:(struct ? *)arg1 metalCtx:(id)arg2 ;
+(int)getGDCParams:(struct ? *)arg0 cameraInfo:(id)arg1 metadata:(id)arg2 ;
+(struct CGRect )adjustCropRectangle:(struct CGRect )arg0 withGDCParams:(struct ? *)arg1 ;
-(id)initWithGDCParams:(struct ? *)arg0 ;


@end


#endif