// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISHELFVIEWELEMENT_H
#define SKUISHELFVIEWELEMENT_H

@class NSString;


#import "SKUIViewElement.h"

@interface SKUIShelfViewElement : SKUIViewElement

@property (readonly, nonatomic) NSInteger numberOfRows; // ivar: _numberOfRows
@property (copy, nonatomic) id *shelfItemViewElementValidator; // ivar: _shelfItemViewElementValidator
@property (readonly, nonatomic) NSString *slideshowTitle; // ivar: _slideshowTitle


-(NSInteger)pageComponentType;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(void)enumerateChildrenUsingBlock:(id)arg0 ;


@end


#endif