// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIPHOTOEFFECT_H
#define CIPHOTOEFFECT_H



#import "CIFilter.h"
#import "CIImage.h"

@interface CIPhotoEffect : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)cubeColorSpaceName;
-(id)cubeName;
-(id)cubePath;
-(id)init;
-(id)outputImage;
-(int)_defaultVersion;
-(int)_maxVersion;
-(void)setDefaults;


@end


#endif