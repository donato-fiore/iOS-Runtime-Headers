// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDASSOCIATIONENTITYASSOCIATIONPREDICATE_H
#define HDASSOCIATIONENTITYASSOCIATIONPREDICATE_H



#import "HDSQLitePredicate.h"

@interface HDAssociationEntityAssociationPredicate : HDSQLitePredicate {
    NSInteger _assocationID;
}




+(id)predicateWithAssociationID:(NSInteger)arg0 ;
-(id)SQLForEntityClass:(Class)arg0 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg0 ;
-(id)description;
-(void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;


@end


#endif