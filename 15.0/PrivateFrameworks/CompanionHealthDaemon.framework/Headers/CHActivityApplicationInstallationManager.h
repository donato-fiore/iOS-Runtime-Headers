// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHACTIVITYAPPLICATIONINSTALLATIONMANAGER_H
#define CHACTIVITYAPPLICATIONINSTALLATIONMANAGER_H

@class HDProfile, ASDSystemAppRequest, NSString;
@protocol HDHealthDaemonReadyObserver, HDNanoSyncManagerObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CHActivityApplicationInstallationManager : NSObject <HDHealthDaemonReadyObserver, HDNanoSyncManagerObserver>

 {
    HDProfile *_profile;
    BOOL _installationRequestInProgress;
    ASDSystemAppRequest *_systemAppRequest;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithProfile:(id)arg0 ;
-(void)_applicationsInstalled:(id)arg0 ;
-(void)_applicationsUninstalled:(id)arg0 ;
-(void)_cleanupInstallRequest;
-(void)_queue_cleanupInstallRequest;
-(void)_queue_requestActivityAppInstallIfNecessaryWithPairedDeviceSnapshot:(id)arg0 ;
-(void)_queue_startInstalling;
-(void)_requestActivityAppInstallIfNecessaryWithPairedDeviceSnapshot:(id)arg0 ;
-(void)_setAndNotifyStickersAvailable:(BOOL)arg0 ;
-(void)daemonReady:(id)arg0 ;
-(void)dealloc;
-(void)nanoSyncManager:(id)arg0 pairedDevicesChanged:(id)arg1 ;


@end


#endif