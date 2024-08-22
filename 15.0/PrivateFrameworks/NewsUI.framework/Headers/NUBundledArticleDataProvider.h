// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUBUNDLEDARTICLEDATAPROVIDER_H
#define NUBUNDLEDARTICLEDATAPROVIDER_H

@class FCArticle, NSString, NSArray;
@protocol SXResourceDataSource, SXEmbedDataProvider, NUFontRegistrator, NUArticleDataProvider, NUEmbedDataManager;

#import <Foundation/Foundation.h>

#import "NULinkedContentManager.h"

@interface NUBundledArticleDataProvider : NSObject <SXResourceDataSource, SXEmbedDataProvider, NUFontRegistrator, NUArticleDataProvider>



@property (readonly, nonatomic) FCArticle *article; // ivar: _article
@property (readonly, copy, nonatomic) NSString *articleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<NUEmbedDataManager> *embedDataManager; // ivar: _embedDataManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NULinkedContentManager *linkedContentManager; // ivar: _linkedContentManager
@property (readonly, nonatomic) NSArray *linkedContentProviders; // ivar: _linkedContentProviders
@property (nonatomic) NSInteger relativePriority; // ivar: _relativePriority
@property (readonly) Class superclass;


-(id)embedForType:(id)arg0 ;
-(id)fileURLForBundleURL:(id)arg0 ;
-(id)initWithArticle:(id)arg0 embedDataManager:(id)arg1 linkedContentManager:(id)arg2 ;
-(id)loadImagesForImageRequest:(SEL)arg0 completionBlock:(id)arg1 ;
-(id)translateURL:(id)arg0 ;
-(void)cancelAssetPrefetch;
// -(void)fileURLForURL:(id)arg0 onCompletion:(id)arg1 onError:(unk)arg2  ;
-(void)loadContextWithCompletionBlock:(id)arg0 ;
-(void)performBlockForFontsInBundle:(id)arg0 ;
-(void)prefetchAssets;
-(void)registerFontsWithCompletion:(id)arg0 ;


@end


#endif