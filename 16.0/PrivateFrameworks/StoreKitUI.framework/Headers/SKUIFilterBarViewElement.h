// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIFILTERBARVIEWELEMENT_H
#define SKUIFILTERBARVIEWELEMENT_H



#import "SKUIViewElement.h"
#import "SKUIDividerViewElement.h"

@interface SKUIFilterBarViewElement : SKUIViewElement

@property (readonly, nonatomic) SKUIDividerViewElement *bottomDivider;


-(NSInteger)pageComponentType;
-(id)childViewElementsForAlignment:(NSUInteger)arg0 ;
-(void)enumerateChildrenUsingBlock:(id)arg0 ;


@end


#endif