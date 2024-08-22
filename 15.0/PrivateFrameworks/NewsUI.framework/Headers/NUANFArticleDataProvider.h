// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUANFARTICLEDATAPROVIDER_H
#define NUANFARTICLEDATAPROVIDER_H

@class FCArticle, NSString, NFEventManager, NSArray;
@protocol NUArticleDataProvider, FCContentContext, NUEmbedDataManager, NUFontRegistration, SXHost;

#import <Foundation/Foundation.h>

#import "NUANFAssetLoader.h"
#import "NUANFContextLoader.h"
#import "NUANFFontLoader.h"
#import "NULinkedContentManager.h"

@interface NUANFArticleDataProvider : NSObject <NUArticleDataProvider>



@property (retain, nonatomic) FCArticle *article; // ivar: _article
@property (copy, nonatomic) NSString *articleID; // ivar: _articleID
@property (retain, nonatomic) NUANFAssetLoader *assetLoader; // ivar: _assetLoader
@property (readonly, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (retain, nonatomic) NUANFContextLoader *contextLoader; // ivar: _contextLoader
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<NUEmbedDataManager> *embedDataManger; // ivar: _embedDataManger
@property (retain, nonatomic) NFEventManager *eventManager; // ivar: _eventManager
@property (retain, nonatomic) NUANFFontLoader *fontLoader; // ivar: _fontLoader
@property (readonly, nonatomic) NSObject<NUFontRegistration> *fontRegistration; // ivar: _fontRegistration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXHost> *host; // ivar: _host
@property (readonly, nonatomic) NULinkedContentManager *linkedContentManager; // ivar: _linkedContentManager
@property (readonly, nonatomic) NSArray *linkedContentProviders; // ivar: _linkedContentProviders
@property (nonatomic) NSInteger relativePriority; // ivar: _relativePriority
@property (readonly) Class superclass;


-(id)initWithArticle:(id)arg0 contentContext:(id)arg1 fontRegistration:(id)arg2 host:(id)arg3 embedDataManager:(id)arg4 linkedContentManager:(id)arg5 ;
-(void)cancelAssetPrefetch;
-(void)dealloc;
-(void)loadArticleWithCompletionBlock:(id)arg0 ;
-(void)loadContextWithCompletionBlock:(id)arg0 ;
-(void)prefetchAssets;
-(void)reloadArticleIfNeeded;
-(void)setupAssetPrefetchCancellationWithOperation:(id)arg0 ;
-(void)setupAssetPrefetchRequestEventsWithEvents:(id)arg0 ;


@end


#endif