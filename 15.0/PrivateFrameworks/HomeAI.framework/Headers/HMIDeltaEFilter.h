// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIDELTAEFILTER_H
#define HMIDELTAEFILTER_H

@class CIFilter, CIImage;



@interface HMIDeltaEFilter : CIFilter

@property (readonly) CIImage *inputImage; // ivar: _inputImage
@property (readonly) CIImage *referenceImage; // ivar: _referenceImage
@property (readonly) CGFloat threshold; // ivar: _threshold


-(id)initWithInputImage:(id)arg0 referenceImage:(id)arg1 threshold:(CGFloat)arg2 ;
-(id)outputImage;


@end


#endif