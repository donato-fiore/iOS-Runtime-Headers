// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOMCSSSTYLESHEET_H
#define DOMCSSSTYLESHEET_H



#import "DOMStyleSheet.h"
#import "DOMCSSRuleList.h"
#import "DOMCSSRule.h"

@interface DOMCSSStyleSheet : DOMStyleSheet

@property (readonly) DOMCSSRuleList *cssRules;
@property (readonly) DOMCSSRule *ownerRule;
@property (readonly) DOMCSSRuleList *rules;


-(int)addRule:(id)arg0 style:(id)arg1 index:(unsigned int)arg2 ;
-(unsigned int)insertRule:(id)arg0 ;
-(unsigned int)insertRule:(id)arg0 index:(unsigned int)arg1 ;
-(void)deleteRule:(unsigned int)arg0 ;
-(void)removeRule:(unsigned int)arg0 ;


@end


#endif