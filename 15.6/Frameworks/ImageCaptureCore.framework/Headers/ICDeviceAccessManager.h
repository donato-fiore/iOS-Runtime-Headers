// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDEVICEACCESSMANAGER_H
#define ICDEVICEACCESSMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICDeviceAccessManager : NSObject {
    *sqlite3 _externalMediaAccessDB;
}


@property NSObject<OS_dispatch_queue> *deviceAccessQueue; // ivar: _deviceAccessQueue


+(id)sharedAccessManager;
-(BOOL)applicationWithBundleIdentifierHasAccess:(id)arg0 enabled:(*BOOL)arg1 ;
-(BOOL)controlApplicationWithBundleIdentifierHasAccess:(id)arg0 ;
-(BOOL)internalApplicationWithBundleIdentifierHasAccess:(id)arg0 ;
-(BOOL)validateBundleIdentifier:(id)arg0 withNotification:(id)arg1 ;
-(BOOL)validateBundleIdentifierInstalled:(id)arg0 control:(BOOL)arg1 ;
-(BOOL)validateControlApplicationBundleIdentifier:(id)arg0 withNotification:(id)arg1 ;
-(id)bundleIdentifiersAccessingExternalCameras;
-(id)bundleIdentifiersAccessingExternalCamerasWithStatus;
-(id)bundleIdentifiersControllingExternalCameras;
-(id)init;
-(void)addApplicationWithBundleIdentifier:(id)arg0 whitelist:(BOOL)arg1 ;
-(void)addControlApplicationWithBundleIdentifier:(id)arg0 whitelisted:(BOOL)arg1 ;
-(void)dealloc;
-(void)displayAlertForApplication:(id)arg0 notificationDict:(id)arg1 completionBlock:(id)arg2 ;
-(void)revokeApplicationWithBundleIdentifier:(id)arg0 ;
-(void)revokeControlApplicationWithBundleIdentifier:(id)arg0 ;
-(void)updateApplicationWithBundleIdentifier:(id)arg0 withStatus:(BOOL)arg1 ;


@end


#endif