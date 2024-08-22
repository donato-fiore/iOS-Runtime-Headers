// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDSQLITECOMPARISONPREDICATELIKEWITHESCAPE_H
#define _HDSQLITECOMPARISONPREDICATELIKEWITHESCAPE_H

@class NSString;


#import "HDSQLiteComparisonPredicate.h"

@interface _HDSQLiteComparisonPredicateLikeWithEscape : HDSQLiteComparisonPredicate

@property (readonly, nonatomic) NSString *escapeCharacter; // ivar: _escapeCharacter


-(id)SQLForEntityClass:(Class)arg0 ;
-(id)initWithProperty:(id)arg0 value:(id)arg1 escapeCharacter:(id)arg2 ;


@end


#endif