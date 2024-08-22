// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDIDENTITYCACHE_H
#define CKDIDENTITYCACHE_H

@class CKSQLiteTableGroup;



@interface CKDIdentityCache : CKSQLiteTableGroup



+(NSUInteger)ttlDays;
+(id)cacheWithDeviceContext:(id)arg0 ;
-(id)cache;
-(id)cachedIdentityForLookupInfo:(id)arg0 container:(id)arg1 ;
-(id)createTables;
-(void)cacheUserIdentity:(id)arg0 forLookupInfo:(id)arg1 container:(id)arg2 ;
-(void)removeCachedValueForLookupInfo:(id)arg0 container:(id)arg1 ;


@end


#endif