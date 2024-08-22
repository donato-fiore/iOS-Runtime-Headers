// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIINFOLISTVIEWELEMENT_H
#define SKUIINFOLISTVIEWELEMENT_H



#import "SKUIViewElement.h"

@interface SKUIInfoListViewElement : SKUIViewElement

@property (readonly, nonatomic) NSInteger infoListType; // ivar: _infoListType


-(NSInteger)pageComponentType;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(void)enumerateChildrenUsingBlock:(id)arg0 ;


@end


#endif