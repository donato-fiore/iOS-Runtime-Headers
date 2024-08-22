// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISTARBARVIEWELEMENT_H
#define SKUISTARBARVIEWELEMENT_H



#import "SKUIViewElement.h"

@interface SKUIStarBarViewElement : SKUIViewElement

@property (readonly, nonatomic) NSInteger numberOfRatings; // ivar: _numberOfRatings
@property (readonly, nonatomic) NSInteger numberOfStars; // ivar: _numberOfStars
@property (readonly, nonatomic) float value; // ivar: _value


-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif