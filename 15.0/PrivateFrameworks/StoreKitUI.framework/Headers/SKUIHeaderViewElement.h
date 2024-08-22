// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIHEADERVIEWELEMENT_H
#define SKUIHEADERVIEWELEMENT_H

@class NSArray;


#import "SKUIViewElement.h"
#import "SKUIButtonViewElement.h"

@interface SKUIHeaderViewElement : SKUIViewElement

@property (readonly, nonatomic) SKUIButtonViewElement *button;
@property (readonly, nonatomic) NSArray *titleLabels;


-(NSInteger)pageComponentType;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif