// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDSQLITECACHE_H
#define CKDSQLITECACHE_H

@class CKSQLite;


#import "CKDLogicalDeviceContext.h"

@interface CKDSQLiteCache : CKSQLite

@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext; // ivar: _deviceContext


+(id)cacheDatabaseSchema;
+(id)cacheDirectory;
+(id)dbFileName;
+(id)sharedCache;
-(id)initOrExitWithPath:(id)arg0 isSharedCache:(BOOL)arg1 ;
-(id)initWithCacheDir:(id)arg0 ;
-(id)initWithDeviceContext:(id)arg0 ;


@end


#endif