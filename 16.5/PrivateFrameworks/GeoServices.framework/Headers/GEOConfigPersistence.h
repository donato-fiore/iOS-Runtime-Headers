// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCONFIGPERSISTENCE_H
#define GEOCONFIGPERSISTENCE_H


#import <Foundation/Foundation.h>

#import "GEOSQLiteDB.h"
#import "_GEOConfigDB.h"
#import "_GEOConfigCache.h"
#import "_GEOConfigDBOperationQueue.h"

@interface GEOConfigPersistence : NSObject {
    GEOSQLiteDB *_db;
    _GEOConfigDB *_configDB;
    _GEOConfigDB *_xpcConfigDB;
    _GEOConfigCache *_keyExpiryCache;
    _GEOConfigDBOperationQueue *_operationQueue;
}




+(BOOL)_migrateDates:(id)arg0 withConverter:(id)arg1 ;
+(BOOL)_setup:(id)arg0 ;
-(id)_getExpiredKeyPathsOlderThanTime:(id)arg0 osVersion:(id)arg1 ;
-(id)_getExpiredKeyPathsOlderThanTime:(id)arg0 osVersion:(id)arg1 from:(id)arg2 ;
-(id)defaultForKeyPath:(id)arg0 ;
-(id)defaultForKeyPathComponents:(id)arg0 ;
-(id)getAllExpiringKeys;
-(id)getExpireForKeyPath:(id)arg0 ;
-(id)getExpiredKeyPathsOlderThanOSVersion:(id)arg0 ;
-(id)getExpiredKeyPathsOlderThanTime:(id)arg0 ;
-(id)initWithDBPath:(id)arg0 ;
-(id)xpcDefaultForKeyPath:(id)arg0 ;
-(id)xpcDefaultForKeyPathComponents:(id)arg0 ;
-(void)_pruneExpiredKeyPathsOlderThanTime:(id)arg0 osVersion:(id)arg1 ;
-(void)clearExpirationForKeyPath:(id)arg0 ;
-(void)dealloc;
-(void)pruneExpiredKeyPathsOlderThanOSVersion:(id)arg0 ;
-(void)pruneExpiredKeyPathsOlderThanTime:(id)arg0 ;
-(void)setDefault:(id)arg0 forKeyPath:(id)arg1 ;
-(void)setExpire:(id)arg0 ;
-(void)setXPCDefault:(id)arg0 forKeyPath:(id)arg1 ;
-(void)tearDown;


@end


#endif