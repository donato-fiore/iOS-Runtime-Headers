// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIAPERTUREREDEYEFILTER_H
#define PIAPERTUREREDEYEFILTER_H

@class CIFilter, CIImage, NSArray;



@interface PIApertureRedEyeFilter : CIFilter {
    CIImage *inputImage;
    NSArray *inputSpots;
}




-(id)outputImage;


@end


#endif