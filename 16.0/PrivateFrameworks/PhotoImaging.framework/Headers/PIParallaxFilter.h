// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPARALLAXFILTER_H
#define PIPARALLAXFILTER_H

@class CIFilter, CIImage, NSDictionary;



@interface PIParallaxFilter : CIFilter

@property (retain, nonatomic) CIImage *inputBackgroundImage; // ivar: _inputBackgroundImage
@property (retain, nonatomic) CIImage *inputForegroundImage; // ivar: _inputForegroundImage
@property (retain, nonatomic) CIImage *inputGuideImage; // ivar: _inputGuideImage
@property (retain, nonatomic) CIImage *inputMatteImage; // ivar: _inputMatteImage
@property (copy, nonatomic) NSDictionary *localLightData; // ivar: _localLightData
@property (readonly, nonatomic) CIImage *outputBackgroundImage;
@property (readonly, nonatomic) CIImage *outputForegroundImage;
@property (readonly, nonatomic) CIImage *outputMatteImage;
@property (nonatomic) CGFloat renderScale; // ivar: _renderScale
@property (nonatomic) CGRect visibleFrame; // ivar: _visibleFrame


-(id)outputImage;


@end


#endif