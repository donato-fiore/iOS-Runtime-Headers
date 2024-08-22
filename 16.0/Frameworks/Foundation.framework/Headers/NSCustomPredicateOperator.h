// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCUSTOMPREDICATEOPERATOR_H
#define NSCUSTOMPREDICATEOPERATOR_H



#import "NSPredicateOperator.h"

@interface NSCustomPredicateOperator : NSPredicateOperator {
    SEL _selector;
    _operatorFlags _operatorFlags;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)performPrimitiveOperationUsingObject:(id)arg0 andObject:(id)arg1 ;
-(SEL)selector;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCustomSelector:(SEL)arg0 modifier:(NSUInteger)arg1 ;
-(id)symbol;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif