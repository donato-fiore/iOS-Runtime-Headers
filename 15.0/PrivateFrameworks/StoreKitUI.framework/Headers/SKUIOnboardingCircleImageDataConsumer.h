// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIONBOARDINGCIRCLEIMAGEDATACONSUMER_H
#define SKUIONBOARDINGCIRCLEIMAGEDATACONSUMER_H

@class UIColor;


#import "SKUIImageDataConsumer.h"

@interface SKUIOnboardingCircleImageDataConsumer : SKUIImageDataConsumer

@property (nonatomic) CGSize outputSize; // ivar: _outputSize
@property (copy, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (nonatomic) BOOL usesSaturationFilter; // ivar: _usesSaturationFilter


-(id)_saturationBackgroundImageWithSize:(struct CGSize )arg0 ;
-(id)imageForImage:(id)arg0 ;


@end


#endif