// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICOLUMNVIEWELEMENT_H
#define SKUICOLUMNVIEWELEMENT_H



#import "SKUIViewElement.h"
#import "SKUIHeaderViewElement.h"

@interface SKUIColumnViewElement : SKUIViewElement

@property (readonly, nonatomic) NSInteger columnSpan; // ivar: _columnSpan
@property (readonly, nonatomic) SKUIHeaderViewElement *headerElement;


-(NSInteger)pageComponentType;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(void)enumerateChildrenUsingBlock:(id)arg0 ;


@end


#endif