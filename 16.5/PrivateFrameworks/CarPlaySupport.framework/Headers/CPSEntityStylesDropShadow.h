// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSENTITYSTYLESDROPSHADOW_H
#define CPSENTITYSTYLESDROPSHADOW_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface CPSEntityStylesDropShadow : NSObject

@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) CGSize offset; // ivar: _offset
@property (nonatomic) CGFloat opacity; // ivar: _opacity
@property (nonatomic) CGFloat radius; // ivar: _radius


-(struct CGRect )rectsForSource:(struct CGRect )arg0 shadowRect:(struct CGRect *)arg1 unionRect:(struct CGRect *)arg2 positionTransform:(struct CGAffineTransform *)arg3 ;
-(void)applyShadowToLayer:(id)arg0 ;


@end


#endif