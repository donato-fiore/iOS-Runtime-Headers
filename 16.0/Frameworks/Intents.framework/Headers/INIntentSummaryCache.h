// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ININTENTSUMMARYCACHE_H
#define ININTENTSUMMARYCACHE_H

@class NSMutableDictionary, NSString;
@protocol LSApplicationWorkspaceObserverProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface INIntentSummaryCache : NSObject <LSApplicationWorkspaceObserverProtocol>



@property (readonly, nonatomic) NSMutableDictionary *allBundlesCache; // ivar: _allBundlesCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceAccessQueue; // ivar: _resourceAccessQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) int systemLanguageChangeNotificationToken; // ivar: _systemLanguageChangeNotificationToken


+(id)sharedCache;
-(BOOL)getSubtitle:(*id)arg0 forIntent:(id)arg1 languageCode:(id)arg2 ;
-(BOOL)getTitle:(*id)arg0 forIntent:(id)arg1 languageCode:(id)arg2 ;
-(id)bundleCacheForBundleId:(id)arg0 ;
-(id)cachedSummaryForIntent:(id)arg0 languageCode:(id)arg1 creatingIfNeeded:(BOOL)arg2 ;
-(id)init;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)dealloc;
-(void)invalidateCache;
-(void)invalidateCacheForBundleId:(id)arg0 ;
-(void)setBundleCache:(id)arg0 forBundleId:(id)arg1 ;
-(void)setSubtitle:(id)arg0 forIntent:(id)arg1 languageCode:(id)arg2 ;
-(void)setTitle:(id)arg0 forIntent:(id)arg1 languageCode:(id)arg2 ;
-(void)startAutomaticInvalidation;
-(void)startObservingApplicationWorkspaceChanges;
-(void)startObservingSystemLanguageChanges;
-(void)stopAutomaticInvalidation;
-(void)stopObservingApplicationWorkspaceChanges;
-(void)stopObservingSystemLanguageChanges;


@end


#endif