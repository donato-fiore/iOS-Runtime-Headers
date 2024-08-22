// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUICOLLECTIONLISTVIEWELEMENT_H
#define SKUICOLLECTIONLISTVIEWELEMENT_H



#import "SKUIViewElement.h"
#import "SKUISearchBarViewElement.h"

@interface SKUICollectionListViewElement : SKUIViewElement

@property (readonly, nonatomic) SKUISearchBarViewElement *searchHeader; // ivar: _searchHeader


-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif