// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIABSTRACTENTITYPROVIDERVIEWELEMENT_H
#define SKUIABSTRACTENTITYPROVIDERVIEWELEMENT_H

@class NSString, NSArray;


#import "SKUIViewElement.h"
#import "SKUILimitListViewElement.h"
#import "SKUIPredicateListViewElement.h"
#import "SKUISortDescriptorListViewElement.h"

@interface SKUIAbstractEntityProviderViewElement : SKUIViewElement

@property (readonly, copy, nonatomic) NSString *entityTypeString; // ivar: _entityTypeString
@property (readonly, nonatomic) SKUILimitListViewElement *limitListViewElement;
@property (readonly, nonatomic) SKUIPredicateListViewElement *predicateListViewElement;
@property (readonly, copy, nonatomic) NSArray *prefetchedProperties; // ivar: _prefetchedProperties
@property (readonly, nonatomic) SKUISortDescriptorListViewElement *sortDescriptorListViewElement;


-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif