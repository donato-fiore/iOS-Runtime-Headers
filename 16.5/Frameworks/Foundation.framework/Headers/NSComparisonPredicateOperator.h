// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCOMPARISONPREDICATEOPERATOR_H
#define NSCOMPARISONPREDICATEOPERATOR_H



#import "NSPredicateOperator.h"

@interface NSComparisonPredicateOperator : NSPredicateOperator {
    NSUInteger _variant;
    NSUInteger _options;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)performPrimitiveOperationUsingObject:(id)arg0 andObject:(id)arg1 ;
-(NSUInteger)options;
-(NSUInteger)variant;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperatorType:(NSUInteger)arg0 modifier:(NSUInteger)arg1 variant:(NSUInteger)arg2 ;
-(id)initWithOperatorType:(NSUInteger)arg0 modifier:(NSUInteger)arg1 variant:(NSUInteger)arg2 options:(NSUInteger)arg3 ;
-(id)predicateFormat;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif