// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSINPREDICATEOPERATOR_H
#define NSINPREDICATEOPERATOR_H



#import "NSPredicateOperator.h"
#import "NSSubstringPredicateOperator.h"

@interface NSInPredicateOperator : NSPredicateOperator {
    NSUInteger _flags;
    NSSubstringPredicateOperator *_stringVersion;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)performPrimitiveOperationUsingObject:(id)arg0 andObject:(id)arg1 ;
-(NSUInteger)flags;
-(NSUInteger)options;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperatorType:(NSUInteger)arg0 modifier:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
-(id)stringVersion;
-(id)symbol;
-(void)_setOptions:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif