// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKCLOUDPROVIDER_H
#define DKCLOUDPROVIDER_H

@class NSProgress, NSArray, NSMutableArray, BYBuddyDaemonCloudSyncClient, NSString, NWPathEvaluator;
@protocol BYClientDaemonCloudSyncProtocol, DKCloudProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DKBackupProvider.h"

@interface DKCloudProvider : NSObject <BYClientDaemonCloudSyncProtocol, DKCloudProvider>



@property (retain, nonatomic) NSProgress *backupProgress; // ivar: _backupProgress
@property (retain, nonatomic) NSArray *backupProviders; // ivar: _backupProviders
@property (retain, nonatomic) NSMutableArray *backupResults; // ivar: _backupResults
@property (retain, nonatomic) BYBuddyDaemonCloudSyncClient *cloudSyncClient; // ivar: _cloudSyncClient
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) DKBackupProvider *currentBackupProvider; // ivar: _currentBackupProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL notifiedCompletion; // ivar: _notifiedCompletion
@property (retain, nonatomic) NWPathEvaluator *pathEvaluator; // ivar: _pathEvaluator
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (copy, nonatomic) NSObject<OS_dispatch_queue> *progressQueue; // ivar: _progressQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *syncErrors; // ivar: _syncErrors
@property (retain, nonatomic) NSProgress *syncProgress; // ivar: _syncProgress
@property (nonatomic) CGFloat timeRemaining; // ivar: _timeRemaining


-(BOOL)isRestoring;
-(NSUInteger)isUploadSupportedForCurrentNetwork;
-(id)init;
-(void)_communicateProgress;
-(void)_startBackupForProvider:(id)arg0 remainingProviders:(id)arg1 allowExpensiveCellular:(BOOL)arg2 ;
-(void)_startBackupWithProviders:(id)arg0 allowExpensiveCellular:(BOOL)arg1 ;
// -(void)beginUploadAllowingExpensiveCellular:(BOOL)arg0 progressHandler:(id)arg1 completion:(unk)arg2  ;
-(void)cancelUpload;
-(void)hasDataToUpload:(id)arg0 ;
-(void)syncCompletedWithErrors:(id)arg0 ;
-(void)syncProgress:(CGFloat)arg0 ;


@end


#endif