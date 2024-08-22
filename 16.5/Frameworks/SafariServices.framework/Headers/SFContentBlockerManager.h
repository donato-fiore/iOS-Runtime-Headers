// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCONTENTBLOCKERMANAGER_H
#define SFCONTENTBLOCKERMANAGER_H

@class NSSet, NSMutableSet, NSMutableDictionary, WBSPersistentPropertyListStore, NSString;
@protocol WBSCloudExtensionStateProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFContentBlockerManager : NSObject <WBSCloudExtensionStateProvider>

 {
    id *_extensionMatchingContext;
    NSSet *_extensions;
    NSMutableSet *_observers;
    BOOL _lastExtensionDiscoveryHadError;
    NSMutableDictionary *_extensionsRecompiledAfterBackup;
    NSObject<OS_dispatch_queue> *_recompilationInformationAccessQueue;
    WBSPersistentPropertyListStore *_contentBlockerStateStore;
    BOOL _contentBlockerStateStoreRequiresReload;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *enabledExtensions;
@property (readonly, nonatomic) NSSet *extensions;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_contentBlockerLoaderConnection;
+(id)contentBlockerStore;
+(id)sharedManager;
+(void)_createContentExtensionsDirectoryWithURL:(id)arg0 ;
+(void)_loadContentBlockerWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
+(void)getStateOfContentBlockerWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
+(void)reloadContentBlockerWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)_hasRecompilationBeenAttemptedForExtension:(id)arg0 ;
-(BOOL)extensionIsEnabled:(id)arg0 ;
-(BOOL)hasExtensionWithComposedIdentifier:(id)arg0 ;
-(id)_contentBlockerWithComposedIdentifier:(id)arg0 ;
-(id)_findNewExtensionsAdded:(id)arg0 toExistingExtensions:(id)arg1 ;
-(id)cloudExtensionStateForStateManager:(id)arg0 ;
-(id)displayNameForExtension:(id)arg0 ;
-(id)init;
-(void)_addContentRuleList:(id)arg0 forWebExtension:(id)arg1 ;
-(void)_beginContentBlockerDiscovery;
-(void)_contentBlockerEnabledStateDidChange:(id)arg0 ;
-(void)_loadContentBlockerRecompilationInformationIfNeeded;
-(void)_loadContentBlockerStateFromDisk;
-(void)_loadDeclarativeNetRequestContentBlockers;
-(void)_noteRecompilationWasAttemptedForExtension:(id)arg0 ;
-(void)_recompileEnabledContentBlockersIfNeeded:(id)arg0 ;
-(void)_removeAllContentRuleLists;
-(void)_saveContentBlockerRecompilationInformation;
-(void)_updateContentBlockerStateFromDiscoveredContentBlockers:(id)arg0 ;
-(void)addContentRuleList:(id)arg0 forExtension:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)informObserversThatContentBlockerManagerExtensionListDidChange;
-(void)loadDeclarativeNetRequestContentBlockerWithIdentifier:(id)arg0 rules:(id)arg1 completionHandler:(id)arg2 ;
-(void)reloadUserContentControllerReadingStateFromDisk:(BOOL)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)savePendingChangesBeforeTermination;
-(void)setExtension:(id)arg0 isEnabled:(BOOL)arg1 byUserGesture:(BOOL)arg2 ;
-(void)setExtensionWithComposedIdentifier:(id)arg0 isEnabledInCloud:(BOOL)arg1 ;


@end


#endif