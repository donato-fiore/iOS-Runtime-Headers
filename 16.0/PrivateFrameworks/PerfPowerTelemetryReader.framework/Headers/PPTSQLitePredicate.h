// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTSQLITEPREDICATE_H
#define PPTSQLITEPREDICATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PPTSQLitePredicate : NSObject <NSCopying>





-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)sqlForEntity:(id)arg0 ;
-(id)sqlJoinClausesForEntity:(id)arg0 ;
-(void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;


@end


#endif