// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIVIEWELEMENTLAYOUTCONTEXT_H
#define SKUIVIEWELEMENTLAYOUTCONTEXT_H

@class NSMutableDictionary, MPUBorderDrawingCache, NSMapTable, NSHashTable, NSMutableSet, NSString, UIViewController, UIColor, NSCache;
@protocol SKUIArtworkRequestDelegate;

#import <Foundation/Foundation.h>

#import "SKUIBadgeTextAttachmentLoader.h"
#import "SKUIItemOfferButton.h"
#import "SKUIClientContext.h"
#import "SKUIViewElementTextLayoutCache.h"
#import "SKUIResourceLoader.h"

@interface SKUIViewElementLayoutContext : NSObject {
    NSMutableDictionary *_aggregateValues;
    SKUIBadgeTextAttachmentLoader *_badgeImageLoader;
    MPUBorderDrawingCache *_borderDrawingCache;
    NSMapTable *_editorialLayouts;
    NSHashTable *_expandedEditorialLayouts;
    SKUIItemOfferButton *_itemOfferButton;
    NSMutableDictionary *_itemOfferButtonSizes;
    NSMutableSet *_observedArtworkRequestIDs;
    NSMapTable *_blurColors;
}


@property (nonatomic) CGFloat activePageWidth; // ivar: _activePageWidth
@property (weak, nonatomic) NSObject<SKUIArtworkRequestDelegate> *artworkRequestDelegate; // ivar: _artworkRequestDelegate
@property (copy, nonatomic) NSString *backdropGroupName; // ivar: _backdropGroupName
@property (readonly, nonatomic) SKUIBadgeTextAttachmentLoader *badgeImageLoader;
@property (readonly, nonatomic) MPUBorderDrawingCache *borderDrawingCache;
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (nonatomic) NSUInteger containerViewElementType; // ivar: _containerViewElementType
@property (nonatomic) CGFloat displayScale; // ivar: _displayScale
@property (retain, nonatomic) SKUIViewElementTextLayoutCache *labelLayoutCache; // ivar: _labelLayoutCache
@property (readonly, nonatomic) UIEdgeInsets largeScreenElementPadding; // ivar: _largeScreenElementPadding
@property (weak, nonatomic) UIViewController *parentViewController; // ivar: _parentViewController
@property (retain, nonatomic) UIColor *placeholderColor; // ivar: _placeholderColor
@property (readonly, nonatomic) NSCache *placeholderImageCache;
@property (retain, nonatomic) SKUIResourceLoader *resourceLoader; // ivar: _resourceLoader
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


+(CGFloat)_calculateValueFromString:(id)arg0 withDefault:(CGFloat)arg1 coefficent:(CGFloat)arg2 ;
+(CGFloat)itemWidthForElement:(id)arg0 withDefaultWidth:(CGFloat)arg1 fitWidth:(CGFloat)arg2 ;
-(BOOL)_loadImageForURL:(id)arg0 cacheKey:(id)arg1 dataConsumer:(id)arg2 reason:(NSInteger)arg3 ;
-(BOOL)isEditorialLayoutExpanded:(id)arg0 ;
-(BOOL)loadImageForArtwork:(id)arg0 dataConsumer:(id)arg1 reason:(NSInteger)arg2 ;
-(BOOL)loadImageForArtwork:(id)arg0 reason:(NSInteger)arg1 ;
-(BOOL)loadImageForBadgeElement:(id)arg0 reason:(NSInteger)arg1 ;
-(BOOL)loadImageForImageElement:(id)arg0 reason:(NSInteger)arg1 ;
-(BOOL)loadImageForImageElement:(id)arg0 reason:(NSInteger)arg1 dataConsumer:(id)arg2 ;
-(BOOL)loadTemplatedImageForBadgeElement:(id)arg0 reason:(NSInteger)arg1 ;
-(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 ;
-(CGFloat)defaultItemWidthForViewElement:(id)arg0 ;
-(NSInteger)maxWidthForElement:(id)arg0 withDefaultWidth:(NSInteger)arg1 ;
-(id)_initSKUIViewElementLayoutContext;
-(id)aggregateValueForKey:(id)arg0 ;
-(id)blurColorForCacheKey:(id)arg0 ;
-(id)dataConsumerForImageElement:(id)arg0 ;
-(id)editorialLayoutForLabelElement:(id)arg0 width:(CGFloat)arg1 ;
-(id)imageResourceCacheKeyForArtwork:(id)arg0 ;
-(id)imageResourceCacheKeyForViewElement:(id)arg0 ;
-(id)init;
-(id)initWithStorePageSectionContext:(id)arg0 ;
-(id)initWithStorePageSectionContext:(id)arg0 previousLayoutContext:(id)arg1 ;
-(id)placeholderImageForImageElement:(id)arg0 dataConsumer:(id)arg1 ;
-(id)placeholderImageForSize:(struct CGSize )arg0 ;
-(id)requestIdentifierForArtwork:(id)arg0 ;
-(id)requestIdentifierForResourceCacheKey:(id)arg0 ;
-(id)requestIdentifierForViewElement:(id)arg0 ;
-(id)textPropertiesForViewElement:(id)arg0 width:(CGFloat)arg1 ;
-(id)transientRequestIdentifierForViewElement:(id)arg0 ;
-(struct CGSize )_sizeForImageElement:(id)arg0 applyTransform:(BOOL)arg1 ;
-(struct CGSize )sizeForBadgeElement:(id)arg0 ;
-(struct CGSize )sizeForImageElement:(id)arg0 ;
-(struct CGSize )sizeForItemOfferButton:(id)arg0 ;
-(struct CGSize )sizeForViewElement:(id)arg0 width:(CGFloat)arg1 ;
-(void)_artworkRequestDidLoadImageNotification:(id)arg0 ;
-(void)dealloc;
-(void)expandEditorialForLabelElement:(id)arg0 ;
-(void)invalidateAllEditorialLayouts;
-(void)setAggregateValue:(id)arg0 forKey:(id)arg1 ;
-(void)setBlurColor:(id)arg0 cacheKey:(id)arg1 ;


@end


#endif