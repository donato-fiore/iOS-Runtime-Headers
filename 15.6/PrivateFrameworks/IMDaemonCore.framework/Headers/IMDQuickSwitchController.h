// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDQUICKSWITCHCONTROLLER_H
#define IMDQUICKSWITCHCONTROLLER_H

@class NSString, IDSService, PSYSyncCoordinator;
@protocol PSYSyncCoordinatorDelegate, IDSServiceDelegate;

#import <Foundation/Foundation.h>


@interface IMDQuickSwitchController : NSObject <PSYSyncCoordinatorDelegate, IDSServiceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IDSService *quickSwitchIDSService; // ivar: _quickSwitchIDSService
@property (readonly) Class superclass;
@property (retain, nonatomic) PSYSyncCoordinator *syncCoordinator; // ivar: _syncCoordinator


+(id)sharedInstance;
-(BOOL)_isPairedDeviceInProxyMode;
-(BOOL)_sendIDSFile:(id)arg0 withCommand:(NSInteger)arg1 ;
-(BOOL)_sendIDSMessage:(id)arg0 ;
-(BOOL)_sendZippedFileAtPath:(id)arg0 withCommand:(NSInteger)arg1 ;
-(BOOL)_supportsQuickSwitchWithPairedDevice;
-(BOOL)_truncateDBToPath:(id)arg0 ;
-(NSInteger)_getCurrentDBVersion;
-(NSUInteger)_getFileSizeAtPath:(id)arg0 ;
-(id)_defaultPairedDevice;
-(id)_getDowngradedDBPath;
-(id)_getTempDBPath;
-(id)_getTempRecentsPath;
-(id)_getTruncatedDBPath;
-(id)_getZippedDBPath;
-(id)_getZippedRecentsPath;
-(id)init;
-(void)_cleanUpTemporaryFiles;
-(void)_compressFileAtPath:(id)arg0 toPath:(id)arg1 withCompletionBlock:(id)arg2 ;
-(void)_decompressFileAtPath:(id)arg0 toPath:(id)arg1 withCompletionBlock:(id)arg2 ;
-(void)_deleteFileAtPath:(id)arg0 ;
-(void)_handleDBVersionResponse:(id)arg0 ;
-(void)_handleIncomingDB:(id)arg0 ;
-(void)_handleIncomingRecents:(id)arg0 ;
-(void)_handleQuickSwitchCompleted:(id)arg0 ;
-(void)_handleQuickSwitchInitiateRequest;
-(void)_handleRecentsRequest;
-(void)_initiateQuickSwitch;
-(void)_notifyPSYDataSent;
-(void)_notifyPSYWithResult:(BOOL)arg0 ;
-(void)_quickSwitchCompleted:(BOOL)arg0 ;
-(void)_sendDBVersionResponse:(NSInteger)arg0 ;
-(void)_sendQuickSwitchCompletedWithResult:(BOOL)arg0 ;
-(void)_sendRecentsRequest;
-(void)dealloc;
-(void)dummyMethod;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingData:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingResourceAtURL:(id)arg2 metadata:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)syncCoordinator:(id)arg0 beginSyncSession:(id)arg1 ;


@end


#endif