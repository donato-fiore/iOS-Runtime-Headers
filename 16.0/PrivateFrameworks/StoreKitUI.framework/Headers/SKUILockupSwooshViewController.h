// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUILOCKUPSWOOSHVIEWCONTROLLER_H
#define SKUILOCKUPSWOOSHVIEWCONTROLLER_H

@class UICollectionView, NSMutableIndexSet, NSString, NSArray, NSURL;
@protocol UICollectionViewDataSource, UICollectionViewDelegate;


#import "SKUISwooshViewController.h"
#import "SKUISwooshView.h"
#import "SKUIVideoImageDataConsumer.h"
#import "SKUIItemArtworkContext.h"

@interface SKUILockupSwooshViewController : SKUISwooshViewController <UICollectionViewDataSource, UICollectionViewDelegate>

 {
    UICollectionView *_collectionView;
    SKUILockupStyle _defaultLockupStyle;
    BOOL _delegateWantsWillDisplay;
    BOOL _didInitialReload;
    CGSize _expectedImageSize;
    NSMutableIndexSet *_hiddenIconIndexSet;
    CGSize _maxCellSize;
    CGSize _maxImageSize;
    ? _metrics;
    NSInteger _seeAllStyle;
    NSString *_seeAllTitle;
    SKUISwooshView *_swooshView;
    SKUIVideoImageDataConsumer *_videoImageConsumer;
}


@property (readonly, nonatomic) SKUIItemArtworkContext *artworkContext; // ivar: _artworkContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *lockups; // ivar: _lockups
@property (readonly, nonatomic) CGRect seeAllButtonFrame;
@property (nonatomic, getter=isSeeAllHidden) BOOL seeAllHidden; // ivar: _seeAllHidden
@property (readonly, nonatomic) NSURL *seeAllURL; // ivar: _seeAllURL
@property (readonly) Class superclass;
@property (nonatomic) NSInteger swooshType; // ivar: _swooshType
@property (readonly, nonatomic) SKUIVideoImageDataConsumer *videoImageConsumer;


+(NSInteger)_swooshTypeForLockups:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_newArtworkContextForSwooshType:(NSInteger)arg0 ;
-(id)_newLockupComponentWithItem:(id)arg0 defaultStyle:(struct SKUILockupStyle )arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)indexPathsForVisibleItems;
-(id)initWithItemList:(id)arg0 ;
-(id)initWithSwoosh:(id)arg0 ;
-(id)popImageViewForItemAtIndex:(NSInteger)arg0 ;
-(struct ? )_lockupSwooshMetrics;
-(struct CGRect )frameForItemAtIndex:(NSInteger)arg0 ;
-(struct CGSize )_maximumCellSizeForImageSize:(struct CGSize )arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_reloadSizes;
-(void)_seeAllAction:(id)arg0 ;
-(void)_setExpectedImageSize:(struct CGSize )arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)deselectAllItems;
-(void)loadView;
-(void)setClientContext:(id)arg0 ;
-(void)setColorScheme:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setImage:(id)arg0 forItemAtIndex:(NSInteger)arg1 ;
-(void)setVideoThumbnail:(id)arg0 forItemAtIndex:(NSInteger)arg1 ;
-(void)unhideImages;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif