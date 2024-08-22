// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFCONTENTBLOCKERMANAGER_H
#define SFCONTENTBLOCKERMANAGER_H

@class NSSet, NSMutableSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFContentBlockerManager : NSObject {
    id *_extensionMatchingContext;
    NSSet *_extensions;
    NSMutableSet *_observers;
    BOOL _lastExtensionDiscoveryHadError;
    NSMutableDictionary *_extensionsRecompiledAfterBackup;
    NSObject<OS_dispatch_queue> *_recompilationInformationAccessQueue;
}


@property (readonly, nonatomic) NSSet *extensions;


+(id)_contentBlockerLoaderConnection;
+(id)contentBlockerStore;
+(id)sharedManager;
+(void)_createContentExtensionsDirectoryWithURL:(id)arg0 ;
+(void)getStateOfContentBlockerWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
+(void)reloadContentBlockerWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)_hasRecompilationBeenAttemptedForExtension:(id)arg0 ;
-(BOOL)extensionIsEnabled:(id)arg0 ;
-(id)_findNewExtensionsAdded:(id)arg0 toExistingExtensions:(id)arg1 ;
-(id)displayNameForExtension:(id)arg0 ;
-(id)init;
-(void)_addContentRuleList:(id)arg0 ;
-(void)_beginContentBlockerDiscovery;
-(void)_loadContentBlockerRecompilationInformationIfNeeded;
-(void)_loadContentBlockerWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)_loadDeclarativeNetRequestContentBlockers;
-(void)_noteRecompilationWasAttemptedForExtension:(id)arg0 ;
-(void)_recompileEnabledContentBlockersIfNeeded:(id)arg0 ;
-(void)_removeAllContentRuleLists;
-(void)_saveContentBlockerRecompilationInformation;
-(void)addContentRuleList:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)informObserversThatContentBlockerManagerExtensionListDidChange;
-(void)loadDeclarativeNetRequestContentBlockerWithIdentifier:(id)arg0 rules:(id)arg1 completionHandler:(id)arg2 ;
-(void)reloadUserContentController;
-(void)removeObserver:(id)arg0 ;
-(void)setExtension:(id)arg0 isEnabled:(BOOL)arg1 ;


@end


#endif