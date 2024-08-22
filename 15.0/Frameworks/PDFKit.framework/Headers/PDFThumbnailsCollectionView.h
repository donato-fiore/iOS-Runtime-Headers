// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFTHUMBNAILSCOLLECTIONVIEW_H
#define PDFTHUMBNAILSCOLLECTIONVIEW_H

@class UIView, UICollectionView, UICollectionViewDiffableDataSource, NSCache, NSString;
@protocol UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, PDFThumbnailCollectionViewInterface;


#import "PDFThumbnailView.h"

@interface PDFThumbnailsCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, PDFThumbnailCollectionViewInterface>

 {
    PDFThumbnailView *_thumbnailView;
    UICollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_dataSource;
    NSCache *_cache;
}


@property (nonatomic) BOOL allowsPageReordering;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)cacheKeyForPage:(id)arg0 ;
-(id)cachedImageForPage:(id)arg0 displayBox:(NSInteger)arg1 thumbnailView:(id)arg2 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)collectionView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuForPage:(id)arg0 ;
-(id)currentPage;
-(id)defaultContextMenuForPage:(id)arg0 ;
-(id)imageDrawingQueue;
-(id)initFromThumbnailView:(id)arg0 ;
-(id)makeDatasource;
-(id)previewForCollectionView:(id)arg0 contextMenuConfiguration:(id)arg1 ;
-(struct CGSize )thumbnailSizeForPage:(id)arg0 ;
-(struct CGSize )thumbnailSizeForPage:(id)arg0 displayBox:(NSInteger)arg1 ;
-(struct CGSize )thumbnailSizeForPage:(id)arg0 displayBox:(NSInteger)arg1 thumbnailView:(id)arg2 ;
-(void)_reloadPage:(id)arg0 ;
-(void)_selectAndScrollToCurrentPageIfNeeded;
-(void)_updateActionsButtonVisibilityAtIndexPath:(id)arg0 ;
-(void)_updateScrubber;
-(void)applySnapshotWithAnimation:(BOOL)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)configureCell:(id)arg0 withPage:(id)arg1 indexPath:(id)arg2 ;
-(void)currentPageChanged:(id)arg0 ;
-(void)documentChanged:(id)arg0 ;
-(void)documentMutated:(id)arg0 ;
-(void)loadImageWithPage:(id)arg0 displayBox:(NSInteger)arg1 thumbnailView:(id)arg2 completionHandler:(id)arg3 ;
-(void)movePage:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)movePageWithTransaction:(id)arg0 ;
-(void)pageChanged:(id)arg0 ;
-(void)updateCacheForPage:(id)arg0 withImage:(id)arg1 ;
-(void)updateIconsImages;


@end


#endif