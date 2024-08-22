// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PIDYNAMICLOCALLIGHTMAPPREPARE_H
#define _PIDYNAMICLOCALLIGHTMAPPREPARE_H

@class CIFilter, NSData, NSNumber, CIImage;



@interface _PIDynamicLocalLightMapPrepare : CIFilter {
    NSData *inputLightMap;
    NSNumber *inputLightMapWidth;
    NSNumber *inputLightMapHeight;
    CIImage *inputGuideImage;
    NSNumber *inputGuidedFilterEpsilon;
}




+(id)customAttributes;
-(id)outputImage;


@end


#endif