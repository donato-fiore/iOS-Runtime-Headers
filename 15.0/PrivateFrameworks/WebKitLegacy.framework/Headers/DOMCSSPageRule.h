// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOMCSSPAGERULE_H
#define DOMCSSPAGERULE_H

@class NSString;


#import "DOMCSSRule.h"
#import "DOMCSSStyleDeclaration.h"

@interface DOMCSSPageRule : DOMCSSRule

@property (copy) NSString *selectorText;
@property (readonly) DOMCSSStyleDeclaration *style;




@end


#endif