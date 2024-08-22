// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISORTDESCRIPTORVIEWELEMENT_H
#define SKUISORTDESCRIPTORVIEWELEMENT_H

@class NSString;


#import "SKUIViewElement.h"

@interface SKUISortDescriptorViewElement : SKUIViewElement

@property (readonly, nonatomic, getter=isAscending) BOOL ascending; // ivar: _ascending
@property (readonly, copy, nonatomic) NSString *property; // ivar: _property


+(BOOL)shouldParseChildDOMElements;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif