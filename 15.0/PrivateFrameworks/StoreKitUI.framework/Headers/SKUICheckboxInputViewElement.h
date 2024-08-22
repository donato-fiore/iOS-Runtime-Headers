// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICHECKBOXINPUTVIEWELEMENT_H
#define SKUICHECKBOXINPUTVIEWELEMENT_H



#import "SKUIInputViewElement.h"

@interface SKUICheckboxInputViewElement : SKUIInputViewElement {
    char _disabled;
}


@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected


-(NSUInteger)elementType;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif