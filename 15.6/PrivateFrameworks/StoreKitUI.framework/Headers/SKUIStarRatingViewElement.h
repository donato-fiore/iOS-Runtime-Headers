// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISTARRATINGVIEWELEMENT_H
#define SKUISTARRATINGVIEWELEMENT_H



#import "SKUIViewElement.h"
#import "SKUIViewElementText.h"

@interface SKUIStarRatingViewElement : SKUIViewElement {
    BOOL _enabled;
}


@property (readonly, nonatomic) float ratingValue; // ivar: _ratingValue
@property (readonly, nonatomic) NSInteger starType; // ivar: _starType
@property (readonly, nonatomic) SKUIViewElementText *text; // ivar: _text


-(BOOL)isEnabled;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif