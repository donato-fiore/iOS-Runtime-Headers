// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDRECORDCACHE_H
#define CKDRECORDCACHE_H

@class CKSQLite, NSNumber, NSDate;

#import <Foundation/Foundation.h>

#import "CKDContainer.h"

@interface CKDRecordCache : NSObject

@property (weak, nonatomic) CKDContainer *container; // ivar: _container
@property (retain, nonatomic) CKSQLite *db; // ivar: _db
@property (retain, nonatomic) NSNumber *explicitCacheSizeLimit; // ivar: _explicitCacheSizeLimit
@property (retain, nonatomic) NSDate *lastExpiryAttempt; // ivar: _lastExpiryAttempt
@property (nonatomic) NSInteger scope; // ivar: _scope


+(id)_expiryDateFormatter;
-(BOOL)_cachedRecordHasValidAssets:(id)arg0 forRequiredKeys:(id)arg1 ;
-(BOOL)_cachedRecordKnownUserKeyData:(id)arg0 satisfiesRequiredKeys:(id)arg1 ;
-(NSUInteger)_lockedSizeOfAllRecordsInDb;
-(NSUInteger)numberOfRecordsWithID:(id)arg0 ;
-(NSUInteger)recordCacheSizeLimit;
-(id)_dsid;
-(id)_recordWithID:(id)arg0 requiredKeys:(id)arg1 ;
-(id)_trimRecord:(id)arg0 toRequiredKeys:(id)arg1 ;
-(id)etagForRecordID:(id)arg0 requiredKeys:(id)arg1 ;
-(id)initWithDatabase:(id)arg0 container:(id)arg1 scope:(NSInteger)arg2 ;
-(id)recordWithID:(id)arg0 requiredKeys:(id)arg1 ;
-(id)recordsWithIDs:(id)arg0 requiredKeys:(id)arg1 ;
-(void)_attemptRecordExpiryIfNeeded;
-(void)addRecord:(id)arg0 knownUserKeys:(id)arg1 ;
-(void)clearAllRecords;
-(void)clearAllRecordsForZoneWithID:(id)arg0 ;
-(void)clearAllRecordsInScope;
-(void)clearAssetAuthTokensForRecord:(id)arg0 ;
-(void)clearAssetAuthTokensForRecordWithID:(id)arg0 ;
-(void)deleteRecordWithID:(id)arg0 ;
-(void)releaseDatabase;
-(void)replaceDatabase:(id)arg0 ;
-(void)scheduleRecordExpirationWithExpiryDate:(id)arg0 ;


@end


#endif