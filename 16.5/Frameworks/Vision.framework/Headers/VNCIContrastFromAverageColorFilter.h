// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNCICONTRASTFROMAVERAGECOLORFILTER_H
#define VNCICONTRASTFROMAVERAGECOLORFILTER_H

@class NSNumber;


#import "VNCIFilter.h"

@interface VNCIContrastFromAverageColorFilter : VNCIFilter

@property (copy, nonatomic) NSNumber *inputContrast; // ivar: _inputContrast


-(id)init;
-(id)initWithInputParameters:(id)arg0 ;
-(id)outputImage;


@end


#endif