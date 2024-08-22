// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKAPPINSTALLATIONWATCHER_H
#define CKAPPINSTALLATIONWATCHER_H

@class NSString, NSArray, NSMutableArray;
@protocol LSApplicationWorkspaceObserverProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKAppInstallationWatcher : NSObject <LSApplicationWorkspaceObserverProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *inProgressInstallations;
@property (retain, nonatomic) NSMutableArray *installations; // ivar: _installations
@property (retain, nonatomic) NSMutableArray *observers; // ivar: _observers
@property (nonatomic) BOOL observingApplicationWorkspace; // ivar: _observingApplicationWorkspace
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_applicationWorkspace;
-(id)init;
-(void)_callDelegateAsynchronouslyWithProgressForAppInstallation:(id)arg0 added:(BOOL)arg1 updated:(BOOL)arg2 ;
-(void)_loadBundleIdentifiersFromDiskLocked;
-(void)_saveBundleIdentifiersToDiskLocked;
-(void)_updateAppProgressWithKnownChangedProxies:(id)arg0 ;
-(void)_updateAppProgressWithKnownChangedProxiesLocked:(id)arg0 ;
-(void)_updateObservingApplicationWorkspaceLocked;
-(void)addObserver:(id)arg0 ;
-(void)applicationInstallsDidChange:(id)arg0 ;
-(void)applicationInstallsDidStart:(id)arg0 ;
-(void)applicationInstallsDidUpdateIcon:(id)arg0 ;
-(void)applicationStateDidChange:(id)arg0 ;
-(void)applicationsDidFailToInstall:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsWillInstall:(id)arg0 ;
-(void)dealloc;
-(void)fetchAllAppInstallations:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)startListeningForAppBundleIdentifier:(id)arg0 ;


@end


#endif