// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICAROUSELVIEWELEMENT_H
#define SKUICAROUSELVIEWELEMENT_H



#import "SKUIViewElement.h"
#import "SKUIProgressIndicatorViewElement.h"

@interface SKUICarouselViewElement : SKUIViewElement

@property (readonly, nonatomic) CGFloat displayInterval; // ivar: _displayInterval
@property (readonly, nonatomic) SKUIProgressIndicatorViewElement *progressIndicatorElement;


-(NSInteger)pageComponentType;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(void)enumerateChildrenUsingBlock:(id)arg0 ;


@end


#endif