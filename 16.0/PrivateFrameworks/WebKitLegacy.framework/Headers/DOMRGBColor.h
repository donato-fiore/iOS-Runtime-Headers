// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOMRGBCOLOR_H
#define DOMRGBCOLOR_H



#import "DOMObject.h"
#import "DOMCSSPrimitiveValue.h"

@interface DOMRGBColor : DOMObject

@property (readonly) DOMCSSPrimitiveValue *alpha;
@property (readonly) DOMCSSPrimitiveValue *blue;
@property (readonly) DOMCSSPrimitiveValue *green;
@property (readonly) DOMCSSPrimitiveValue *red;


-(struct CGColor *)color;
-(void)dealloc;


@end


#endif