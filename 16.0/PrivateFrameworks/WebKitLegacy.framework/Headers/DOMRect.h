// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOMRECT_H
#define DOMRECT_H



#import "DOMObject.h"
#import "DOMCSSPrimitiveValue.h"

@interface DOMRect : DOMObject

@property (readonly) DOMCSSPrimitiveValue *bottom;
@property (readonly) DOMCSSPrimitiveValue *left;
@property (readonly) DOMCSSPrimitiveValue *right;
@property (readonly) DOMCSSPrimitiveValue *top;


-(void)dealloc;


@end


#endif