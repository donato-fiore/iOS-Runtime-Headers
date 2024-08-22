// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIUISNIPPETMANAGER_H
#define SIRIUISNIPPETMANAGER_H

@class AFClientPluginManager, NSDictionary, NSString;
@protocol SRUIFSpeakableObjectProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SiriUISnippetManager : NSObject <SRUIFSpeakableObjectProviding>

 {
    AFClientPluginManager *_pluginManager;
    NSDictionary *_snippetExtensionsCache;
    NSObject<OS_dispatch_queue> *_snippetExtensionsQueue;
    NSObject<OS_dispatch_queue> *_pluginBundlesQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_compareObject:(id)arg0 toObject:(id)arg1 usingBlock:(id)arg2 ;
-(BOOL)_listItem:(id)arg0 isEqualToListItem:(id)arg1 ;
-(BOOL)_listItem:(id)arg0 isPreferredOverListItem:(id)arg1 ;
-(id)_createDebugViewControllerForAceObject:(id)arg0 ;
-(id)_snippetExtensionsCache;
-(id)disambiguationItemForListItem:(id)arg0 disambiguationKey:(id)arg1 ;
-(id)extensionForSnippet:(id)arg0 ;
-(id)filteredDisambiguationListItems:(id)arg0 ;
-(id)init;
-(id)listItemToPickInAutodisambiguationForListItems:(id)arg0 ;
-(id)snippetViewControllerForSnippet:(id)arg0 ;
-(id)speakableProviderForObject:(id)arg0 ;
-(id)transcriptItemForObject:(id)arg0 ;
-(id)transcriptItemForObject:(id)arg0 sizeClass:(NSInteger)arg1 ;
-(void)_prewarmSnippetExtensionsCacheSynchronously;
-(void)preloadPluginBundles;
-(void)prewarmSnippetExtensionsCache;


@end


#endif