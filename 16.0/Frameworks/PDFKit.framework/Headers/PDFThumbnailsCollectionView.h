// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFTHUMBNAILSCOLLECTIONVIEW_H
#define PDFTHUMBNAILSCOLLECTIONVIEW_H

@class UIView, UICollectionView, UICollectionViewDiffableDataSource, NSCache, NSString;
@protocol UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, UIContextMenuInteractionDelegate, PDFThumbnailCollectionViewInterface;


#import "PDFThumbnailView.h"

@interface PDFThumbnailsCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, UIContextMenuInteractionDelegate, PDFThumbnailCollectionViewInterface>

 {
    PDFThumbnailView *_thumbnailView;
    UICollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_dataSource;
    NSCache *_cache;
    UIView *_backgroundOnePixelView;
}


@property (nonatomic) BOOL allowsPageReordering;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canEditDocument;
-(BOOL)shouldDisplayActionButtonForPage:(id)arg0 ;
-(NSInteger)_collectionView:(id)arg0 dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(NSUInteger)_insertPagesFromProvidedPDFDocument:(id)arg0 atPageIndex:(NSUInteger)arg1 ;
-(id)_pasteActionIfAvailableAfterPage:(id)arg0 ;
-(id)cacheKeyForPage:(id)arg0 ;
-(id)cachedImageForPage:(id)arg0 displayBox:(NSInteger)arg1 thumbnailView:(id)arg2 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint )arg3 ;
-(id)collectionView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)collectionView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuForBackgroundAtLocation:(struct CGPoint )arg0 ;
-(id)contextMenuForPage:(id)arg0 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForDismissingMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)currentPage;
-(id)datasourceQueue;
-(id)defaultContextMenuForPage:(id)arg0 ;
-(id)imageDrawingOperationQueue;
-(id)initFromThumbnailView:(id)arg0 ;
-(id)itemsForDragWithSession:(id)arg0 atIndexPath:(id)arg1 ;
-(id)makeDatasource;
-(id)previewForCollectionView:(id)arg0 contextMenuInteraction:(id)arg1 ;
-(id)previewForCollectionView:(id)arg0 indexPath:(id)arg1 ;
-(id)supportedUTTypes;
-(struct CGSize )thumbnailSizeForPage:(id)arg0 ;
-(struct CGSize )thumbnailSizeForPage:(id)arg0 displayBox:(NSInteger)arg1 ;
-(struct CGSize )thumbnailSizeForPage:(id)arg0 displayBox:(NSInteger)arg1 thumbnailView:(id)arg2 ;
-(void)_insertFileAtURL:(id)arg0 type:(id)arg1 atIndex:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)_insertImageWithURL:(id)arg0 atIndex:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)_insertPDFDocumentWithURL:(id)arg0 atIndex:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)_reloadPage:(id)arg0 ;
-(void)_selectAndScrollToCurrentPageIfNeeded;
-(void)_updateActionsButtonVisibilityAtIndexPath:(id)arg0 ;
-(void)_updateScrubber;
-(void)applySnapshotWithAnimation:(BOOL)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 dragSessionDidEnd:(id)arg1 ;
-(void)collectionView:(id)arg0 dragSessionWillBegin:(id)arg1 ;
-(void)collectionView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)configureCell:(id)arg0 withPage:(id)arg1 indexPath:(id)arg2 ;
-(void)copyPage:(id)arg0 ;
-(void)currentPageChanged:(id)arg0 ;
-(void)documentChanged:(id)arg0 ;
-(void)documentMutated:(id)arg0 ;
-(void)insertPages:(id)arg0 atIndexes:(id)arg1 ;
-(void)itemProvider:(id)arg0 registerDataRepresentationForPage:(id)arg1 draggedPages:(id)arg2 ;
-(void)itemProvider:(id)arg0 registerFileRepresentationForPage:(id)arg1 draggedPages:(id)arg2 ;
-(void)loadImageWithPage:(id)arg0 displayBox:(NSInteger)arg1 thumbnailView:(id)arg2 completionHandler:(id)arg3 ;
-(void)movePage:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)movePageWithTransaction:(id)arg0 ;
-(void)pageChanged:(id)arg0 ;
-(void)pasteAfterPage:(id)arg0 ;
-(void)removePages:(id)arg0 ;
-(void)updateCacheForPage:(id)arg0 withImage:(id)arg1 ;
-(void)updateIconsImages;
-(void)updateImageForCell:(id)arg0 atIndexPath:(id)arg1 ;
-(void)updateImageForCell:(id)arg0 indexPath:(id)arg1 page:(id)arg2 ;
-(void)writePDFDocumentFromPages:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif