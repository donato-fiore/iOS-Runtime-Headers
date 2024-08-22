// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOMCSSSTYLERULE_H
#define DOMCSSSTYLERULE_H

@class NSString;


#import "DOMCSSRule.h"
#import "DOMCSSStyleDeclaration.h"

@interface DOMCSSStyleRule : DOMCSSRule

@property (copy) NSString *selectorText;
@property (readonly) DOMCSSStyleDeclaration *style;




@end


#endif