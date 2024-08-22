// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDASSOCIATIONENTITYASSOCIATIONEXISTSPREDICATE_H
#define HDASSOCIATIONENTITYASSOCIATIONEXISTSPREDICATE_H



#import "HDSQLitePredicate.h"

@interface HDAssociationEntityAssociationExistsPredicate : HDSQLitePredicate {
    NSInteger _assocationID;
    BOOL _exists;
}




+(id)predicateWithAssociationID:(NSInteger)arg0 exists:(BOOL)arg1 ;
-(id)SQLForEntityClass:(Class)arg0 ;
-(id)description;
-(void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;


@end


#endif