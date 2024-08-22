// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSSQLITEPREDICATE_H
#define AMSSQLITEPREDICATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AMSSQLitePredicate : NSObject <NSCopying>





-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)SQLForEntityClass:(Class)arg0 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)applyBinding:(id)arg0 atIndex:(*int)arg1 ;


@end


#endif