// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVMONOGRAMDECORATOR_H
#define _TVMONOGRAMDECORATOR_H

@class UIColor;


#import "TVImageScaleDecorator.h"

@interface _TVMonogramDecorator : TVImageScaleDecorator

@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (nonatomic) CGFloat borderWidth; // ivar: _borderWidth


-(BOOL)needsAlphaForImage:(id)arg0 ;
-(id)decoratorIdentifier;
-(void)drawInContext:(id)arg0 imageRect:(struct CGRect )arg1 ;


@end


#endif