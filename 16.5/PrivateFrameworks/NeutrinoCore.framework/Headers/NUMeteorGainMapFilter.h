// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUMETEORGAINMAPFILTER_H
#define NUMETEORGAINMAPFILTER_H

@class CIFilter, NSNumber, CIImage;



@interface NUMeteorGainMapFilter : CIFilter

@property (retain) NSNumber *inputGain; // ivar: _inputGain
@property (retain) CIImage *inputImage; // ivar: _inputImage


+(id)gainMapKernel;
-(id)outputImage;


@end


#endif