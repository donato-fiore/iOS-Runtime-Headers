// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSARITHMETICLAYOUTDIMENSION_H
#define _NSARITHMETICLAYOUTDIMENSION_H

@class NSArray;
@protocol NSCompositeLayoutAnchor;


#import "NSLayoutDimension.h"

@interface _NSArithmeticLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor>

 {
    NSLayoutDimension *_rootLayoutDimension;
    CGFloat _multiplier;
    CGFloat _constant;
}


@property (readonly) NSArray *_childAnchors;


-(CGFloat)_valueInEngine:(id)arg0 ;
-(id)_expressionInContext:(struct ? )arg0 ;
-(id)_nearestAncestorLayoutItem;
-(id)equationDescription;
-(id)initWithAnchor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMultiplier:(CGFloat)arg0 dimension:(id)arg1 constant:(CGFloat)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif