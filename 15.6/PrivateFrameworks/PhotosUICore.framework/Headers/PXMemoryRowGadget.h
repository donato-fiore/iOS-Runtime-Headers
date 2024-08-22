// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMEMORYROWGADGET_H
#define PXMEMORYROWGADGET_H

@class UIViewController, NSString, NSMutableDictionary;
@protocol PXSectionedDataSourceManagerObserver, PXForYouMemoriesViewControllerDelegate, PXUIViewControllerZoomTransitionEndPoint, PXProgrammaticNavigationParticipant, PXGadget, PXGadgetDelegate;


#import "PXMemoriesFeedWidgetDataSourceManager.h"
#import "PXGadgetSpec.h"
#import "PXProgrammaticNavigationDestination.h"

@interface PXMemoryRowGadget : UIViewController <PXSectionedDataSourceManagerObserver, PXForYouMemoriesViewControllerDelegate, PXUIViewControllerZoomTransitionEndPoint, PXProgrammaticNavigationParticipant, PXGadget>

 {
    ? _updateFlags;
}


@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) NSUInteger currentNumberOfColumns; // ivar: _currentNumberOfColumns
@property (retain, nonatomic) NSObject<PXUIViewControllerZoomTransitionEndPoint> *currentTransitionEndPoint; // ivar: _currentTransitionEndPoint
@property (nonatomic) NSInteger currentVisibility; // ivar: _currentVisibility
@property (readonly, nonatomic) PXMemoriesFeedWidgetDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (nonatomic) BOOL hasAppeared; // ivar: _hasAppeared
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (readonly, nonatomic) BOOL keepsSourceRegionOfInterestContent;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *viewControllerEntries; // ivar: _viewControllerEntries
@property (nonatomic) CGRect visibleContentRect;


+(NSInteger)visibilityForGadgetSpec:(id)arg0 numberOfMemories:(NSUInteger)arg1 ;
+(NSUInteger)numberOfColumnsForCurrentVisibility:(NSInteger)arg0 rowType:(NSUInteger)arg1 numberOfMemories:(NSUInteger)arg2 ;
+(struct _NSRange )dataSourceRangeForRowType:(NSUInteger)arg0 currentVisibility:(NSInteger)arg1 ;
-(BOOL)_shouldPageForRowType:(NSUInteger)arg0 ;
-(BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg0 ;
-(NSInteger)_columnSpanForRowType:(NSUInteger)arg0 ;
-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)contentViewController;
-(id)initWithDataSourceManager:(id)arg0 ;
-(id)nextExistingParticipantOnRouteToDestination:(id)arg0 ;
-(id)px_diagnosticsItemProvidersForPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)px_endPointForTransition:(id)arg0 ;
-(id)uniqueGadgetIdentifier;
-(struct CGRect )_frameForRowType:(NSUInteger)arg0 inRect:(struct CGRect )arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureMetricsForMultiRow:(id)arg0 dataSourceRange:(struct _NSRange )arg1 ;
-(void)_configureMetricsForSingleRow:(id)arg0 dataSourceRange:(struct _NSRange )arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_dismissIfNeeded;
-(void)_fillViewControllerEntryForRowType:(NSUInteger)arg0 ;
-(void)_refreshViewControllerForRowType:(NSUInteger)arg0 visibility:(NSInteger)arg1 ;
-(void)_removeViewControllerEntryForRowType:(NSUInteger)arg0 ;
-(void)_transitionFromCurrentVisibility:(NSInteger)arg0 toNewVisibility:(NSInteger)arg1 ;
-(void)_updateIfNeeded;
-(void)_updateNumberOfColumnsIfNeeded;
-(void)_updateScrollingBehaviorForRowType:(NSUInteger)arg0 ;
-(void)_updateScrollingBehaviorIfNeeded;
-(void)_updateVisibilityIfNeeded;
-(void)forYouMemoriesViewController:(id)arg0 configureMetrics:(id)arg1 ;
-(void)forYouMemoriesViewController:(id)arg0 transitionToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)gadgetControllerHasAppeared;
-(void)gadgetControllerHasDisappeared;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)userDidSelectAccessoryButton:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif