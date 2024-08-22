// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CISPARSERENDERERPREFILTERING_H
#define CISPARSERENDERERPREFILTERING_H

@class NSNumber, NSDictionary;


#import "CIFilter.h"
#import "CIImage.h"

@interface CISparseRendererPreFiltering : CIFilter

@property (copy) NSNumber *inputApertureScaling; // ivar: inputApertureScaling
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (retain) NSNumber *inputScale; // ivar: inputScale
@property (retain) NSDictionary *inputTuningParameters; // ivar: inputTuningParameters


-(id)_kernel:(BOOL)arg0 ;
-(id)outputImage;
-(id)outputImage:(id)arg0 horizontal:(BOOL)arg1 width:(CGFloat)arg2 ;
-(void)dumpImage:(id)arg0 extent:(struct CGRect )arg1 prefixFilename:(id)arg2 ;


@end


#endif