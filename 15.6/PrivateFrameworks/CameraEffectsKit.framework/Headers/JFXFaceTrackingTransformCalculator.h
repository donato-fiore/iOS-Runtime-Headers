// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXFACETRACKINGTRANSFORMCALCULATOR_H
#define JFXFACETRACKINGTRANSFORMCALCULATOR_H


#import <Foundation/Foundation.h>

#import "JFXARMetadata.h"

@interface JFXFaceTrackingTransformCalculator : NSObject

@property (retain, nonatomic) JFXARMetadata *arMetadata; // ivar: _arMetadata
@property (readonly, nonatomic) ? billboardTransform;
@property (readonly, nonatomic) ? cameraProjection;
@property (readonly, nonatomic) ? cameraTransform;
@property (readonly, nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (readonly, nonatomic) ? onFaceTransform;
@property (readonly, nonatomic) CGSize outputSize; // ivar: _outputSize
@property (nonatomic) float pixelsPerUnit; // ivar: _pixelsPerUnit


+(struct ? )interpolateFrom:(struct ? )arg0 to:(struct ? )arg1 fraction:(float)arg2 ;
-(id)calculateFaceTrackingTransform;
-(id)initWithARMetaData:(id)arg0 outputSize:(struct CGSize )arg1 playableInterfaceOrientation:(NSInteger)arg2 ;
-(struct ? )nonScaledOrientedCameraTransform;


@end


#endif