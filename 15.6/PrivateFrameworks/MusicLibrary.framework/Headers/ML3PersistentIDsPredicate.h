// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3PERSISTENTIDSPREDICATE_H
#define ML3PERSISTENTIDSPREDICATE_H

@class NSArray;


#import "ML3Predicate.h"

@interface ML3PersistentIDsPredicate : ML3Predicate {
    NSArray *_persistentIDs;
}


@property (readonly, nonatomic) BOOL shouldContain; // ivar: _shouldContain


+(BOOL)supportsSecureCoding;
+(id)predicateWithPersistentIDs:(*NSInteger)arg0 count:(NSUInteger)arg1 shouldContain:(BOOL)arg2 ;
+(id)predicateWithPersistentIDs:(id)arg0 shouldContain:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)databaseStatementParameters;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersistentIDs:(id)arg0 shouldContain:(BOOL)arg1 ;
-(void)appendSQLToMutableString:(id)arg0 entityClass:(Class)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif