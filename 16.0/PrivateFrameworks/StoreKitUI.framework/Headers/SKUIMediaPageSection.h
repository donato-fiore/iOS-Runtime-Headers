// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIMEDIAPAGESECTION_H
#define SKUIMEDIAPAGESECTION_H

@class NSString;
@protocol SKUIArtworkRequestDelegate, SKUIEmbeddedMediaViewDelegate;


#import "SKUIStorePageSection.h"
#import "SKUIArtwork.h"
#import "SKUIEmbeddedMediaView.h"
#import "SKUIMediaComponent.h"

@interface SKUIMediaPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIEmbeddedMediaViewDelegate>

 {
    SKUIArtwork *_artwork;
    NSUInteger _artworkRequestID;
    CGSize _imageSize;
    SKUIEmbeddedMediaView *_mediaView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIMediaComponent *pageComponent;
@property (readonly) Class superclass;


-(CGFloat)contentInsetAdjustmentForCollectionView:(id)arg0 ;
-(NSInteger)defaultItemPinningStyle;
-(NSInteger)numberOfCells;
-(id)cellForIndexPath:(id)arg0 ;
-(id)initWithPageComponent:(id)arg0 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(void)_loadImageWithReason:(NSInteger)arg0 ;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg0 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg0 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg0 ;
-(void)dealloc;
-(void)mediaView:(id)arg0 playbackStateDidChange:(NSInteger)arg1 ;
-(void)prefetchResourcesWithReason:(NSInteger)arg0 ;
-(void)setSectionIndex:(NSInteger)arg0 ;
-(void)willAppearInContext:(id)arg0 ;


@end


#endif