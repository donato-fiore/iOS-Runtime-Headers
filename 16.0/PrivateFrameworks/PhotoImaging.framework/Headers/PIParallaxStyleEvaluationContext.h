// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPARALLAXSTYLEEVALUATIONCONTEXT_H
#define PIPARALLAXSTYLEEVALUATIONCONTEXT_H

@class CIImage, NSDictionary;

#import <Foundation/Foundation.h>


@interface PIParallaxStyleEvaluationContext : NSObject

@property (retain, nonatomic) CIImage *backgroundImage; // ivar: _backgroundImage
@property (retain, nonatomic) CIImage *guideImage; // ivar: _guideImage
@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage
@property (readonly, nonatomic) CIImage *lightMapImage;
@property (copy, nonatomic) NSDictionary *localLightData; // ivar: _localLightData
@property (retain, nonatomic) CIImage *matteImage; // ivar: _matteImage
@property (retain, nonatomic) CIImage *outputImage; // ivar: _outputImage
@property (copy, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (nonatomic) CGFloat renderScale; // ivar: _renderScale
@property (nonatomic) CGRect visibleRect; // ivar: _visibleRect


-(id)debugDescription;


@end


#endif