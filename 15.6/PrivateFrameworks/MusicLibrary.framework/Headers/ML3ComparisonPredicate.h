// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3COMPARISONPREDICATE_H
#define ML3COMPARISONPREDICATE_H

@class NSString;


#import "ML3PropertyPredicate.h"

@interface ML3ComparisonPredicate : ML3PropertyPredicate

@property (readonly, nonatomic) BOOL caseInsensitive; // ivar: _caseInsensitive
@property (readonly, nonatomic) int comparison; // ivar: _comparison
@property (readonly, copy, nonatomic) NSString *transformFunction; // ivar: _transformFunction
@property (readonly, copy, nonatomic) NSString *treatNullAsString; // ivar: _treatNullAsString
@property (readonly, nonatomic) id *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)predicateWithProperty:(id)arg0 equalToInt64:(NSInteger)arg1 ;
+(id)predicateWithProperty:(id)arg0 equalToInteger:(NSInteger)arg1 ;
+(id)predicateWithProperty:(id)arg0 equalToValue:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 value:(id)arg1 comparison:(int)arg2 ;
+(id)predicateWithProperty:(id)arg0 value:(id)arg1 comparison:(int)arg2 caseInsensitive:(BOOL)arg3 ;
+(id)predicateWithProperty:(id)arg0 value:(id)arg1 comparison:(int)arg2 caseInsensitive:(BOOL)arg3 treatNullAsString:(id)arg4 ;
+(id)predicateWithProperty:(id)arg0 value:(id)arg1 comparison:(int)arg2 transformFunction:(id)arg3 ;
-(BOOL)containsPropertyPredicate:(id)arg0 matchingValue:(id)arg1 usingComparison:(int)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)databaseStatementParameters;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProperty:(id)arg0 value:(id)arg1 comparison:(int)arg2 caseInsensitive:(BOOL)arg3 transformFunction:(id)arg4 treatNullAsString:(id)arg5 ;
-(id)operator;
-(id)valueToBindForOperation:(NSInteger)arg0 ;
-(void)appendSQLToMutableString:(id)arg0 entityClass:(Class)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif