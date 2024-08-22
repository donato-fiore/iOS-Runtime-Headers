// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIINDEXBARENTRYVIEWELEMENT_H
#define SKUIINDEXBARENTRYVIEWELEMENT_H

@class NSString;


#import "SKUIViewElement.h"

@interface SKUIIndexBarEntryViewElement : SKUIViewElement

@property (readonly, nonatomic) SKUIViewElement *childElement;
@property (readonly, copy, nonatomic) NSString *targetIndexBarEntryID; // ivar: _targetIndexBarEntryID
@property (readonly, nonatomic) NSInteger visibilityPriority; // ivar: _visibilityPriority


-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif