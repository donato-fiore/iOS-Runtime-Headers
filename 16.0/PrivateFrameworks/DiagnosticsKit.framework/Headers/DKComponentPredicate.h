// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DKCOMPONENTPREDICATE_H
#define DKCOMPONENTPREDICATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DKComponentPredicate : NSObject

@property (readonly, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) BOOL exactMatch; // ivar: _exactMatch
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *type; // ivar: _type


+(id)componentPredicateMatchingComponentIdentity:(id)arg0 ;
+(id)componentPredicateWithDomain:(id)arg0 exactMatch:(BOOL)arg1 ;
+(id)componentPredicateWithType:(id)arg0 identifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToComponentPredicate:(id)arg0 ;
-(BOOL)matchesComponentIdentity:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDomain:(id)arg0 exactMatch:(BOOL)arg1 ;
-(id)initWithType:(id)arg0 identifier:(id)arg1 ;


@end


#endif