// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PIINVERSEFAKEBOOST_H
#define PIINVERSEFAKEBOOST_H

@class CIFilter, CIImage;



@interface PIInverseFakeBoost : CIFilter

@property CGFloat inputBoost; // ivar: _inputBoost
@property (retain) CIImage *inputImage; // ivar: _inputImage


+(id)kernel;
-(id)outputImage;


@end


#endif