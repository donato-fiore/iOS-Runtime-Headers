// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSQLITETOCTABLE_H
#define CKSQLITETOCTABLE_H



#import "CKSQLiteTOCTableBase.h"

@interface CKSQLiteTOCTable : CKSQLiteTOCTableBase



+(Class)entryClass;
+(id)dbProperties;
+(id)dbTableName;
-(id)tocEntriesWithGroupID:(id)arg0 error:(*id)arg1 ;


@end


#endif