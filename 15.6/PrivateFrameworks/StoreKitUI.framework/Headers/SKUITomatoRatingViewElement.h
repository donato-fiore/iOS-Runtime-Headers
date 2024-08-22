// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUITOMATORATINGVIEWELEMENT_H
#define SKUITOMATORATINGVIEWELEMENT_H



#import "SKUIViewElement.h"
#import "SKUIViewElementText.h"

@interface SKUITomatoRatingViewElement : SKUIViewElement

@property (readonly, nonatomic) NSInteger freshness; // ivar: _freshness
@property (readonly, nonatomic) SKUIViewElementText *ratingText; // ivar: _ratingText
@property (readonly, nonatomic) float tomatoRating; // ivar: _tomatoRating


-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif