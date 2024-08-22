// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSSQLITEPREDICATE_H
#define SSSQLITEPREDICATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSSQLitePredicate : NSObject <NSCopying>





-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)SQLForEntityClass:(Class)arg0 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;


@end


#endif