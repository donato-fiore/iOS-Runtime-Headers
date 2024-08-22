// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIGIFTTEMPLATEVIEWELEMENT_H
#define SKUIGIFTTEMPLATEVIEWELEMENT_H

@class NSString;


#import "SKUIViewElement.h"
#import "SKUIItem.h"

@interface SKUIGiftTemplateViewElement : SKUIViewElement {
    NSString *_productBuyParams;
    NSInteger _productItemIdentifier;
}


@property (readonly, nonatomic) NSInteger giftType; // ivar: _giftType
@property (readonly, nonatomic) SKUIItem *productItem;


-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif