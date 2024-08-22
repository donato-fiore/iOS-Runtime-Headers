// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIPREDICATELISTVIEWELEMENT_H
#define SKUIPREDICATELISTVIEWELEMENT_H

@class NSPredicate, NSArray;


#import "SKUIViewElement.h"

@interface SKUIPredicateListViewElement : SKUIViewElement {
    NSPredicate *_compoundEntityValuePredicate;
}


@property (readonly, nonatomic) NSPredicate *compoundEntityValuePredicate;
@property (readonly, copy, nonatomic) NSArray *predicateViewElements;


-(id)applyUpdatesWithElement:(id)arg0 ;
-(void)_enumeratePredicateViewElementsUsingBlock:(id)arg0 ;


@end


#endif