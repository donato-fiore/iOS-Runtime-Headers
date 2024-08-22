// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSFETCHREQUESTEXPRESSION_H
#define NSFETCHREQUESTEXPRESSION_H

@class NSExpression;



@interface NSFetchRequestExpression : NSExpression {
    *void _reserved1;
    *void _reserved2;
    *void _reserved3;
    *void _reserved4;
    NSExpression *_fetchRequest;
    NSExpression *_managedObjectContext;
    _fetchExpressionFlags _flags;
}


@property (readonly) NSExpression *contextExpression;
@property (readonly, getter=isCountOnlyRequest) BOOL countOnlyRequest;
@property (readonly) NSExpression *requestExpression;


+(BOOL)supportsSecureCoding;
+(id)expressionForFetch:(id)arg0 context:(id)arg1 countOnly:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)expressionType;
-(NSUInteger)hash;
-(id)_expressionWithSubstitutionVariables:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)expressionValueWithObject:(id)arg0 context:(id)arg1 ;
-(id)initForFetch:(id)arg0 context:(id)arg1 countOnly:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)acceptVisitor:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif