// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICLIENTCONTEXT_H
#define SKUICLIENTCONTEXT_H

@class NSString, NSBundle, NSMapTable, NSMutableArray, NSOperationQueue, SSURLBag, IKAppContext, SUClientInterface, NSDictionary, NSArray, NSCache, SSVPlatformContext, SSUpdatableAssetController;
@protocol SUClientInterfaceDelegatePrivate;

#import <Foundation/Foundation.h>

#import "SKUIStoreDialogController.h"
#import "SKUILocalizedStringDictionary.h"
#import "SKUIURLBag.h"
#import "SKUITrendingSearchProvider.h"
#import "SKUIApplicationController.h"
#import "SKUIURL.h"

@interface SKUIClientContext : NSObject <SUClientInterfaceDelegatePrivate>

 {
    NSString *_additionalPurchaseParameters;
    NSBundle *_bundle;
    SKUIStoreDialogController *_dialogController;
    SKUILocalizedStringDictionary *_localizedStrings;
    NSMapTable *_metricsPageContexts;
    NSMutableArray *_navigationHistory;
    NSString *_purchaseAffiliateIdentifier;
    NSInteger _purchaseURLBagType;
    SKUIURLBag *_urlBag;
    SKUITrendingSearchProvider *_trendingSearchProvider;
    NSOperationQueue *_resourceLoadQueue;
}


@property (readonly, nonatomic) SSURLBag *URLBag;
@property (weak, nonatomic, getter=_applicationController, setter=_setApplicationController:) SKUIApplicationController *_applicationController; // ivar: _applicationController
@property (retain, nonatomic, getter=_scriptAppContext, setter=_setScriptAppContext:) IKAppContext *_scriptAppContext; // ivar: _scriptAppContext
@property (readonly, weak, nonatomic, getter=applicationController) SKUIApplicationController *applicationController;
@property (readonly, nonatomic, getter=isBootstrapScriptFallbackDisabled) BOOL bootstrapScriptFallbackDisabled;
@property (readonly, nonatomic) SUClientInterface *clientInterface; // ivar: _clientInterface
@property (readonly, copy, nonatomic) NSDictionary *configurationDictionary; // ivar: _configurationDictionary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isManagedAppleID) BOOL managedAppleID;
@property (copy, nonatomic) NSString *metricsConfigurationIdentifier; // ivar: _metricsConfigurationIdentifier
@property (readonly, nonatomic) Class moviePlayerViewControllerClass;
@property (readonly, nonatomic, getter=isMultiUser) BOOL multiUser;
@property (readonly, nonatomic) NSArray *navigationHistory;
@property (copy, nonatomic) NSString *navigationHistoryPersistenceKey; // ivar: _navigationHistoryPersistenceKey
@property (readonly, nonatomic) NSCache *placeholderImageCache; // ivar: _placeholderImageCache
@property (readonly, nonatomic) SSVPlatformContext *platformContext;
@property (copy, nonatomic) SKUIURL *purchaseReferrerURL; // ivar: _purchaseReferrerURL
@property (readonly, nonatomic) NSOperationQueue *resourceLoadQueue;
@property (readonly, nonatomic) NSString *storeFrontIdentifier; // ivar: _storeFrontIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) SKUITrendingSearchProvider *trendingSearchProvider;
@property (retain, nonatomic) SSUpdatableAssetController *updatableAssetController; // ivar: _updatableAssetController
@property (nonatomic) NSInteger userInterfaceIdiomOverride; // ivar: _userInterfaceIdiomOverride


+(id)_cachePath;
+(id)_cachePathForStoreFrontIdentifier:(id)arg0 ;
+(id)_configurationDictionaryWithBagDictionary:(id)arg0 ;
+(id)_fallbackConfigurationDictionary;
+(id)defaultContext;
+(id)localizedStringForKey:(id)arg0 inBundles:(id)arg1 ;
+(id)localizedStringForKey:(id)arg0 inBundles:(id)arg1 inTable:(id)arg2 ;
-(BOOL)shouldForceTransientSearchControllerBahavior;
-(BOOL)storeViewController:(id)arg0 shouldDisplayDefaultDarButton:(NSInteger)arg1 ;
-(BOOL)supportsRenderingVersion:(unsigned int)arg0 ;
-(NSInteger)tabBarStyleForWidth:(CGFloat)arg0 ;
-(id)SAPSessionForVersion:(NSInteger)arg0 ;
-(id)additionalLeftBarButtonItemForDocumentContainerViewController:(id)arg0 ;
-(id)additionalLeftBarButtonItemForViewController:(id)arg0 ;
-(id)additionalRightBarButtonItemForDocumentContainerViewController:(id)arg0 ;
-(id)additionalRightBarButtonItemForViewController:(id)arg0 ;
-(id)documentViewControllerForTemplateViewElement:(id)arg0 ;
-(id)existingBagValueForKey:(id)arg0 ;
-(id)initWithConfigurationDictionary:(id)arg0 ;
-(id)localizedAlertWithError:(id)arg0 ;
-(id)localizedStringForKey:(id)arg0 ;
-(id)localizedStringForKey:(id)arg0 inTable:(id)arg1 ;
-(id)metricsPageContextForViewController:(id)arg0 ;
-(id)modalDocumentViewControllerForDocument:(id)arg0 options:(id)arg1 ;
-(id)newLegacyStorePageViewControllerForURLResponse:(id)arg0 ;
-(id)newLoadStoreURLOperationWithURL:(id)arg0 ;
-(id)newLoadStoreURLOperationWithURLRequest:(id)arg0 ;
-(id)previewViewControllerForViewElement:(id)arg0 ;
-(id)scriptInterfaceForClientInterface:(id)arg0 ;
-(id)tabBarItemsForStyle:(NSInteger)arg0 ;
-(id)valueForConfigurationKey:(id)arg0 ;
-(void)_setAdditionalPurchaseParameters:(id)arg0 ;
-(void)_setPurchaseAffiliateIdentifier:(id)arg0 ;
-(void)_setPurchaseURLBagType:(NSInteger)arg0 ;
-(void)_setValue:(id)arg0 forConfigurationKey:(id)arg1 ;
-(void)clientInterface:(id)arg0 dispatchOnPageResponseWithData:(id)arg1 response:(id)arg2 ;
-(void)clientInterface:(id)arg0 dispatchXEvent:(id)arg1 completionBlock:(id)arg2 ;
-(void)clientInterface:(id)arg0 presentDialog:(id)arg1 ;
-(void)customizePurchase:(id)arg0 ;
-(void)customizeSoftwarePurchase:(id)arg0 ;
-(void)dealloc;
-(void)getDefaultMetricsControllerWithCompletionBlock:(id)arg0 ;
-(void)loadValueForConfigurationKey:(id)arg0 completionBlock:(id)arg1 ;
-(void)pushNavigationHistoryPageIdentifier:(id)arg0 ;
-(void)sendAppPreviewStateChanged:(BOOL)arg0 ;
-(void)sendApplicationDidEnterBackground;
-(void)sendApplicationWillEnterForeground;
-(void)sendApplicationWindowSizeDidUpdate:(struct CGSize )arg0 ;
-(void)sendOnPageResponseWithDocument:(id)arg0 data:(id)arg1 URLResponse:(id)arg2 performanceMetrics:(id)arg3 ;
-(void)sendOnXEventWithDictionary:(id)arg0 completionBlock:(id)arg1 ;
-(void)setMetricsPageContext:(id)arg0 forViewController:(id)arg1 ;


@end


#endif