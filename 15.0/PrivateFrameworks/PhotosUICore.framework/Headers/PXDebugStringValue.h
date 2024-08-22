// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXDEBUGSTRINGVALUE_H
#define PXDEBUGSTRINGVALUE_H

@class NSString;


#import "PXDebugValue.h"

@interface PXDebugStringValue : PXDebugValue {
    NSUInteger _highlightStyle;
}


@property (readonly, nonatomic) NSString *string; // ivar: _string


-(NSUInteger)highlightStyle;
-(id)initWithLabel:(id)arg0 boolValue:(BOOL)arg1 positiveValue:(BOOL)arg2 positiveHighlighted:(BOOL)arg3 negativeHighlighted:(BOOL)arg4 ;
-(id)initWithLabel:(id)arg0 doubleValue:(CGFloat)arg1 ;
-(id)initWithLabel:(id)arg0 highlightedScore:(CGFloat)arg1 ;
-(id)initWithLabel:(id)arg0 integerValue:(NSInteger)arg1 ;
-(id)initWithLabel:(id)arg0 string:(id)arg1 highlightStyle:(NSUInteger)arg2 ;


@end


#endif