// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSQLITETOCTABLEGROUPTABLE_H
#define CKSQLITETOCTABLEGROUPTABLE_H



#import "CKSQLiteTOCTableBase.h"

@interface CKSQLiteTOCTableGroupTable : CKSQLiteTOCTableBase



+(BOOL)isInvalidGroupName:(id)arg0 ;
+(Class)entryClass;
+(id)dbProperties;
+(id)dbTableName;
+(id)invalidGroupNameForGroupName:(id)arg0 ;
-(id)genericTableGroupWithName:(id)arg0 error:(*id)arg1 ;
-(id)invalidateGroup:(id)arg0 ;
-(id)newEntryObject;
-(id)saveGroupName:(id)arg0 ;
-(id)tableGroupOfClass:(Class)arg0 withName:(id)arg1 error:(*id)arg2 ;
-(id)tableGroupsWithClass:(id)arg0 ;
-(id)updateGroupData:(id)arg0 ;
-(void)updateLastUsedDate:(id)arg0 ;


@end


#endif