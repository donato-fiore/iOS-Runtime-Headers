// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCONSTANTVALUEEXPRESSION_H
#define NSCONSTANTVALUEEXPRESSION_H



#import "NSExpression.h"

@interface NSConstantValueExpression : NSExpression {
    id *constantValue;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)constantValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)expressionValueWithObject:(id)arg0 ;
-(id)expressionValueWithObject:(id)arg0 context:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(id)predicateFormat;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif