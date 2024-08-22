// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHPADADDSHEETVIEWCONTROLLER_H
#define SBHPADADDSHEETVIEWCONTROLLER_H

@class NSMutableDictionary, NSArray, MTMaterialView, NSString, UIView, UISplitViewController;
@protocol SBHAddWidgetSheetViewControllerDelegate, SBHMainAddSheetViewControlling, SBHWidgetSheetViewControllerPresenter, SBHWidgetDragHandling;


#import "SBHAddWidgetSheetViewControllerBase.h"
#import "SBHAddWidgetSheetViewController.h"
#import "SBHWidgetSearchController.h"

@interface SBHPadAddSheetViewController : SBHAddWidgetSheetViewControllerBase <SBHAddWidgetSheetViewControllerDelegate, SBHMainAddSheetViewControlling>

 {
    NSMutableDictionary *_userInfo;
    SBHPadAddWidgetSheetMetrics _landscapeMetrics;
    SBHPadAddWidgetSheetMetrics _portraitMetrics;
}


@property (retain, nonatomic) NSArray *applicationWidgetCollections; // ivar: _applicationWidgetCollections
@property (retain, nonatomic) MTMaterialView *backgroundView; // ivar: _backgroundView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger galleryLayoutSize; // ivar: _galleryLayoutSize
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBHAddWidgetSheetViewController *left; // ivar: _left
@property (weak, nonatomic) NSObject<SBHWidgetSheetViewControllerPresenter> *presenter; // ivar: _presenter
@property (retain, nonatomic) UIView *redBox; // ivar: _redBox
@property (retain, nonatomic) NSArray *searchBarGradientMaskLayers; // ivar: _searchBarGradientMaskLayers
@property (retain, nonatomic) UISplitViewController *splitViewController; // ivar: _splitViewController
@property (retain, nonatomic) NSMutableDictionary *suggestedItemsByGalleryLayoutSize; // ivar: _suggestedItemsByGalleryLayoutSize
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;
@property (readonly, weak, nonatomic) NSObject<SBHWidgetDragHandling> *widgetDragHandler;
@property (retain, nonatomic) SBHWidgetSearchController *widgetSearchController; // ivar: _widgetSearchController


-(CGFloat)_columnSpacing;
-(CGFloat)_paddedSidebarWidthForInterfaceOrientation:(NSInteger)arg0 ;
-(CGFloat)_widthNeededForWidgetColumns:(NSUInteger)arg0 ;
-(NSUInteger)_numberOfWidgetColumnsForGalleryLayoutSize:(NSUInteger)arg0 ;
-(NSUInteger)_numberOfWidgetColumnsThatFitInWidth:(CGFloat)arg0 ;
-(id)_detailViewController;
-(id)_newBackgroundView;
-(id)backgroundViewMatchingMaterialBeneathAddWidgetSheetViewController:(id)arg0 ;
-(id)initWithListLayoutProvider:(id)arg0 iconViewProvider:(id)arg1 allowedWidgets:(struct SBHWidgetFilteringParameters )arg2 appCellConfigurator:(id)arg3 ;
-(id)suggestedItemsForGalleryLayoutSize:(NSUInteger)arg0 ;
-(struct SBHPadAddWidgetSheetMetrics )_metricsForOrientation:(NSInteger)arg0 ;
-(struct UIEdgeInsets )preferredInsetsForSheetPresentationInInterfaceOrientation:(NSInteger)arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_layoutSearchBarGradientMaskLayers;
-(void)addWidgetSheetViewController:(id)arg0 didSelectWidgetIconView:(id)arg1 ;
-(void)addWidgetSheetViewControllerDidAppear:(id)arg0 ;
-(void)addWidgetSheetViewControllerDidCancel:(id)arg0 ;
-(void)addWidgetSheetViewControllerDidDisappear:(id)arg0 ;
-(void)addWidgetSheetViewControllerWillAppear:(id)arg0 ;
-(void)addWidgetSheetViewControllerWillDisappear:(id)arg0 ;
-(void)configureViewsForInterfaceOrientation:(NSInteger)arg0 ;
-(void)dealloc;
-(void)setSuggestedItems:(id)arg0 forGalleryLayoutSize:(NSUInteger)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif