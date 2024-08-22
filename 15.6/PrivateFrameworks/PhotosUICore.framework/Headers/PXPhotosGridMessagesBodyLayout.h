// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOSGRIDMESSAGESBODYLAYOUT_H
#define PXPHOTOSGRIDMESSAGESBODYLAYOUT_H

@class NSShadow, NSString;
@protocol PXGDisplayAssetSource, PXGShadowSource, PXDisplayAssetFetchResult;


#import "PXGGridLayout.h"
#import "PXPhotosGridAssetDecorationSource.h"
#import "PXAssetsDataSource.h"
#import "PXPhotosGridMessagesLayoutSpec.h"

@interface PXPhotosGridMessagesBodyLayout : PXGGridLayout <PXGDisplayAssetSource, PXGShadowSource>

 {
    _NSRange _cachedClampedItemRange;
    id<PXDisplayAssetFetchResult> *_cachedClampedFetchResult;
    NSShadow *_contentShadow;
}


@property (readonly, nonatomic) PXPhotosGridAssetDecorationSource *assetDecorationSource; // ivar: _assetDecorationSource
@property (readonly, nonatomic) PXAssetsDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger section; // ivar: _section
@property (retain, nonatomic) PXPhotosGridMessagesLayoutSpec *spec; // ivar: _spec
@property (readonly) Class superclass;


-(CGFloat)cornerRadiusForShadowSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSUInteger)desiredPlaceholderStyleInLayout:(id)arg0 ;
-(NSUInteger)supportedDisplayAssetPresentationStylesInLayout:(id)arg0 ;
-(id)assetForItemIndex:(NSInteger)arg0 ;
-(id)assetReferenceForItemIndex:(NSInteger)arg0 ;
-(id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 inLayout:(id)arg1 ;
-(id)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 inLayout:(id)arg1 ;
-(id)init;
-(id)shadowForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(void)_updateNumberOfColumns;


@end


#endif