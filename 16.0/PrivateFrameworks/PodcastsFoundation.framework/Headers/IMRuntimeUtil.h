// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMRUNTIMEUTIL_H
#define IMRUNTIMEUTIL_H


#import <Foundation/Foundation.h>


@interface IMRuntimeUtil : NSObject



+(BOOL)associatedBoolValueForKey:(id)arg0 onObject:(id)arg1 ;
+(BOOL)associatedBoolValueForKey:(id)arg0 onObject:(id)arg1 withDefault:(BOOL)arg2 ;
+(CGFloat)associatedDoubleValueForKey:(id)arg0 onObject:(id)arg1 ;
+(CGFloat)associatedDoubleValueForKey:(id)arg0 onObject:(id)arg1 withDefault:(CGFloat)arg2 ;
+(NSInteger)associatedIntValueForKey:(id)arg0 onObject:(id)arg1 ;
+(NSInteger)associatedIntValueForKey:(id)arg0 onObject:(id)arg1 withDefault:(NSInteger)arg2 ;
+(float)associatedFloatValueForKey:(id)arg0 onObject:(id)arg1 ;
+(float)associatedFloatValueForKey:(id)arg0 onObject:(id)arg1 withDefault:(float)arg2 ;
+(id)associatedValueForKey:(id)arg0 onObject:(id)arg1 ;
+(id)associatedValueForKey:(id)arg0 onObject:(id)arg1 withDefault:(id)arg2 ;
+(void)associateBoolValue:(BOOL)arg0 forKey:(id)arg1 onObject:(id)arg2 ;
+(void)associateBoolValue:(BOOL)arg0 forKey:(id)arg1 onObject:(id)arg2 withPolicy:(NSUInteger)arg3 ;
+(void)associateDoubleValue:(CGFloat)arg0 forKey:(id)arg1 onObject:(id)arg2 ;
+(void)associateDoubleValue:(CGFloat)arg0 forKey:(id)arg1 onObject:(id)arg2 withPolicy:(NSUInteger)arg3 ;
+(void)associateFloatValue:(float)arg0 forKey:(id)arg1 onObject:(id)arg2 ;
+(void)associateFloatValue:(float)arg0 forKey:(id)arg1 onObject:(id)arg2 withPolicy:(NSUInteger)arg3 ;
+(void)associateIntValue:(NSInteger)arg0 forKey:(id)arg1 onObject:(id)arg2 ;
+(void)associateIntValue:(NSInteger)arg0 forKey:(id)arg1 onObject:(id)arg2 withPolicy:(NSUInteger)arg3 ;
+(void)associateValue:(id)arg0 forKey:(id)arg1 onObject:(id)arg2 ;
+(void)associateValue:(id)arg0 forKey:(id)arg1 onObject:(id)arg2 withPolicy:(NSUInteger)arg3 ;
+(void)swizzleClassMethod:(SEL)arg0 onClass:(Class)arg1 withReplacementBlock:(id)arg2 ;
+(void)swizzleMethod:(SEL)arg0 onClass:(Class)arg1 withReplacementBlock:(id)arg2 ;


@end


#endif