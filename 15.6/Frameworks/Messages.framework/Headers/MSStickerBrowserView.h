// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSSTICKERBROWSERVIEW_H
#define MSSTICKERBROWSERVIEW_H

@class UIView, NSTimer, NSMutableArray, UICollectionView, NSString, UICollectionViewFlowLayout, NSDictionary, NSMutableDictionary, CKDispatchQueue;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, MSStickerBrowserViewDataSource, MSStickerBrowserViewDisplayDelegate;


#import "MSStickerBrowserViewLayoutSpec.h"

@interface MSStickerBrowserView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDataSourcePrefetching>



@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (retain, nonatomic) NSTimer *animationTimer; // ivar: _animationTimer
@property (nonatomic) CGSize browserSizeToRestoreFrom; // ivar: _browserSizeToRestoreFrom
@property (retain, nonatomic) NSMutableArray *cellsToAnimate; // ivar: _cellsToAnimate
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (nonatomic) UIEdgeInsets contentInset;
@property (nonatomic) CGPoint contentOffset;
@property (nonatomic) NSUInteger currentlyAnimatingIndex; // ivar: _currentlyAnimatingIndex
@property (weak, nonatomic) NSObject<MSStickerBrowserViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSObject<MSStickerBrowserViewDisplayDelegate> *displayDelegate; // ivar: _displayDelegate
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // ivar: _flowLayout
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRestoringContentOffset; // ivar: _isRestoringContentOffset
@property (retain, nonatomic) MSStickerBrowserViewLayoutSpec *layoutSpec; // ivar: _layoutSpec
@property (nonatomic) CGPoint restoredContentOffset; // ivar: _restoredContentOffset
@property (readonly, nonatomic) NSDictionary *stateRestorationInfo;
@property (retain, nonatomic) NSMutableDictionary *stickerCache; // ivar: _stickerCache
@property (retain, nonatomic) CKDispatchQueue *stickerCacheQueue; // ivar: _stickerCacheQueue
@property (readonly, nonatomic) NSInteger stickerSize; // ivar: _stickerSize
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_stickerAtIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 stickerSize:(NSInteger)arg1 ;
-(void)_reloadStickersAtIndexes:(id)arg0 ;
-(void)_startAnimating;
-(void)_stopAnimating;
-(void)_updateCollectionViewSpecIfNeeded;
-(void)animateNextCell;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 prefetchItemsAtIndexPaths:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)configureStickerView;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)invalidateFlowLayout;
-(void)layoutSubviews;
-(void)prepareForSnapshotting;
-(void)reloadData;
-(void)restoreFromState:(id)arg0 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;


@end


#endif