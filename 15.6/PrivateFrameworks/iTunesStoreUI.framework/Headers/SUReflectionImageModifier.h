// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUREFLECTIONIMAGEMODIFIER_H
#define SUREFLECTIONIMAGEMODIFIER_H

@class UIGradient;


#import "SUImageModifier.h"

@interface SUReflectionImageModifier : SUImageModifier

@property (retain, nonatomic) UIGradient *gradient; // ivar: _gradient
@property (nonatomic) CGFloat reflectionHeight; // ivar: _reflectionHeight


-(struct CGRect )imageFrameForImage:(id)arg0 currentFrame:(struct CGRect )arg1 finalSize:(struct CGSize )arg2 ;
-(struct CGSize )finalSizeForSize:(struct CGSize )arg0 originalSize:(struct CGSize )arg1 ;
-(void)dealloc;
-(void)drawAfterImageForContext:(struct CGContext *)arg0 imageFrame:(struct CGRect )arg1 finalSize:(struct CGSize )arg2 ;


@end


#endif