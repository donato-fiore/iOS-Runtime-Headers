// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOMCSSMEDIARULE_H
#define DOMCSSMEDIARULE_H



#import "DOMCSSRule.h"
#import "DOMCSSRuleList.h"
#import "DOMMediaList.h"

@interface DOMCSSMediaRule : DOMCSSRule

@property (readonly) DOMCSSRuleList *cssRules;
@property (readonly) DOMMediaList *media;


-(unsigned int)insertRule:(id)arg0 ;
-(unsigned int)insertRule:(id)arg0 index:(unsigned int)arg1 ;
-(void)deleteRule:(unsigned int)arg0 ;


@end


#endif