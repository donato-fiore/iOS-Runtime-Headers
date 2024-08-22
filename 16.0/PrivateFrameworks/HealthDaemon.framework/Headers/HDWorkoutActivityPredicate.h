// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDWORKOUTACTIVITYPREDICATE_H
#define HDWORKOUTACTIVITYPREDICATE_H



#import "HDSQLitePredicate.h"

@interface HDWorkoutActivityPredicate : HDSQLitePredicate {
    HDSQLitePredicate *_subPredicate;
}




+(id)predicateForSubPredicate:(id)arg0 ;
-(id)SQLForEntityClass:(Class)arg0 ;
-(void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;


@end


#endif