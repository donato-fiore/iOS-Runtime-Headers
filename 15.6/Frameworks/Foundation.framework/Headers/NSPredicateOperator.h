// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPREDICATEOPERATOR_H
#define NSPREDICATEOPERATOR_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NSPredicateOperator : NSObject <NSSecureCoding, NSCopying>

 {
    NSUInteger _operatorType;
    NSUInteger _modifier;
}




+(BOOL)supportsSecureCoding;
+(SEL)_getSelectorForType:(NSUInteger)arg0 ;
+(id)_getSymbolForType:(NSUInteger)arg0 ;
+(id)_newOperatorWithType:(NSUInteger)arg0 modifier:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
+(id)operatorWithCustomSelector:(SEL)arg0 modifier:(NSUInteger)arg1 ;
+(id)operatorWithType:(NSUInteger)arg0 modifier:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)performOperationUsingObject:(id)arg0 andObject:(id)arg1 ;
-(BOOL)performPrimitiveOperationUsingObject:(id)arg0 andObject:(id)arg1 ;
-(NSUInteger)hash;
-(NSUInteger)modifier;
-(NSUInteger)operatorType;
-(NSUInteger)options;
-(SEL)selector;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperatorType:(NSUInteger)arg0 ;
-(id)initWithOperatorType:(NSUInteger)arg0 modifier:(NSUInteger)arg1 ;
-(id)initWithOperatorType:(NSUInteger)arg0 modifier:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
-(id)predicateFormat;
-(id)symbol;
-(void)_setModifier:(NSUInteger)arg0 ;
-(void)_setOptions:(NSUInteger)arg0 ;
-(void)acceptVisitor:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif