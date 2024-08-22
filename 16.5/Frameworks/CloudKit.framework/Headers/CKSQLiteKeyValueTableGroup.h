// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSQLITEKEYVALUETABLEGROUP_H
#define CKSQLITEKEYVALUETABLEGROUP_H



#import "CKSQLiteTableGroup.h"
#import "CKSQLiteKeyValueStore.h"

@interface CKSQLiteKeyValueTableGroup : CKSQLiteTableGroup {
    CKSQLiteKeyValueStore *_store;
}




+(id)keyValueStoreInDatabase:(id)arg0 ;
-(id)createTables;


@end


#endif