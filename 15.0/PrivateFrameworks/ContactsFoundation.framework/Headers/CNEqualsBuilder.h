// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNEQUALSBUILDER_H
#define CNEQUALSBUILDER_H


#import <Foundation/Foundation.h>


@interface CNEqualsBuilder : NSObject



// +(BOOL)evaluateBuilderBlock:(id)arg0 remainingBlocks:(unk)arg1  ;
+(BOOL)isBool:(BOOL)arg0 equalToOther:(BOOL)arg1 ;
+(BOOL)isDouble:(CGFloat)arg0 equalToOther:(CGFloat)arg1 withAccuracy:(CGFloat)arg2 ;
+(BOOL)isInteger:(NSInteger)arg0 equalToOther:(NSInteger)arg1 ;
+(BOOL)isObject:(id)arg0 equalToOther:(id)arg1 ;
+(BOOL)isObject:(id)arg0 equalToOther:(id)arg1 withBlocks:(id)arg2 ;
+(BOOL)isObject:(id)arg0 kindOfClass:(Class)arg1 andEqualToObject:(id)arg2 withBlocks:(id)arg3 ;
+(BOOL)isObject:(id)arg0 memberOfClass:(Class)arg1 andEqualToObject:(id)arg2 withBlocks:(id)arg3 ;
+(BOOL)isObject:(id)arg0 memberOfSameClassAndEqualTo:(id)arg1 withBlocks:(id)arg2 ;
+(BOOL)isString:(id)arg0 localizedCaseInsensitiveEqualToOther:(id)arg1 ;


@end


#endif