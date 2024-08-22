// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDASSOCIATIONENTITYPARENTIDEXISTSPREDICATE_H
#define HDASSOCIATIONENTITYPARENTIDEXISTSPREDICATE_H



#import "HDSQLitePredicate.h"

@interface HDAssociationEntityParentIDExistsPredicate : HDSQLitePredicate {
    NSInteger _parentID;
    BOOL _exists;
}




+(id)predicateWithParentID:(NSInteger)arg0 exists:(BOOL)arg1 ;
-(id)SQLForEntityClass:(Class)arg0 ;
-(id)description;
-(void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;


@end


#endif