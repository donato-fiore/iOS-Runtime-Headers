// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIIMAGEGRIDVIEWELEMENT_H
#define SKUIIMAGEGRIDVIEWELEMENT_H



#import "SKUIViewElement.h"

@interface SKUIImageGridViewElement : SKUIViewElement

@property (readonly, nonatomic) NSInteger columnCount;
@property (readonly, nonatomic) UIEdgeInsets contentInset;
@property (readonly, nonatomic) CGSize size; // ivar: _size


-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif