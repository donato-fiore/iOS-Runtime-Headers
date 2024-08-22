// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _VUIMONOGRAMDECORATOR_H
#define _VUIMONOGRAMDECORATOR_H

@class VUIImageScaleDecorator, UIColor;



@interface _VUIMonogramDecorator : VUIImageScaleDecorator

@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (nonatomic) CGFloat borderWidth; // ivar: _borderWidth


-(BOOL)needsAlphaForImage:(id)arg0 ;
-(id)decoratorIdentifier;
-(void)drawInContext:(id)arg0 imageRect:(struct CGRect )arg1 ;


@end


#endif