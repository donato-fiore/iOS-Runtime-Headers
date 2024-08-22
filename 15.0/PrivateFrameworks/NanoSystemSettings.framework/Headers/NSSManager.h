// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSMANAGER_H
#define NSSMANAGER_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NSSManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalQueue; // ivar: _externalQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(void)displayAirplaneModeMirroringUserEducationAlert:(BOOL)arg0 ;
+(void)displayAlertFailedRemoteAirplaneMode:(BOOL)arg0 ;
+(void)displayAlertWithTitle:(id)arg0 body:(id)arg1 icon:(id)arg2 ;
-(BOOL)fileTransferInProgress:(id)arg0 ;
-(id)connection;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)protocol;
-(void)cancelDiagnosticLogTranfer:(id)arg0 withCompletion:(id)arg1 ;
-(void)cancelFileTransfersInProgress;
-(void)dealloc;
-(void)deleteDiagnosticLogFile:(id)arg0 withResult:(id)arg1 ;
-(void)enableAirplaneMode:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)getAboutInfo:(id)arg0 ;
-(void)getAccountsInfo:(id)arg0 ;
-(void)getAccountsInfoForAccountType:(id)arg0 completionHandler:(id)arg1 ;
-(void)getDiagnosticLogFileFromGizmo:(id)arg0 withResults:(id)arg1 ;
-(void)getDiagnosticLogsInfo:(id)arg0 ;
-(void)getLegalDocuments:(id)arg0 ;
-(void)getLocalesInfo:(id)arg0 ;
-(void)getProfileWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)getProfilesInfo:(id)arg0 ;
-(void)getUsage:(id)arg0 ;
-(void)getUsageData:(id)arg0 ;
-(void)getiCloudInfo:(id)arg0 ;
-(void)installProfile:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidate;
-(void)obliterateGizmo:(id)arg0 ;
-(void)obliterateGizmoPreservingeSIM:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)purgeUsageBundle:(id)arg0 completionHandler:(id)arg1 ;
-(void)purgeUsageBundleWithId:(id)arg0 completionHandler:(id)arg1 ;
-(void)rebootDevice;
-(void)recordSoftwareUpdateSpaceFailure:(id)arg0 osBeingUpdatedTo:(id)arg1 completion:(id)arg2 ;
-(void)removeProfileWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)retrieveAirplaneModeSettingsWithCompletionHandler:(id)arg0 ;
-(void)retrieveDiagnosticLogTransferProgress:(id)arg0 withProgress:(id)arg1 ;
-(void)setAirplaneModeSettings:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)setDeviceName:(id)arg0 ;
-(void)setSafetyXpcInterruptionHandlerBlock:(id)arg0 ;
-(void)unsafe_invalidate;


@end


#endif