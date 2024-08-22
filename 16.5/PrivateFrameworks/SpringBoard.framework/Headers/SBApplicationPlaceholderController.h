// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPLICATIONPLACEHOLDERCONTROLLER_H
#define SBAPPLICATIONPLACEHOLDERCONTROLLER_H

@class NSMutableDictionary, NSMutableSet, NSCountedSet, NSString;
@protocol SBLeafIconObserver, SBApplicationPlaceholderLifecycleObserver, SBHProxiedApplicationPlaceholderDelegate;

#import <Foundation/Foundation.h>

#import "SBApplicationController.h"
#import "SBApplicationLibraryObserver.h"

@interface SBApplicationPlaceholderController : NSObject <SBLeafIconObserver, SBApplicationPlaceholderLifecycleObserver, SBHProxiedApplicationPlaceholderDelegate>

 {
    SBApplicationController *_appController;
    SBApplicationLibraryObserver *_lsWorkspaceObserver;
    NSMutableDictionary *_placeholdersByBundleID;
    NSMutableSet *_pendingAdded;
    NSMutableSet *_pendingInstalled;
    NSMutableSet *_pendingCancelled;
    NSCountedSet *_removingPlaceholderProxies;
    BOOL _hasDownloadedFromStore;
    BOOL _usingNetwork;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)hasDownloadedStoreApplication;
-(BOOL)isUsingNetwork;
-(BOOL)placeholderRepresentsNewAppInstallFromStore:(id)arg0 ;
-(BOOL)placeholderShouldAllowPausing:(id)arg0 ;
-(id)init;
-(id)placeholderForDisplayID:(id)arg0 ;
-(id)placeholdersByDisplayID;
-(void)_addPlaceholders:(id)arg0 ;
-(void)_finishPlaceholder:(id)arg0 ;
-(void)_postPlaceholdersDidChangeForAdded:(id)arg0 modified:(id)arg1 removed:(id)arg2 ;
-(void)_processPendingProxies;
-(void)_removePlaceholders:(id)arg0 forInstall:(BOOL)arg1 ;
-(void)applicationPlaceholdersAdded:(id)arg0 ;
-(void)applicationPlaceholdersCancelled:(id)arg0 ;
-(void)applicationPlaceholdersInstalled:(id)arg0 ;
-(void)applicationPlaceholdersNetworkUsageChanged:(BOOL)arg0 ;
-(void)dealloc;
-(void)iconAccessoriesDidUpdate:(id)arg0 ;
-(void)placeholderWantsUninstall:(id)arg0 ;


@end


#endif