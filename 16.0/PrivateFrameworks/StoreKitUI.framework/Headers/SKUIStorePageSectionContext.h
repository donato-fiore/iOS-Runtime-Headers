// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISTOREPAGESECTIONCONTEXT_H
#define SKUISTOREPAGESECTIONCONTEXT_H

@class UIColor, UICollectionView;

#import <Foundation/Foundation.h>

#import "SKUIItemOfferButtonAppearance.h"
#import "SKUIMetricsImpressionSession.h"
#import "SKUIClientContext.h"
#import "SKUIColorScheme.h"
#import "SKUIMetricsController.h"
#import "SKUIStorePageSectionsViewController.h"
#import "SKUIResourceLoader.h"
#import "SKUILayoutCache.h"

@interface SKUIStorePageSectionContext : NSObject {
    SKUIItemOfferButtonAppearance *_itemOfferButtonAppearance;
    UIColor *_placeholderColor;
}


@property (readonly, nonatomic) SKUIMetricsImpressionSession *activeMetricsImpressionSession; // ivar: _activeMetricsImpressionSession
@property (readonly, nonatomic) CGFloat activePageWidth; // ivar: _activePageWidth
@property (readonly, nonatomic) SKUIClientContext *clientContext;
@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (readonly, nonatomic) NSInteger defaultPinningTransitionStyle; // ivar: _defaultPinningTransitionStyle
@property (readonly, nonatomic) CGFloat horizontalPadding;
@property (readonly, nonatomic) SKUIItemOfferButtonAppearance *itemOfferButtonAppearance;
@property (readonly, nonatomic) CGFloat landscapePageWidth; // ivar: _landscapePageWidth
@property (readonly, nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (readonly, nonatomic) SKUIMetricsController *metricsController; // ivar: _metricsController
@property (readonly, weak, nonatomic) SKUIStorePageSectionsViewController *parentViewController; // ivar: _parentViewController
@property (readonly, nonatomic) UIColor *placeholderColor;
@property (readonly, nonatomic) CGFloat portraitPageWidth; // ivar: _portraitPageWidth
@property (readonly, nonatomic) SKUIResourceLoader *resourceLoader; // ivar: _resourceLoader
@property (readonly, nonatomic) SKUILayoutCache *textLayoutCache; // ivar: _textLayoutCache


-(id)init;


@end


#endif