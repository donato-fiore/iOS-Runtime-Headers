// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOMCSSVALUE_H
#define DOMCSSVALUE_H

@class NSString;


#import "DOMObject.h"

@interface DOMCSSValue : DOMObject

@property (copy) NSString *cssText;
@property (readonly) unsigned short cssValueType;


-(void)dealloc;


@end


#endif