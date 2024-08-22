// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDRECORDCACHEPOOL_H
#define CKDRECORDCACHEPOOL_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKDRecordCachePool : NSObject

@property (retain, nonatomic) NSMutableDictionary *dbsByURL; // ivar: _dbsByURL
@property (retain, nonatomic) NSMutableDictionary *expiringDbsByURL; // ivar: _expiringDbsByURL
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordExpiryQueue; // ivar: _recordExpiryQueue


+(id)performWithContainer:(id)arg0 scope:(NSInteger)arg1 block:(id)arg2 ;
+(id)sharedPool;
-(id)_dbForContainer:(id)arg0 error:(*id)arg1 ;
-(id)acquireCacheWithContainer:(id)arg0 scope:(NSInteger)arg1 error:(*id)arg2 ;
-(id)init;
-(void)_purgeRecordCachesForApplicationContainerURLs:(id)arg0 expiryDate:(id)arg1 ;
-(void)_schedulePurge;
-(void)releaseCache:(id)arg0 ;


@end


#endif