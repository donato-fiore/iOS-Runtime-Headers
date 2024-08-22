// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKCLOUDPROVIDER_H
#define DKCLOUDPROVIDER_H

@class NSError, MBManager, NSProgress, BYBuddyDaemonCloudSyncClient, NSString, NWPathEvaluator, NSArray;
@protocol BYClientDaemonCloudSyncProtocol, MBManagerDelegate, DKCloudProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DKCloudProvider : NSObject <BYClientDaemonCloudSyncProtocol, MBManagerDelegate, DKCloudProvider>



@property (retain, nonatomic) NSError *backupError; // ivar: _backupError
@property (retain, nonatomic) MBManager *backupManager; // ivar: _backupManager
@property (retain, nonatomic) NSProgress *backupProgress; // ivar: _backupProgress
@property (retain, nonatomic) BYBuddyDaemonCloudSyncClient *cloudSyncClient; // ivar: _cloudSyncClient
@property (copy, nonatomic) id *completion; // ivar: _completion
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


-(BOOL)_isBackingUp;
-(BOOL)isRestoring;
-(NSUInteger)isUploadSupportedForCurrentNetwork;
-(id)init;
-(void)_communicateProgress;
// -(void)beginUploadAllowingExpensiveCellular:(BOOL)arg0 progressHandler:(id)arg1 completion:(unk)arg2  ;
-(void)cancelUpload;
-(void)hasDataToUpload:(id)arg0 ;
-(void)manager:(id)arg0 didFailBackupWithError:(id)arg1 ;
-(void)manager:(id)arg0 didUpdateProgress:(float)arg1 estimatedTimeRemaining:(NSUInteger)arg2 ;
-(void)managerDidFinishBackup:(id)arg0 ;
-(void)managerDidLoseConnectionToService:(id)arg0 ;
-(void)syncCompletedWithErrors:(id)arg0 ;
-(void)syncProgress:(CGFloat)arg0 ;


@end


#endif