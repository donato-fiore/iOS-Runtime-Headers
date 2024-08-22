// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _KSCLOUDKITMANAGER_H
#define _KSCLOUDKITMANAGER_H

@class CKContainer, CKDatabase, NSString, CKRecordZone;
@protocol OS_dispatch_queue, _KSCloudKitManagerDelegate;

#import <Foundation/Foundation.h>

#import "_KSRequestThrottle.h"

@interface _KSCloudKitManager : NSObject {
    NSObject<OS_dispatch_queue> *_ckWorkQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
    _KSRequestThrottle *_accountChangeThrottle;
    _KSRequestThrottle *_fetchZoneThrottle;
}


@property (retain, nonatomic) CKContainer *cloudKitContainer; // ivar: _cloudKitContainer
@property (retain, nonatomic) CKDatabase *cloudKitDatabase; // ivar: _cloudKitDatabase
@property (weak, nonatomic) NSObject<_KSCloudKitManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *lastKnownUserKey; // ivar: _lastKnownUserKey
@property (retain, nonatomic) CKDatabase *publicDatabase; // ivar: _publicDatabase
@property (retain, nonatomic) CKRecordZone *recordZone; // ivar: _recordZone
@property (readonly, nonatomic) NSString *recordZoneKey; // ivar: _recordZoneKey
@property (nonatomic) BOOL recordZoneOperationInProgress; // ivar: _recordZoneOperationInProgress
@property (readonly, nonatomic) NSString *subscriptionKey; // ivar: _subscriptionKey
@property (nonatomic) BOOL subscriptionOperationInProgress; // ivar: _subscriptionOperationInProgress


+(id)prepareContainerForID:(id)arg0 ;
-(BOOL)isAccountAvailable;
-(BOOL)needsDeviceToDevice;
-(id)init;
-(id)initWithContainer:(id)arg0 recordZoneName:(id)arg1 ;
-(id)initWithRecordZoneName:(id)arg0 ;
-(id)recordIDForName:(id)arg0 ;
-(id)recordWithName:(id)arg0 type:(id)arg1 attributes:(id)arg2 ;
-(id)recordWithName:(id)arg0 type:(id)arg1 attributes:(id)arg2 encryptedFields:(id)arg3 ;
-(id)recordWithName:(id)arg0 type:(id)arg1 cloudData:(id)arg2 attributes:(id)arg3 ;
-(id)recordWithName:(id)arg0 type:(id)arg1 cloudData:(id)arg2 attributes:(id)arg3 encryptedFields:(id)arg4 ;
-(id)resolveConflicts:(id)arg0 ;
// -(void)_checkAccountStatusWithCompletionHandler:(id)arg0 withRetryCount:(unk)arg1  ;
-(void)_ckDeleteRecordZoneWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)_ckFetchRecordZoneWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)_ckSaveRecordZone:(id)arg0 completionHandler:(id)arg1 ;
-(void)_inconvenientOperation:(id)arg0 ;
// -(void)_submitFetchRecordsOperation:(id)arg0 withPriority:(NSUInteger)arg1 changeToken:(id)arg2 completionHandler:(id)arg3 retryCount:(unk)arg4  ;
-(void)accountStatusDidChange:(id)arg0 ;
-(void)addOperation:(id)arg0 ;
-(void)addOperation:(id)arg0 priority:(NSUInteger)arg1 ;
-(void)copyFieldsFromRecord:(id)arg0 toRecord:(id)arg1 ;
-(void)dealloc;
-(void)fetchPublicRecordsWithNames:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchRecordsWithPriority:(NSUInteger)arg0 changeToken:(id)arg1 completionHandler:(id)arg2 ;
// -(void)fetchRecordsWithPriority:(NSUInteger)arg0 changeToken:(id)arg1 completionHandler:(id)arg2 retryCount:(unk)arg3  ;
-(void)identityUpdated:(id)arg0 ;
-(void)queryAccountStatusWithCompletionHandler:(id)arg0 ;
-(void)resetZoneWithDelete:(NSUInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)setupAccountDidChange:(BOOL)arg0 ;
// -(void)setupRecordZoneWithCompletionHandler:(id)arg0 ignoreDefaults:(unk)arg1  ;
-(void)setupSubscription;
-(void)shouldDetectAccountChangeWithResponse:(id)arg0 ;
-(void)updateRecords:(id)arg0 deleteRecordIDs:(id)arg1 withPriority:(NSUInteger)arg2 completionHandler:(id)arg3 ;
// -(void)updateRecords:(id)arg0 deleteRecordIDs:(id)arg1 withPriority:(NSUInteger)arg2 completionHandler:(id)arg3 retryCount:(unk)arg4  ;
-(void)userIdentityWithResponse:(id)arg0 ;


@end


#endif