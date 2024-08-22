// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIRAWGAMUTMAPPING_H
#define CIRAWGAMUTMAPPING_H

@class NSDictionary;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIRAWGamutMapping : CIFilter {
    CIImage *inputImage;
    NSDictionary *inputRAWDictionary;
}




-(id)outputImage;


@end


#endif