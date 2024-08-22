// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDASSOCIATIONENTITYPARENTIDPREDICATE_H
#define HDASSOCIATIONENTITYPARENTIDPREDICATE_H



#import "HDSQLitePredicate.h"

@interface HDAssociationEntityParentIDPredicate : HDSQLitePredicate {
    NSInteger _parentID;
}




+(id)predicateWithParentID:(NSInteger)arg0 ;
-(id)SQLForEntityClass:(Class)arg0 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg0 ;
-(id)description;
-(void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;


@end


#endif