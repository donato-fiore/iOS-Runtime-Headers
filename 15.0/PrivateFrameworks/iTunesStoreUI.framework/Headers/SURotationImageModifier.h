// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUROTATIONIMAGEMODIFIER_H
#define SUROTATIONIMAGEMODIFIER_H



#import "SUImageModifier.h"

@interface SURotationImageModifier : SUImageModifier

@property (nonatomic) float degrees; // ivar: _degrees
@property (nonatomic) NSInteger orientation; // ivar: _orientation


-(BOOL)isEqual:(id)arg0 ;
-(struct CGRect )imageFrameForImage:(id)arg0 currentFrame:(struct CGRect )arg1 finalSize:(struct CGSize )arg2 ;
-(void)drawBeforeImageForContext:(struct CGContext *)arg0 imageFrame:(struct CGRect )arg1 finalSize:(struct CGSize )arg2 ;


@end


#endif