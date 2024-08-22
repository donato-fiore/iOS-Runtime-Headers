// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3PROPERTYPREDICATE_H
#define ML3PROPERTYPREDICATE_H

@class NSString;


#import "ML3Predicate.h"

@interface ML3PropertyPredicate : ML3Predicate

@property (copy, nonatomic) NSString *property; // ivar: _property


+(BOOL)supportsSecureCoding;
+(id)predicateWithProperty:(id)arg0 ;
-(BOOL)isDynamicForEntityClass:(Class)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)SQLJoinClausesForClass:(Class)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProperty:(id)arg0 ;
-(void)appendSQLToMutableString:(id)arg0 entityClass:(Class)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif