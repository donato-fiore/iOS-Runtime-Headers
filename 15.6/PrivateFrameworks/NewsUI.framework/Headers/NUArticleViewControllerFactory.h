// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUARTICLEVIEWCONTROLLERFACTORY_H
#define NUARTICLEVIEWCONTROLLERFACTORY_H

@class NSString, NSHashTable;
@protocol NUArticleViewControllerFactory, SXAppStateMonitor, NUArticleDataProviderFactory, NUArticlePrefetcherType, NUArticleScrollPositionManagerType, NUDocumentSectionBlueprintProvider, NUArticleKeyCommandManager, TFResolver, NUSpotlightManager;

#import <Foundation/Foundation.h>


@interface NUArticleViewControllerFactory : NSObject <NUArticleViewControllerFactory>



@property (readonly, nonatomic) NSObject<SXAppStateMonitor> *appStateMonitor; // ivar: _appStateMonitor
@property (readonly, nonatomic) NSObject<NUArticleDataProviderFactory> *articleDataProviderFactory; // ivar: _articleDataProviderFactory
@property (readonly, nonatomic) NSObject<NUArticlePrefetcherType> *articlePrefetcher; // ivar: _articlePrefetcher
@property (readonly, nonatomic) NSObject<NUArticleScrollPositionManagerType> *articleScrollPositionManager; // ivar: _articleScrollPositionManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NUDocumentSectionBlueprintProvider> *headerBlueprintProvider; // ivar: _headerBlueprintProvider
@property (readonly, nonatomic) NSObject<NUArticleKeyCommandManager> *keyCommandManager; // ivar: _keyCommandManager
@property (readonly, nonatomic) NSHashTable *loadingListeners; // ivar: _loadingListeners
@property (readonly, nonatomic) NSObject<TFResolver> *resolver; // ivar: _resolver
@property (readonly, nonatomic) NSObject<NUSpotlightManager> *spotlightManager; // ivar: _spotlightManager
@property (readonly) Class superclass;


-(id)createArticleViewControllerWithArticle:(id)arg0 issue:(id)arg1 context:(id)arg2 articleHostViewController:(id)arg3 ;
-(id)initWithArticleDataProviderFactory:(id)arg0 appStateMonitor:(id)arg1 keyCommandManager:(id)arg2 headerBlueprintProvider:(id)arg3 articlePrefetcher:(id)arg4 articleScrollPositionManager:(id)arg5 spotlightManager:(id)arg6 resolver:(id)arg7 ;


@end


#endif