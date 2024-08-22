// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIROWVIEWELEMENT_H
#define SKUIROWVIEWELEMENT_H

@class NSArray, NSString;


#import "SKUIViewElement.h"

@interface SKUIRowViewElement : SKUIViewElement

@property (readonly, nonatomic) NSArray *columns;
@property (readonly, nonatomic) NSString *type; // ivar: _type


-(NSInteger)pageComponentType;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif