// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPCSSQLCACHETABLEGROUP_H
#define CKDPCSSQLCACHETABLEGROUP_H

@class CKSQLiteTableGroup;



@interface CKDPCSSQLCacheTableGroup : CKSQLiteTableGroup



+(BOOL)rebootShouldClearData;
+(id)cacheTableGroupInDatabase:(id)arg0 containerID:(id)arg1 accountOverrideInfo:(id)arg2 ;
+(id)groupIdentifierForContainerID:(id)arg0 accountOverrideInfo:(id)arg1 ;
-(id)cacheTable;
-(id)createTables;


@end


#endif