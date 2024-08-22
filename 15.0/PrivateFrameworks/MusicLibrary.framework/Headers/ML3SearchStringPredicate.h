// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3SEARCHSTRINGPREDICATE_H
#define ML3SEARCHSTRINGPREDICATE_H

@class NSArray, NSString;


#import "ML3Predicate.h"

@interface ML3SearchStringPredicate : ML3Predicate

@property (copy, nonatomic) NSArray *properties; // ivar: _properties
@property (copy, nonatomic) NSString *searchString; // ivar: _searchString


+(BOOL)supportsSecureCoding;
+(id)predicateWithConcatenatedProperties:(id)arg0 searchString:(id)arg1 ;
-(BOOL)isDynamicForEntityClass:(Class)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)SQLJoinClausesForClass:(Class)arg0 ;
-(id)databaseStatementParameters;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConcatenatedProperties:(id)arg0 searchString:(id)arg1 ;
-(void)appendSQLToMutableString:(id)arg0 entityClass:(Class)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif