// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUSEARCHZEROKEYWORDGADGET_H
#define PUSEARCHZEROKEYWORDGADGET_H

@class UICollectionViewController, NSString, PXGadgetSpec, PHCachingImageManager;
@protocol UICollectionViewDataSourcePrefetching, PXDiagnosticsEnvironment, PXGadget, PXGadgetDelegate, OS_dispatch_queue;


#import "PUSearchHomeThumbnailManager.h"
#import "PUSearchZeroKeywordDataSource.h"
#import "PUSearchZeroKeywordGadgetLayout.h"

@interface PUSearchZeroKeywordGadget : UICollectionViewController <UICollectionViewDataSourcePrefetching, PXDiagnosticsEnvironment, PXGadget>



@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (nonatomic) NSUInteger cellLabelNumberOfLinesPermitted; // ivar: _cellLabelNumberOfLinesPermitted
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (readonly, nonatomic) NSUInteger dataSourceSection; // ivar: _dataSourceSection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (retain, nonatomic) PHCachingImageManager *imageManager; // ivar: _imageManager
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) NSUInteger placeTileFetchCounter; // ivar: _placeTileFetchCounter
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *placeTileFetchCounterQueue; // ivar: _placeTileFetchCounterQueue
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) NSInteger sectionType; // ivar: _sectionType
@property (readonly) Class superclass;
@property (retain, nonatomic) PUSearchHomeThumbnailManager *thumbnailManager; // ivar: _thumbnailManager
@property (nonatomic) CGRect visibleContentRect;
@property (readonly, nonatomic) PUSearchZeroKeywordDataSource *zeroKeywordDataSource; // ivar: _zeroKeywordDataSource
@property (readonly, nonatomic) PUSearchZeroKeywordGadgetLayout *zeroKeywordGadgetLayout;


-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)hasLoadedContentData;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)contentViewController;
-(id)debugURLsForDiagnostics;
-(id)initWithDataSource:(id)arg0 dataSourceSection:(NSUInteger)arg1 sectionType:(NSInteger)arg2 ;
-(id)px_diagnosticsItemProvidersForPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )getCellSize;
-(struct CGSize )getCellSizeWithScreenWidth:(CGFloat)arg0 ;
-(struct CGSize )getCellThumbnailSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureCellLabelNumberOfLinesWithScreenSize:(struct CGSize )arg0 ;
-(void)_configureCollectionView;
-(void)_fetchPlaceThumbnailForCell:(id)arg0 itemType:(NSInteger)arg1 key:(id)arg2 currentTag:(NSUInteger)arg3 ;
-(void)_updateCurrentContentOffsetWithProposedOffset:(struct CGPoint )arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 prefetchItemsAtIndexPaths:(id)arg1 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)layoutPeopleViews;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCellLabelNumberOfLinesWithScreenSize:(struct CGSize )arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif