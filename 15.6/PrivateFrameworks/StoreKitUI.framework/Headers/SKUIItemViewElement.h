// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIITEMVIEWELEMENT_H
#define SKUIITEMVIEWELEMENT_H



#import "SKUIViewElement.h"
#import "SKUIViewElementText.h"

@interface SKUIItemViewElement : SKUIViewElement

@property (readonly, nonatomic) SKUIViewElementText *itemText; // ivar: _itemText
@property (readonly, nonatomic, getter=isSelected) BOOL selected; // ivar: _selected


-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif