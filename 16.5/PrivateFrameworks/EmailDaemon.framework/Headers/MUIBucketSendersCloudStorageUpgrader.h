// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUIBUCKETSENDERSCLOUDSTORAGEUPGRADER_H
#define MUIBUCKETSENDERSCLOUDSTORAGEUPGRADER_H

@class CNContactStore, NSString, NSArray;
@protocol EFContentProtectionObserver, MUIBucketSendersCloudStorageUpgraderDelegate, OS_dispatch_queue, EFAssertableScheduler;

#import <Foundation/Foundation.h>

#import "MUIBucketSenderCloudStorage.h"

@interface MUIBucketSendersCloudStorageUpgrader : NSObject <EFContentProtectionObserver>



@property (readonly, nonatomic) MUIBucketSenderCloudStorage *cloudStorage; // ivar: _cloudStorage
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<MUIBucketSendersCloudStorageUpgraderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL observingContentProtection; // ivar: _observingContentProtection
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSObject<EFAssertableScheduler> *scheduler; // ivar: _scheduler
@property (readonly, nonatomic) NSArray *sentMailboxURLs; // ivar: _sentMailboxURLs
@property (readonly) Class superclass;


-(BOOL)_canAccessDatabase;
-(BOOL)_hasBeenUpgraded;
-(BOOL)_upgrade;
-(id)initWithDelegate:(id)arg0 senderCloudStorage:(id)arg1 sentMailboxURLs:(id)arg2 contactStore:(id)arg3 ;
-(void)_markUpgradeComplete;
-(void)_resetDatabaseAndCloud;
-(void)_verifyDatabaseAccessAndPerformUpgrade;
-(void)contentProtectionStateChanged:(NSInteger)arg0 previousState:(NSInteger)arg1 ;
-(void)performUpgradeIfNecessary;


@end


#endif