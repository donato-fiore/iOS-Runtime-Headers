// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIPHOTOEFFECT3D_H
#define CIPHOTOEFFECT3D_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIPhotoEffect3D : CIFilter

@property (retain, nonatomic) CIImage *inputDepthMap; // ivar: inputDepthMap
@property (retain, nonatomic) NSNumber *inputGrainAmount; // ivar: inputGrainAmount
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputScale; // ivar: inputScale
@property (retain, nonatomic) NSNumber *inputThreshold; // ivar: inputThreshold


+(id)customAttributes;
-(id)_CIPhotoEffectDepthBlend;
-(id)applyCubeWithName:(id)arg0 toImage:(id)arg1 ;
-(id)backgroundCubeName;
-(id)backgroundCubePath;
-(id)cubeColorSpaceName;
-(id)cubeName;
-(id)cubePath;
-(id)init;
-(id)outputImage;
-(int)_defaultVersion;
-(int)_maxVersion;
-(int)_maxVersionBG;
-(void)setDefaults;


@end


#endif