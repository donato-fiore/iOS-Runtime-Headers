// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASSETVARIANTPRESENTATIONWIDTHPREDICATE_H
#define AVASSETVARIANTPRESENTATIONWIDTHPREDICATE_H

@class NSPredicate, NSPredicateOperator;



@interface AVAssetVariantPresentationWidthPredicate : NSPredicate {
    CGFloat _width;
    NSPredicateOperator *_operator;
}




+(BOOL)supportsSecureCoding;
-(BOOL)evaluateWithObject:(id)arg0 substitutionVariables:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPresentationWidth:(CGFloat)arg0 operatorType:(NSUInteger)arg1 ;
-(id)predicateFormat;
-(void)acceptVisitor:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif