// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKGREENFIELDCOMPANIONAPPINSTALLATIONMONITOR_H
#define NTKGREENFIELDCOMPANIONAPPINSTALLATIONMONITOR_H

@class NSString;
@protocol LSApplicationWorkspaceObserverProtocol, NTKFaceCollectionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NTKFaceCollection.h"

@interface NTKGreenfieldCompanionAppInstallationMonitor : NSObject <LSApplicationWorkspaceObserverProtocol, NTKFaceCollectionObserver>

 {
    BOOL _isRunning;
    BOOL _isObservingApplicationWorkspace;
    BOOL _isObservingWatchApps;
    BOOL _hasReloadedSinceObserving;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NTKFaceCollection *_library;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedMonitor;
-(id)_existingPlaceholderItemIds;
-(id)_queue_calculatePendingRemovalItemIdsWithExistingPlaceholderIds:(id)arg0 ;
-(id)_queue_fetchInstalledWatchAppsItemIds;
-(id)_queue_fetchNotInstalledWatchAppStatus;
-(id)init;
-(void)_reloadInstallingAppsOnPhoneAndWatch;
-(void)_removePlaceholderComplicationWithItemIds:(id)arg0 ;
-(void)_toggleObserving;
-(void)applicationInstallsDidCancel:(id)arg0 ;
-(void)applicationInstallsDidStart:(id)arg0 ;
-(void)applicationsDidFailToInstall:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)dealloc;
-(void)faceCollection:(id)arg0 didAddFace:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)faceCollection:(id)arg0 didRemoveFace:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)faceCollectionDidLoad:(id)arg0 ;
-(void)fetchInstalledAppsOnWatchWithCompletionBlock:(id)arg0 ;
-(void)handleAddFaceManagerDidUpdateFaceLibrary;
-(void)start;


@end


#endif