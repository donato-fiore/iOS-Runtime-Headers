// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOMATTR_H
#define DOMATTR_H

@class NSString;


#import "DOMNode.h"
#import "DOMElement.h"
#import "DOMCSSStyleDeclaration.h"

@interface DOMAttr : DOMNode

@property (readonly, copy) NSString *name;
@property (readonly) DOMElement *ownerElement;
@property (readonly) BOOL specified;
@property (readonly) DOMCSSStyleDeclaration *style;
@property (copy) NSString *value;


-(BOOL)isId;


@end


#endif