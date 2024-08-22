// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NBMANAGER_H
#define NBMANAGER_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NBManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalQueue; // ivar: _externalQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(void)initialize;
-(BOOL)getBackupsStatus;
-(id)connection;
-(id)deleteBackup:(id)arg0 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)restoreFromBackup:(id)arg0 forDevice:(id)arg1 ;
-(id)restoreFromDevice:(id)arg0 forDevice:(id)arg1 ;
-(void)createBackupForDevice:(id)arg0 completionHandler:(id)arg1 ;
-(void)createBackupForDevice:(id)arg0 synchronousCompletionHandler:(id)arg1 ;
-(void)createBackupForPairingID:(id)arg0 completionHandler:(id)arg1 ;
-(void)createBackupForPairingID:(id)arg0 synchronousCompletionHandler:(id)arg1 ;
-(void)createManualBackupWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)deleteBackup:(id)arg0 completionHandler:(id)arg1 ;
-(void)listBackupsOfType:(NSUInteger)arg0 timeout:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)listBackupsOfType:(NSUInteger)arg0 withSynchronousCompletionHandler:(id)arg1 ;
-(void)listBackupsWithCompletionHandler:(id)arg0 ;
-(void)listBackupsWithSynchronousCompletionHandler:(id)arg0 ;
-(void)listBackupsWithTimeout:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)restoreFromBackup:(id)arg0 forDevice:(id)arg1 completionHandler:(id)arg2 ;
-(void)restoreFromDevice:(id)arg0 forDevice:(id)arg1 completionHandler:(id)arg2 ;
-(void)setBackupsEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)unsafe_invalidate;


@end


#endif