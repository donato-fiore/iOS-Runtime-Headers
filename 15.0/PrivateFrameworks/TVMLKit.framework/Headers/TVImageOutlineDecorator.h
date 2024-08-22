// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVIMAGEOUTLINEDECORATOR_H
#define TVIMAGEOUTLINEDECORATOR_H

@class UIColor;


#import "TVImageScaleDecorator.h"

@interface TVImageOutlineDecorator : TVImageScaleDecorator

@property (readonly, copy, nonatomic) UIColor *outlineColor; // ivar: _outlineColor
@property (readonly, nonatomic) UIEdgeInsets outlineWidths; // ivar: _outlineWidths


+(id)decoratorWithOutlineColor:(id)arg0 outlineWidths:(struct UIEdgeInsets )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)decoratorIdentifier;
-(id)initWithOutlineColor:(id)arg0 outlineWidths:(struct UIEdgeInsets )arg1 ;
-(void)drawInContext:(id)arg0 imageRect:(struct CGRect )arg1 ;


@end


#endif