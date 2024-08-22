// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3ORDERINGTERM_H
#define ML3ORDERINGTERM_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ML3OrderingTerm : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *collation; // ivar: _collation
@property (readonly, nonatomic) int direction; // ivar: _direction
@property (readonly, nonatomic) NSString *property; // ivar: _property


+(BOOL)supportsSecureCoding;
+(id)orderingTermWithProperty:(id)arg0 ;
+(id)orderingTermWithProperty:(id)arg0 direction:(int)arg1 ;
+(id)reversedTerms:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProperty:(id)arg0 ;
-(id)initWithProperty:(id)arg0 direction:(int)arg1 ;
-(id)initWithProperty:(id)arg0 direction:(int)arg1 collation:(id)arg2 ;
-(void)appendSQLToMutableString:(id)arg0 entityClass:(Class)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif