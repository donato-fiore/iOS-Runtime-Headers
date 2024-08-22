// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BYDEVICESETUPSOURCESESSION_H
#define BYDEVICESETUPSOURCESESSION_H

@class NSString, RPFileTransferSession, CUMessageSession;
@protocol BYBuddyDaemonProximitySourceProtocol, SASProximitySessionDelegate;

#import <Foundation/Foundation.h>

#import "BYBuddyDaemonProximitySourceClient.h"
#import "BYBuddyDaemonMigrationSourceClient.h"

@interface BYDeviceSetupSourceSession : NSObject <BYBuddyDaemonProximitySourceProtocol, SASProximitySessionDelegate>



@property CGFloat backupProgress; // ivar: _backupProgress
@property (retain) BYBuddyDaemonProximitySourceClient *client; // ivar: _client
@property NSUInteger currentPhase; // ivar: _currentPhase
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) RPFileTransferSession *fileTransferSessionTemplate; // ivar: _fileTransferSessionTemplate
@property BOOL hasBackupCompleted; // ivar: _hasBackupCompleted
@property BOOL hasSyncCompleted; // ivar: _hasSyncCompleted
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CUMessageSession *messageSession; // ivar: _messageSession
@property (retain, nonatomic) BYBuddyDaemonMigrationSourceClient *migrationSourceClient; // ivar: _migrationSourceClient
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (copy, nonatomic) id *sendObjectHandler; // ivar: _sendObjectHandler
@property (readonly) Class superclass;
@property CGFloat syncProgress; // ivar: _syncProgress
@property CGFloat timeRemaining; // ivar: _timeRemaining


-(void)activate;
-(void)backupCompletedWithError:(id)arg0 ;
-(void)backupProgress:(CGFloat)arg0 estimatedTimeRemaining:(NSInteger)arg1 ;
-(void)finishedWithError:(id)arg0 ;
-(void)invalidate;
-(void)receivedObject:(id)arg0 ;
-(void)syncCompletedWithErrors:(id)arg0 ;
-(void)syncProgress:(CGFloat)arg0 ;
-(void)updateProgress;


@end


#endif