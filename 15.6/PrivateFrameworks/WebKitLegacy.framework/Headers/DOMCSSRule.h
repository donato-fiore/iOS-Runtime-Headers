// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOMCSSRULE_H
#define DOMCSSRULE_H

@class NSString;


#import "DOMObject.h"
#import "DOMCSSRule.h"
#import "DOMCSSStyleSheet.h"

@interface DOMCSSRule : DOMObject

@property (copy) NSString *cssText;
@property (readonly) DOMCSSRule *parentRule;
@property (readonly) DOMCSSStyleSheet *parentStyleSheet;
@property (readonly) unsigned short type;


-(void)dealloc;


@end


#endif