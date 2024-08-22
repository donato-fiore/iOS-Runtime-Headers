// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNCICONTRASTWITHPIVOTCOLORFILTER_H
#define VNCICONTRASTWITHPIVOTCOLORFILTER_H

@class NSNumber;


#import "VNCIFilter.h"

@interface VNCIContrastWithPivotColorFilter : VNCIFilter

@property (copy, nonatomic) NSNumber *inputContrast; // ivar: _inputContrast
@property (copy, nonatomic) NSNumber *inputPivot; // ivar: _inputPivot


-(id)init;
-(id)initWithInputParameters:(id)arg0 ;
-(id)outputImage;


@end


#endif