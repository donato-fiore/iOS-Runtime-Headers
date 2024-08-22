// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRCOMPLICATIONGALLERYVIEWCONTROLLER_H
#define PRCOMPLICATIONGALLERYVIEWCONTROLLER_H

@class UIViewController, UICollectionViewDiffableDataSource, NSArray, NSMutableDictionary, NSString;
@protocol CHSWidgetDescriptorProviderObserver, PRComplicationGalleryViewDelegate, PRComplicationGalleryItemCellDelegate, UICollectionViewDelegate, PRComplicationGalleryWidgetHostProviding, PRComplicationGalleryDetailViewControllerDelegate, UISheetPresentationControllerDelegate, PRComplicationGalleryViewControllerDelegate;


#import "PRComplicationGalleryView.h"

@interface PRComplicationGalleryViewController : UIViewController <CHSWidgetDescriptorProviderObserver, PRComplicationGalleryViewDelegate, PRComplicationGalleryItemCellDelegate, UICollectionViewDelegate, PRComplicationGalleryWidgetHostProviding, PRComplicationGalleryDetailViewControllerDelegate, UISheetPresentationControllerDelegate>

 {
    PRComplicationGalleryView *_complicationGalleryView;
    UICollectionViewDiffableDataSource *_dataSource;
    NSArray *_suggestionSets;
    NSMutableDictionary *_widgetHostViewControllersPerReason;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRComplicationGalleryViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)layoutStyleForSectionIndex:(NSInteger)arg0 ;
-(id)_buildSnapshot;
-(id)_descriptorsForBundleRecord:(id)arg0 ;
-(id)_galleryItemForComplicationDescriptor:(id)arg0 iconImageHidden:(BOOL)arg1 ;
-(id)_galleryItemForWidgetDescriptor:(id)arg0 family:(NSInteger)arg1 iconImageHidden:(BOOL)arg2 ;
-(id)_galleryItemsForWidgetDescriptors:(id)arg0 iconImageHidden:(BOOL)arg1 ;
-(id)_widgetHostViewControllerForDescriptor:(id)arg0 ;
-(id)_widgetHostViewControllerForDescriptor:(id)arg0 forReason:(id)arg1 ;
-(id)initWithSuggestionSets:(id)arg0 ;
-(id)widgetHostViewControllerForDescriptor:(id)arg0 forReason:(id)arg1 ;
-(id)widgetHostViewControllersForReason:(id)arg0 ;
-(void)_closeButtonTapped:(id)arg0 ;
-(void)_configureWidgetCell:(id)arg0 forItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_configureWidgetHostViewController:(id)arg0 forWidgetDescriptor:(id)arg1 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUnhighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)complicationGalleryDetailViewController:(id)arg0 didAddComplication:(id)arg1 ;
-(void)complicationGalleryDetailViewControllerDidCancel:(id)arg0 ;
-(void)complicationGalleryItemCell:(id)arg0 didBeginDragInteraction:(id)arg1 ;
-(void)complicationGalleryItemCell:(id)arg0 didEndDragInteraction:(id)arg1 withOperation:(NSUInteger)arg2 ;
-(void)descriptorsDidChangeForDescriptorProvider:(id)arg0 ;
-(void)invalidateWidgetHostViewControllersForReason:(id)arg0 ;
-(void)loadView;
-(void)presentationControllerWillDismiss:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif