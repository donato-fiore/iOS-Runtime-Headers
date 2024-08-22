// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRINLINECOMPLICATIONGALLERYVIEWCONTROLLER_H
#define PRINLINECOMPLICATIONGALLERYVIEWCONTROLLER_H

@class UIViewController, UICollectionViewDiffableDataSource, NSArray, NSMutableDictionary, NSString;
@protocol CHSWidgetDescriptorProviderObserver, PRInlineComplicationGalleryViewDelegate, UICollectionViewDelegate, PRInlineComplicationGalleryViewControllerDelegate;


#import "PRInlineComplicationGalleryView.h"

@interface PRInlineComplicationGalleryViewController : UIViewController <CHSWidgetDescriptorProviderObserver, PRInlineComplicationGalleryViewDelegate, UICollectionViewDelegate>

 {
    PRInlineComplicationGalleryView *_complicationGalleryView;
    UICollectionViewDiffableDataSource *_dataSource;
    NSArray *_suggestionItems;
    NSMutableDictionary *_widgetHostViewControllers;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRInlineComplicationGalleryViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)layoutStyleForSectionIndex:(NSInteger)arg0 ;
-(id)_alternateCalendarGalleryItem;
-(id)_alternateCalendarIdentifier;
-(id)_alternateDateString;
-(id)_buildSnapshot;
-(id)_dateGalleryItem;
-(id)_galleryItemForWidgetDescriptor:(id)arg0 intent:(id)arg1 family:(NSInteger)arg2 iconImageHidden:(BOOL)arg3 suggestedComplication:(id)arg4 ;
-(id)_inlineGalleryItemsForWidgetDescriptors:(id)arg0 iconImageHidden:(BOOL)arg1 ;
-(id)_makeSectionHeaderRegistration;
-(id)_widgetHostViewControllerForDescriptor:(id)arg0 shownAlongsideIcon:(BOOL)arg1 ;
-(id)initWithSuggestionSet:(id)arg0 ;
-(void)_closeButtonTapped:(id)arg0 ;
-(void)_configureWidgetCell:(id)arg0 forItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_configureWidgetHostViewController:(id)arg0 forWidgetDescriptor:(id)arg1 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)descriptorsDidChangeForDescriptorProvider:(id)arg0 ;
-(void)loadView;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif