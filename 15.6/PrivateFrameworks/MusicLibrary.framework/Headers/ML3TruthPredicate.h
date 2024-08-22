// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3TRUTHPREDICATE_H
#define ML3TRUTHPREDICATE_H



#import "ML3Predicate.h"

@interface ML3TruthPredicate : ML3Predicate {
    BOOL _truthValue;
}




+(BOOL)supportsSecureCoding;
+(id)falsePredicate;
+(id)truePredicate;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFalseAlways;
-(BOOL)isTrueAlways;
-(NSUInteger)hash;
-(id)_predicateString;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)appendSQLToMutableString:(id)arg0 entityClass:(Class)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif