// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPCLOUDSYNCHRONIZER_H
#define MSPCLOUDSYNCHRONIZER_H

@class NSString, NSUUID, NSArray;
@protocol MSPCloudSynchronizerRunConditionsDelegate, MSPCloudNotificationReceiver, MSPCloudSynchronizerDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "MSPCloudClientRegistration.h"
#import "MSPCloudKitAccountAccess.h"
#import "MSPJournal.h"
#import "MSPCloudMigrator.h"
#import "MSPCloudSynchronizerRunConditions.h"

@interface MSPCloudSynchronizer : NSObject <MSPCloudSynchronizerRunConditionsDelegate, MSPCloudNotificationReceiver>



@property (retain, nonatomic) NSString *accountID; // ivar: _accountID
@property (retain, nonatomic) NSUUID *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) MSPCloudClientRegistration *clientRegistration; // ivar: _clientRegistration
@property (retain, nonatomic) MSPCloudKitAccountAccess *cloudAccess; // ivar: _cloudAccess
@property (retain, nonatomic) NSArray *containers; // ivar: _containers
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MSPCloudSynchronizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasMigrated; // ivar: _hasMigrated
@property (nonatomic) BOOL hasMigratedPreSync; // ivar: _hasMigratedPreSync
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRunning; // ivar: _isRunning
@property (retain, nonatomic) MSPJournal *journal; // ivar: _journal
@property (nonatomic) NSUInteger lastRetryInterval; // ivar: _lastRetryInterval
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mergeQueue; // ivar: _mergeQueue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *mergeTimer; // ivar: _mergeTimer
@property (retain, nonatomic) MSPCloudMigrator *migrator; // ivar: _migrator
@property (retain, nonatomic) MSPCloudSynchronizerRunConditions *runConditions; // ivar: _runConditions
@property (readonly) Class superclass;


-(BOOL)isCurrentlyRunning;
-(NSUInteger)retryIntervalForError:(id)arg0 ;
-(id)initWithCloudContainers:(id)arg0 clientRegistration:(id)arg1 runConditions:(id)arg2 cloudAccess:(id)arg3 ;
-(id)initWithContainers:(id)arg0 ;
-(id)initWithDefaultLocalContainers;
-(id)initWithDefaultRemoteContainers;
-(void)_merge;
-(void)dealloc;
-(void)didReceiveRemoteNotification:(id)arg0 ;
-(void)handleAccountChangeWithError:(id)arg0 completion:(id)arg1 ;
-(void)merge;
-(void)performMigrationsWithCompletion:(id)arg0 ;
-(void)performPreSyncMigrations:(id)arg0 ;
-(void)prepareForMergeWithGroup:(id)arg0 completion:(id)arg1 ;
-(void)requestMerge;
-(void)requestMergeWithReason:(NSUInteger)arg0 ;
-(void)requestMergeWithReason:(NSUInteger)arg0 afterDelay:(NSUInteger)arg1 ;
-(void)runConditionsChanged:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif