// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BYDEVICEMIGRATIONMANAGER_H
#define BYDEVICEMIGRATIONMANAGER_H

@class MBDeviceTransferConnectionInfo, NSHashTable, MBDeviceTransferTask, NSError, RPFileTransferSession, BKSProcessAssertion, MBDeviceTransferProgress;
@protocol OS_voucher, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BYDeviceMigrationManager : NSObject

@property (nonatomic) NSUInteger bytesTransferred; // ivar: _bytesTransferred
@property (nonatomic) NSInteger cancellationCause; // ivar: _cancellationCause
@property (retain, nonatomic) NSObject<OS_voucher> *clientVoucher; // ivar: _clientVoucher
@property (retain, nonatomic) MBDeviceTransferConnectionInfo *connectionInfo; // ivar: _connectionInfo
@property (retain, nonatomic) NSHashTable *delegates; // ivar: _delegates
@property (nonatomic) *__MKBAssertion deviceLockAssertion; // ivar: _deviceLockAssertion
@property (retain, nonatomic) MBDeviceTransferTask *deviceTransferTask; // ivar: _deviceTransferTask
@property (nonatomic) CGFloat durationOfRestore; // ivar: _durationOfRestore
@property (nonatomic) CGFloat durationOfTransfer; // ivar: _durationOfTransfer
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) RPFileTransferSession *fileTransferSession; // ivar: _fileTransferSession
@property (nonatomic) NSUInteger filesTransferred; // ivar: _filesTransferred
@property (nonatomic, getter=isMigrating) BOOL migrating; // ivar: _migrating
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *migrationQueue; // ivar: _migrationQueue
@property (nonatomic) int passcodeChangeNotificationToken; // ivar: _passcodeChangeNotificationToken
@property (retain, nonatomic) BKSProcessAssertion *processAssertion; // ivar: _processAssertion
@property (retain, nonatomic) MBDeviceTransferProgress *progressInfo; // ivar: _progressInfo
@property (nonatomic) BOOL willMigrate; // ivar: _willMigrate


+(id)createDeviceTransferTask:(id)arg0 ;
-(BOOL)_hasAssertions;
-(BOOL)requiresProcessAssertion;
-(BOOL)takeAssertions;
-(id)initWithFileTranferSession:(id)arg0 ;
-(struct __MKBAssertion *)acquireDeviceLockAssertion;
-(void)_reacquireDeviceLockAssertion;
-(void)addDelegate:(id)arg0 ;
-(void)cancelDeviceTransferTask;
-(void)cancelWithCause:(NSInteger)arg0 ;
-(void)dealloc;
-(void)didCancel;
-(void)didCompleteWithError:(id)arg0 ;
-(void)releaseAssertions;
-(void)removeDelegate:(id)arg0 ;
-(void)restartDeviceTransferTask:(id)arg0 ;
-(void)start;
-(void)startDeviceTransferTask;


@end


#endif