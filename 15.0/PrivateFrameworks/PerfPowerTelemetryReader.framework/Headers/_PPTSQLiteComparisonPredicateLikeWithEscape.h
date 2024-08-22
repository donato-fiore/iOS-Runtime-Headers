// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PPTSQLITECOMPARISONPREDICATELIKEWITHESCAPE_H
#define _PPTSQLITECOMPARISONPREDICATELIKEWITHESCAPE_H

@class NSString;


#import "PPTSQLiteComparisonPredicate.h"

@interface _PPTSQLiteComparisonPredicateLikeWithEscape : PPTSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) NSString *escapeCharacter; // ivar: _escapeCharacter


-(id)initWithProperty:(id)arg0 value:(id)arg1 escapeCharacter:(id)arg2 ;
-(id)sqlForEntity:(id)arg0 ;


@end


#endif