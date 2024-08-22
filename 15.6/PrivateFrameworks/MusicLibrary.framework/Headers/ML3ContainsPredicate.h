// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3CONTAINSPREDICATE_H
#define ML3CONTAINSPREDICATE_H



#import "ML3PropertyPredicate.h"

@interface ML3ContainsPredicate : ML3PropertyPredicate

@property (copy, nonatomic) id *values; // ivar: _values


+(BOOL)supportsSecureCoding;
+(id)predicateWithProperty:(id)arg0 valueSet:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 values:(id)arg1 ;
-(BOOL)containsPropertyPredicate:(id)arg0 matchingValue:(id)arg1 usingComparison:(int)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)databaseStatementParameters;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProperty:(id)arg0 values:(id)arg1 ;
-(void)appendSQLToMutableString:(id)arg0 entityClass:(Class)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif