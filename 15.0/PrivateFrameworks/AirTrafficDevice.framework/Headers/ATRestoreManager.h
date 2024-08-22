// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATRESTOREMANAGER_H
#define ATRESTOREMANAGER_H

@class MSVXPCTransaction, ATSession, NSString;
@protocol ICEnvironmentMonitorObserver, ATSessionObserver, ATRestoreAssetLinkDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATRestoreAssetLink.h"
#import "ATDeviceSettings.h"

@interface ATRestoreManager : NSObject <ICEnvironmentMonitorObserver, ATSessionObserver, ATRestoreAssetLinkDelegate>

 {
    ATRestoreAssetLink *_restoreLink;
    ATRestoreAssetLink *_applicationDataRestoreLink;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_checkRestoreStatusQueue;
    BOOL _cancelled;
    BOOL _iTunesRestoreActive;
    BOOL _iCloudRestoreActive;
    BOOL _deviceRestoreActive;
    MSVXPCTransaction *_xpcTransaction;
    ATDeviceSettings *_settings;
    ATSession *_restoreSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)_iCloudPhotoLibraryEnabled;
-(BOOL)hasProperNetworkConditions;
-(id)_dataClasses;
-(id)init;
-(void)_checkActiveRestoreStateWithCompletion:(id)arg0 ;
-(void)_start;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg0 ;
-(void)restoreAssetLinkDidCancelRestore:(id)arg0 ;
-(void)restoreAssetLinkNetworkPolicyDidChange:(id)arg0 ;
-(void)restoreSessionActiveWithCompletion:(id)arg0 ;
-(void)resume;
-(void)sessionDidFinish:(id)arg0 ;
-(void)setRestoreInProgress:(BOOL)arg0 ;


@end


#endif