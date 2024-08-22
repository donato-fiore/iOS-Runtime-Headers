// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JSVALUE_H
#define JSVALUE_H


#import <Foundation/Foundation.h>

#import "JSContext.h"

@interface JSValue : NSObject {
    *OpaqueJSValue m_value;
}


@property (readonly) JSContext *context; // ivar: _context
@property (readonly) BOOL isArray;
@property (readonly) BOOL isBoolean;
@property (readonly) BOOL isDate;
@property (readonly) BOOL isNull;
@property (readonly) BOOL isNumber;
@property (readonly) BOOL isObject;
@property (readonly) BOOL isString;
@property (readonly) BOOL isSymbol;
@property (readonly) BOOL isUndefined;


+(SEL)selectorForStructToValue:(char *)arg0 ;
+(SEL)selectorForValueToStruct:(char *)arg0 ;
+(id)valueWithBool:(BOOL)arg0 inContext:(id)arg1 ;
+(id)valueWithDouble:(CGFloat)arg0 inContext:(id)arg1 ;
+(id)valueWithInt32:(int)arg0 inContext:(id)arg1 ;
+(id)valueWithJSValueRef:(struct OpaqueJSValue *)arg0 inContext:(id)arg1 ;
+(id)valueWithNewArrayInContext:(id)arg0 ;
+(id)valueWithNewErrorFromMessage:(id)arg0 inContext:(id)arg1 ;
+(id)valueWithNewObjectInContext:(id)arg0 ;
+(id)valueWithNewPromiseInContext:(id)arg0 fromExecutor:(id)arg1 ;
+(id)valueWithNewPromiseRejectedWithReason:(id)arg0 inContext:(id)arg1 ;
+(id)valueWithNewPromiseResolvedWithResult:(id)arg0 inContext:(id)arg1 ;
+(id)valueWithNewRegularExpressionFromPattern:(id)arg0 flags:(id)arg1 inContext:(id)arg2 ;
+(id)valueWithNewSymbolFromDescription:(id)arg0 inContext:(id)arg1 ;
+(id)valueWithNullInContext:(id)arg0 ;
+(id)valueWithObject:(id)arg0 inContext:(id)arg1 ;
+(id)valueWithPoint:(struct CGPoint )arg0 inContext:(id)arg1 ;
+(id)valueWithRange:(struct _NSRange )arg0 inContext:(id)arg1 ;
+(id)valueWithRect:(struct CGRect )arg0 inContext:(id)arg1 ;
+(id)valueWithSize:(struct CGSize )arg0 inContext:(id)arg1 ;
+(id)valueWithUInt32:(unsigned int)arg0 inContext:(id)arg1 ;
+(id)valueWithUndefinedInContext:(id)arg0 ;
-(BOOL)deleteProperty:(id)arg0 ;
-(BOOL)hasProperty:(id)arg0 ;
-(BOOL)isEqualToObject:(id)arg0 ;
-(BOOL)isEqualWithTypeCoercionToObject:(id)arg0 ;
-(BOOL)isInstanceOf:(id)arg0 ;
-(BOOL)toBool;
-(CGFloat)toDouble;
-(id)callWithArguments:(id)arg0 ;
-(id)constructWithArguments:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithValue:(struct OpaqueJSValue *)arg0 inContext:(id)arg1 ;
-(id)invokeMethod:(id)arg0 withArguments:(id)arg1 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)toArray;
-(id)toDate;
-(id)toDictionary;
-(id)toNumber;
-(id)toObject;
-(id)toObjectOfClass:(Class)arg0 ;
-(id)toString;
-(id)valueAtIndex:(NSUInteger)arg0 ;
-(id)valueForProperty:(id)arg0 ;
-(int)toInt32;
-(struct CGPoint )toPoint;
-(struct CGRect )toRect;
-(struct CGSize )toSize;
-(struct OpaqueJSValue *)JSValueRef;
-(struct _NSRange )toRange;
-(unsigned int)toUInt32;
-(void)dealloc;
-(void)defineProperty:(id)arg0 descriptor:(id)arg1 ;
-(void)setObject:(id)arg0 atIndexedSubscript:(NSUInteger)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setValue:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setValue:(id)arg0 forProperty:(id)arg1 ;


@end


#endif