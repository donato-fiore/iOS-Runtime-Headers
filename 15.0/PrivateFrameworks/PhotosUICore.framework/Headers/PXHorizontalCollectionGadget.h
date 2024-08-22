// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXHORIZONTALCOLLECTIONGADGET_H
#define PXHORIZONTALCOLLECTIONGADGET_H

@class NSString, NSDictionary;
@protocol PXMutableHorizontalCollectionGadget, PXGadget, PXGadgetDelegate, PXHorizontalCollectionGadgetDelegate;


#import "PXGadgetUIViewController.h"
#import "PXGadgetSpec.h"
#import "PXGadgetOrbContext.h"

@interface PXHorizontalCollectionGadget : PXGadgetUIViewController <PXMutableHorizontalCollectionGadget, PXGadget>



@property (copy, nonatomic) id *accessoryButtonAction; // ivar: _accessoryButtonAction
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (nonatomic) CGSize cachedMaxHeightForColumnWidth; // ivar: _cachedMaxHeightForColumnWidth
@property (readonly, copy, nonatomic) NSString *collectionAccessoryButtonTitle; // ivar: _collectionAccessoryButtonTitle
@property (readonly, nonatomic) NSUInteger collectionAccessoryButtonType; // ivar: _collectionAccessoryButtonType
@property (readonly, nonatomic) CGFloat collectionHeight; // ivar: _collectionHeight
@property (readonly, copy, nonatomic) NSString *collectionTitle; // ivar: _collectionTitle
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (copy, nonatomic) NSDictionary *columnSpans; // ivar: _columnSpans
@property (nonatomic) NSInteger currentColumnSpan; // ivar: _currentColumnSpan
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger defaultColumnSpan; // ivar: _defaultColumnSpan
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (nonatomic) NSUInteger gadgetType; // ivar: _gadgetType
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger headerStyle; // ivar: _headerStyle
@property (weak, nonatomic) NSObject<PXHorizontalCollectionGadgetDelegate> *horizontalGadgetDelegate; // ivar: _horizontalGadgetDelegate
@property (nonatomic) BOOL isFixedHeight; // ivar: _isFixedHeight
@property (nonatomic) BOOL isPerformingChanges; // ivar: _isPerformingChanges
@property (nonatomic) BOOL isResourceLoaded; // ivar: _isResourceLoaded
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) BOOL prefersPagingEnabled; // ivar: _prefersPagingEnabled
@property (retain, nonatomic) PXGadgetOrbContext *previewOrbContext; // ivar: _previewOrbContext
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) BOOL selectionFollowsFocus; // ivar: _selectionFollowsFocus
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleContentRect; // ivar: _visibleContentRect
@property (nonatomic) BOOL visibleGadgetsLoaded; // ivar: _visibleGadgetsLoaded


-(BOOL)gadget:(id)arg0 transitionToViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(BOOL)isRootGadgetViewController;
-(NSInteger)_columnSpanForTraitCollection:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)contentViewController;
-(id)contextMenuWithSuggestedActions:(id)arg0 ;
-(id)gadgetTransition;
-(id)initWithDataSourceManager:(id)arg0 ;
-(id)initWithLayout:(id)arg0 dataSourceManager:(id)arg1 ;
-(id)initWithProviders:(id)arg0 ;
-(id)previewParametersForTargetPreviewView:(id)arg0 ;
-(id)previewViewControllerAtLocation:(struct CGPoint )arg0 fromSourceView:(id)arg1 ;
-(id)rootNavigationHelper;
-(id)targetPreviewViewForLocation:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(struct CGPoint )collectionView:(id)arg0 targetContentOffsetForProposedContentOffset:(struct CGPoint )arg1 ;
-(struct CGRect )visibleBounds;
-(struct CGSize )_ensureCachedHeightForColumnWidth:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_extendedTraitCollectionDidChange:(NSUInteger)arg0 ;
-(void)_updateCollectionViewPaging;
-(void)_updateColumnSettings;
-(void)collectionView:(id)arg0 prefetchItemsAtIndexPaths:(id)arg1 ;
-(void)commitPreviewView:(id)arg0 ;
-(void)commitPreviewViewController:(id)arg0 ;
-(void)contentViewDidDisappear;
-(void)contentViewWillAppear;
-(void)didDismissPreviewViewController:(id)arg0 committing:(BOOL)arg1 ;
-(void)didDismissPreviewWithPreviewView:(id)arg0 committing:(BOOL)arg1 ;
-(void)gadget:(id)arg0 didChange:(NSUInteger)arg1 ;
-(void)gadgetControllerFinishedUpdatingDataSourceWithChange:(id)arg0 ;
-(void)gadgetControllerHasAppeared;
-(void)gadgetControllerHasDisappeared;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)prefetchDuringScrollingForWidth:(CGFloat)arg0 ;
-(void)setLayout:(id)arg0 ;
-(void)updateIfNeeded;
-(void)userDidSelectAccessoryButton:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif