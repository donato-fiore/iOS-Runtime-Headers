// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSQLITECACHETABLE_H
#define CKSQLITECACHETABLE_H

@class NSDate, NSArray;


#import "CKSQLiteTable.h"

@interface CKSQLiteCacheTable : CKSQLiteTable {
    BOOL _expirationTimeEnabled;
    BOOL _entryCountLimitEnabled;
    BOOL _dataSizeLimitEnabled;
    NSDate *_cachedOldestExpirationDate;
    NSUInteger _cachedEntryCount;
    NSUInteger _dataSize;
    NSArray *_dataSizeProperties;
    NSInteger _pendingCountChange;
    NSInteger _pendingSizeChange;
    BOOL _isDatabaseAvailable;
    BOOL _inTransaction;
    BOOL _isExpiring;
}


@property (readonly, nonatomic) CGFloat cacheExpirationTime; // ivar: _cacheExpirationTime
@property (readonly, nonatomic) NSUInteger dataSizeLimit; // ivar: _dataSizeLimit
@property (readonly, nonatomic) NSUInteger entryCountLimit; // ivar: _entryCountLimit
@property (readonly, nonatomic) CGFloat expireDelay; // ivar: _expireDelay
@property (readonly, nonatomic) NSDate *lastExpireDate; // ivar: _lastExpireDate


+(id)dbProperties;
-(NSUInteger)dataSizeForEntry:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)deleteEntriesMatching:(id)arg0 label:(id)arg1 error:(*id)arg2 predicate:(id)arg3 ;
-(NSUInteger)expireByCount;
-(NSUInteger)expireByDataSize;
-(NSUInteger)expireByTime:(id)arg0 ;
-(NSUInteger)setProperties:(id)arg0 valuesToStore:(id)arg1 inEntriesMatching:(id)arg2 label:(id)arg3 error:(*id)arg4 predicate:(id)arg5 ;
-(id)extendExpiration:(id)arg0 ;
-(id)finishInitializing:(BOOL)arg0 ;
-(id)initWithLogicalTableName:(id)arg0 entryCountLimit:(NSUInteger)arg1 dataSizeLimit:(NSUInteger)arg2 expirationTime:(CGFloat)arg3 expireDelay:(CGFloat)arg4 ;
-(id)insertObject:(id)arg0 ;
-(id)newEntryObject;
-(id)oldestExpirationDate;
-(id)oldestFirstEnumerator;
-(id)performTransaction:(id)arg0 ;
-(id)setEntryExpiration:(id)arg0 date:(id)arg1 ;
-(void)expire;
-(void)fetchExpirationDate:(id)arg0 ;
-(void)periodicExpire;


@end


#endif