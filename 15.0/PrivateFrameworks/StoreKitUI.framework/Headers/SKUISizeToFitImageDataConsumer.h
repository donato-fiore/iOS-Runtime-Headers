// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISIZETOFITIMAGEDATACONSUMER_H
#define SKUISIZETOFITIMAGEDATACONSUMER_H

@class UIColor;


#import "SKUIImageDataConsumer.h"

@interface SKUISizeToFitImageDataConsumer : SKUIImageDataConsumer {
    BOOL _custom;
}


@property (nonatomic) CGSize constraintSize; // ivar: _constraintSize
@property (retain, nonatomic) UIColor *gradientEndColor; // ivar: _gradientEndColor
@property (nonatomic) CGFloat gradientHeight; // ivar: _gradientHeight


+(id)consumerWithConstraintSize2:(struct CGSize )arg0 ;
+(id)consumerWithConstraintSize:(struct CGSize )arg0 ;
-(id)imageForImage:(id)arg0 ;
-(void)_drawGradientWithContext:(struct CGContext *)arg0 imageRect:(struct CGRect )arg1 ;


@end


#endif