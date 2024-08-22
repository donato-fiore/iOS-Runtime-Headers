// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUICOUNTLIMITVIEWELEMENT_H
#define SKUICOUNTLIMITVIEWELEMENT_H

@class NSString;


#import "SKUILimitViewElement.h"

@interface SKUICountLimitViewElement : SKUILimitViewElement

@property (readonly, copy, nonatomic) NSString *entityTypeString; // ivar: _entityTypeString
@property (readonly, nonatomic) NSInteger limitValue; // ivar: _limitValue


+(BOOL)shouldParseChildDOMElements;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif