// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCOMPOUNDPREDICATE_H
#define NSCOMPOUNDPREDICATE_H

@class NSArray;


#import "NSPredicate.h"

@interface NSCompoundPredicate : NSPredicate {
    NSUInteger _type;
    NSArray *_subpredicates;
}


@property (readonly) NSUInteger compoundPredicateType;
@property (readonly, copy) NSArray *subpredicates;


+(BOOL)supportsSecureCoding;
+(id)_operatorForType:(NSUInteger)arg0 ;
+(id)andPredicateWithSubpredicates:(id)arg0 ;
+(id)notPredicateWithSubpredicate:(id)arg0 ;
+(id)orPredicateWithSubpredicates:(id)arg0 ;
-(BOOL)evaluateWithObject:(id)arg0 substitutionVariables:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_copySubpredicateDescription:(id)arg0 ;
-(id)_predicateOperator;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)generateMetadataDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 subpredicates:(id)arg1 ;
-(id)predicateFormat;
-(id)predicateOperator;
-(id)predicateWithSubstitutionVariables:(id)arg0 ;
-(void)_acceptSubpredicates:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)acceptVisitor:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)allowEvaluation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif