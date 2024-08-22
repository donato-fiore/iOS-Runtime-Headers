// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PITEMPTINTFILTER_H
#define PITEMPTINTFILTER_H

@class CIFilter, CIImage;



@interface PITempTintFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage
@property (nonatomic) CGFloat temperature; // ivar: _temperature
@property (nonatomic) CGFloat tint; // ivar: _tint


-(id)outputImage;
-(void)setInputVectorsForFilter:(id)arg0 ;


@end


#endif