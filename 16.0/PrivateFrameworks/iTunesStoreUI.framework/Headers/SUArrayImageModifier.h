// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUARRAYIMAGEMODIFIER_H
#define SUARRAYIMAGEMODIFIER_H

@class NSArray;


#import "SUImageModifier.h"

@interface SUArrayImageModifier : SUImageModifier

@property (retain, nonatomic) NSArray *modifiers; // ivar: _modifiers


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)scalesImage;
-(struct CGRect )imageFrameForImage:(id)arg0 currentFrame:(struct CGRect )arg1 finalSize:(struct CGSize )arg2 ;
-(struct CGSize )finalSizeForSize:(struct CGSize )arg0 originalSize:(struct CGSize )arg1 ;
-(void)dealloc;
-(void)drawAfterImageForContext:(struct CGContext *)arg0 imageFrame:(struct CGRect )arg1 finalSize:(struct CGSize )arg2 ;
-(void)drawBeforeImageForContext:(struct CGContext *)arg0 imageFrame:(struct CGRect )arg1 finalSize:(struct CGSize )arg2 ;


@end


#endif