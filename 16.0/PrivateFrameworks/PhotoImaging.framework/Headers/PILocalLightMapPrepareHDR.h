// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PILOCALLIGHTMAPPREPAREHDR_H
#define PILOCALLIGHTMAPPREPAREHDR_H

@class CIFilter, NSData, NSNumber, CIImage;



@interface PILocalLightMapPrepareHDR : CIFilter {
    NSData *inputLightMap;
    NSNumber *inputLightMapWidth;
    NSNumber *inputLightMapHeight;
    CIImage *inputGuideImage;
}




+(id)customAttributes;
-(id)outputImage;


@end


#endif