// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSQLITEGENERICTABLEGROUP_H
#define CKSQLITEGENERICTABLEGROUP_H



#import "CKSQLiteTableGroup.h"

@interface CKSQLiteGenericTableGroup : CKSQLiteTableGroup



+(BOOL)supportsGroupCreation;
-(BOOL)validateTables:(id)arg0 ;
-(id)createTables;


@end


#endif