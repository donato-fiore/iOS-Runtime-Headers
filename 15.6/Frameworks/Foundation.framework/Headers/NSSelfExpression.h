// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSELFEXPRESSION_H
#define NSSELFEXPRESSION_H



#import "NSExpression.h"

@interface NSSelfExpression : NSExpression



+(BOOL)_allowsEvaluation;
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)defaultInstance;
+(void)initialize;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(id)_initPrivate;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)expressionValueWithObject:(id)arg0 context:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)predicateFormat;
-(id)retain;
-(void)encodeWithCoder:(id)arg0 ;
-(void)release;


@end


#endif