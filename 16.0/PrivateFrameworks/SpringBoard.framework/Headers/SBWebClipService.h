// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBWEBCLIPSERVICE_H
#define SBWEBCLIPSERVICE_H

@class FBServiceClientAuthenticator, BSServiceConnectionListener, NSMutableArray, NSString, NSNumber;
@protocol BSServiceConnectionListenerDelegate, SBSWebClipServiceClientToServerInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBMainWorkspace.h"
#import "SBMainDisplaySceneManager.h"
#import "SBApplicationPlaceholderController.h"
#import "SBApplicationController.h"
#import "SBLockScreenManager.h"

@interface SBWebClipService : NSObject <BSServiceConnectionListenerDelegate, SBSWebClipServiceClientToServerInterface>

 {
    SBMainWorkspace *_workspace;
    SBMainDisplaySceneManager *_sceneManager;
    SBApplicationPlaceholderController *_placeholderController;
    SBApplicationController *_applicationController;
    SBLockScreenManager *_lockScreenManager;
    FBServiceClientAuthenticator *_legacyClientAuthenticator;
    FBServiceClientAuthenticator *_clientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSMutableArray *_connections;
    NSUInteger _pendingLaunchGenerationCount;
    NSString *_pendingBundleIdentifier;
    NSString *_pendingWebClipIdentifier;
    NSNumber *_pendingLaunchOrigin;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat pendingLaunchTimeout; // ivar: _pendingLaunchTimeout
@property (readonly) Class superclass;


+(id)bestWebClipForTargetContentIdentifier:(id)arg0 fromWebClips:(id)arg1 ;
-(id)initForTestingWithPlaceholderController:(id)arg0 applicationController:(id)arg1 ;
-(id)initWithWorkspace:(id)arg0 sceneManager:(id)arg1 placeholderController:(id)arg2 applicationController:(id)arg3 lockScreenManager:(id)arg4 ;
-(void)_applicationsDidChange:(id)arg0 ;
-(void)_beginWaitingForBundleIdentifier:(id)arg0 webClipIdentifier:(id)arg1 launchOrigin:(id)arg2 ;
-(void)_clearPendingLaunch;
-(void)_generateUserActivityDataFromUserActivity:(id)arg0 completion:(id)arg1 ;
-(void)_placeholdersDidChange:(id)arg0 ;
-(void)_queue_addConnection:(id)arg0 ;
-(void)_queue_removeConnection:(id)arg0 ;
-(void)buildLaunchActionsForAppClipWithWebClipIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)launchWebClipWithIdentifier:(id)arg0 origin:(id)arg1 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)prepareToLaunchWebClipWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)updateWebClipPropertiesWithIdentifier:(id)arg0 ;


@end


#endif