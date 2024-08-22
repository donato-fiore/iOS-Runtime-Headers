// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3UNARYPREDICATE_H
#define ML3UNARYPREDICATE_H



#import "ML3Predicate.h"

@interface ML3UnaryPredicate : ML3Predicate

@property (retain, nonatomic) ML3Predicate *predicate; // ivar: _predicate


+(BOOL)supportsSecureCoding;
+(id)predicateWithPredicate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)SQLJoinClausesForClass:(Class)arg0 ;
-(id)databaseStatementParameters;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif