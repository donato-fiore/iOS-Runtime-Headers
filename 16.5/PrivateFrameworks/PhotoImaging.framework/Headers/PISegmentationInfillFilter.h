// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PISEGMENTATIONINFILLFILTER_H
#define PISEGMENTATIONINFILLFILTER_H

@class CIFilter, CIImage;



@interface PISegmentationInfillFilter : CIFilter

@property (nonatomic) NSInteger infillAlgorithm; // ivar: _infillAlgorithm
@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage
@property (retain, nonatomic) CIImage *inputMatteImage; // ivar: _inputMatteImage


+(BOOL)isMLInpaintingAvailable;
+(id)blackInfillImage:(id)arg0 matte:(id)arg1 ;
+(id)fastInfillImage:(id)arg0 matte:(id)arg1 ;
+(id)inpaintingInfillImage:(id)arg0 matte:(id)arg1 ;
+(id)watchInfillImage:(id)arg0 matte:(id)arg1 ;
-(id)outputImage;


@end


#endif