// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPCSSQLCACHETABLE_H
#define CKDPCSSQLCACHETABLE_H

@class CKSQLiteCacheTable;



@interface CKDPCSSQLCacheTable : CKSQLiteCacheTable



+(CGFloat)cacheValidTime;
+(Class)entryClass;
+(id)dbProperties;
-(id)PCSDataForID:(id)arg0 databaseScope:(NSInteger)arg1 itemType:(NSUInteger)arg2 accountID:(id)arg3 serviceName:(id)arg4 ;
-(id)deletePCSDataForID:(id)arg0 databaseScope:(NSInteger)arg1 itemType:(NSUInteger)arg2 accountID:(id)arg3 serviceName:(id)arg4 ;
-(id)deletePCSDataForShare:(id)arg0 account:(id)arg1 serviceName:(id)arg2 ;
-(id)deletePCSDataForZone:(id)arg0 account:(id)arg1 serviceName:(id)arg2 ;
-(id)init;


@end


#endif