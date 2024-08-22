// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIPHYSICALCIRCLEITEMVIEWELEMENT_H
#define SKUIPHYSICALCIRCLEITEMVIEWELEMENT_H

@class NSString;


#import "SKUIViewElement.h"
#import "SKUIImageViewElement.h"
#import "SKUILabelViewElement.h"

@interface SKUIPhysicalCircleItemViewElement : SKUIViewElement

@property (readonly, nonatomic) NSInteger circleSize; // ivar: _circleSize
@property (readonly, nonatomic) SKUIImageViewElement *imageElement;
@property (readonly, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) SKUILabelViewElement *titleElement;


-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif