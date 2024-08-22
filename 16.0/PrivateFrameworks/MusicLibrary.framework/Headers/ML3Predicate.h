// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3PREDICATE_H
#define ML3PREDICATE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ML3Predicate : NSObject <NSSecureCoding, NSCopying>





+(BOOL)supportsSecureCoding;
-(BOOL)containsPropertyPredicate:(id)arg0 matchingValue:(id)arg1 usingComparison:(int)arg2 ;
-(BOOL)isDynamicForEntityClass:(Class)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFalseAlways;
-(BOOL)isTrueAlways;
-(NSUInteger)hash;
-(id)SQLForEntityClass:(Class)arg0 ;
-(id)SQLJoinClausesForClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)databaseStatementParameters;
-(id)initWithCoder:(id)arg0 ;
-(id)spotlightPredicate;
-(void)appendSQLToMutableString:(id)arg0 entityClass:(Class)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif