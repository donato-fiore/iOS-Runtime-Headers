// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDCKRECORDSALTMANAGER_H
#define IMDCKRECORDSALTMANAGER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMDCKRecordSaltManager : NSObject

@property (retain) NSString *cachedSalt; // ivar: _cachedSalt
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // ivar: _ckQueue


+(id)sharedInstance;
-(id)_CKUtilitiesSharedInstance;
-(id)_container;
-(id)init;
-(void)_fetchLatestSaltFromCloudKitAndPersistWithCompletion:(id)arg0 ;
-(void)_scheduleOperation:(id)arg0 ;
-(void)clearLocalSyncState;
-(void)deleteDeDupeRecordZone;
-(void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(id)arg0 ;
// -(void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(id)arg0 forceFetch:(unk)arg1  ;


@end


#endif