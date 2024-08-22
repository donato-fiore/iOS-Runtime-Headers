// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKOVERLAYROOMVIEWCONTROLLER_H
#define HKOVERLAYROOMVIEWCONTROLLER_H

@class NSString, NSDateInterval, NSDate, NSArray, NSUserActivity;
@protocol HKDisplayTypeSectionedContextViewDelegate, HKInteractiveChartViewObserver, HKSampleTypeDateRangeControllerObserver, HKSampleTypeUpdateControllerObserver, HKChartOverlayVersionProviding, OS_dispatch_queue, HKOverlayRoomViewControllerLayoutDelegate;


#import "HKViewController.h"
#import "HKOverlayRoomApplicationItems.h"
#import "HKInteractiveChartOverlayViewController.h"
#import "HKOverlayContextLocation.h"
#import "HKValueRange.h"
#import "HKDisplayType.h"
#import "HKDisplayTypeSectionedContextView.h"

@interface HKOverlayRoomViewController : HKViewController <HKDisplayTypeSectionedContextViewDelegate, HKInteractiveChartViewObserver, HKSampleTypeDateRangeControllerObserver, HKSampleTypeUpdateControllerObserver, HKChartOverlayVersionProviding>



@property (retain, nonatomic) HKOverlayRoomApplicationItems *applicationItems; // ivar: _applicationItems
@property (retain, nonatomic) HKInteractiveChartOverlayViewController *chartController; // ivar: _chartController
@property (readonly, nonatomic) NSString *chartOverlayVersion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *contextUpdateQueue; // ivar: _contextUpdateQueue
@property (nonatomic) NSInteger controllerMode; // ivar: _controllerMode
@property (copy, nonatomic) NSDateInterval *currentChartDateInterval; // ivar: _currentChartDateInterval
@property (nonatomic) NSInteger currentChartTimeScope; // ivar: _currentChartTimeScope
@property (retain, nonatomic) HKOverlayContextLocation *currentSelectedContextLocation; // ivar: _currentSelectedContextLocation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDate *displayDate; // ivar: _displayDate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKOverlayContextLocation *initialSelectedContextLocation; // ivar: _initialSelectedContextLocation
@property (retain, nonatomic) HKValueRange *initialVisibleDateRange; // ivar: _initialVisibleDateRange
@property (weak, nonatomic) NSObject<HKOverlayRoomViewControllerLayoutDelegate> *layoutDelegate; // ivar: _layoutDelegate
@property (retain, nonatomic) NSArray *overlayContextSections; // ivar: _overlayContextSections
@property (retain, nonatomic) HKDisplayType *primaryDisplayType; // ivar: _primaryDisplayType
@property (retain, nonatomic) HKOverlayContextLocation *restorationContextLocation; // ivar: _restorationContextLocation
@property (readonly, nonatomic) NSUserActivity *restorationUserActivity; // ivar: _restorationUserActivity
@property (retain, nonatomic) HKDisplayTypeSectionedContextView *sectionedContextView; // ivar: _sectionedContextView
@property (nonatomic) BOOL shouldSelectInitialOverlay; // ivar: _shouldSelectInitialOverlay
@property (retain, nonatomic) NSUserActivity *showAllFiltersActivity; // ivar: _showAllFiltersActivity
@property (nonatomic) BOOL showAllFiltersVisible; // ivar: _showAllFiltersVisible
@property (readonly) Class superclass;
@property (nonatomic) BOOL userHasOverriddenPreferredOverlay; // ivar: _userHasOverriddenPreferredOverlay


-(BOOL)_canSelectOverlayLocation:(id)arg0 previousSelection:(id)arg1 ;
-(BOOL)_currentSelectedContextValidForTimeScope:(NSInteger)arg0 ;
-(BOOL)_shouldUpdateContextItemsForChanges:(id)arg0 ;
-(BOOL)contextView:(id)arg0 canSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)stacksOverlays;
-(BOOL)supportsShowAllFilters;
-(NSInteger)_contextItemCount;
-(id)_contextViewBackgroundColor;
-(id)_currentChartEffectiveVisibleRange;
-(id)_currentIndexPath;
-(id)_findNavigationController;
-(id)contextSectionsForMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 ;
-(id)controllerTitleWithApplicationItems:(id)arg0 ;
-(id)createChartOverlayViewController;
-(id)createViewControllerForMode:(NSInteger)arg0 displayDate:(id)arg1 applicationItems:(id)arg2 ;
-(id)initWithDisplayDate:(id)arg0 applicationItems:(id)arg1 mode:(NSInteger)arg2 ;
-(id)initialSelectedContextForMode:(NSInteger)arg0 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg0 ;
-(id)restorationStateDictionary;
-(id)showAllFiltersButtonTitle;
-(void)_didPresentShowAllFilters;
-(void)_invalidateContextItems;
-(void)_layoutNoVerticalExpansion:(id)arg0 ;
-(void)_pinView:(id)arg0 toSafeAreaOf:(id)arg1 ;
-(void)_refreshContextItemsAndUpdateChart:(BOOL)arg0 ;
-(void)_refreshUpdatedItemsWithChartUpdate:(BOOL)arg0 invalidateChartItems:(BOOL)arg1 ;
-(void)_selectContextItemAtLocation:(id)arg0 animated:(BOOL)arg1 ;
-(void)_selectPreferredItem;
-(void)_setupInterface;
-(void)_setupOverlayContextItems;
-(void)_setupPrimaryDisplayType;
-(void)_showAllFilters;
-(void)_showAllFilters:(id)arg0 ;
-(void)_unselectCurrentContext;
-(void)_updateChartForOverlaySelection:(id)arg0 previousSelection:(id)arg1 ;
-(void)_updateContextTiles;
-(void)_willPresentShowAllFilters;
-(void)contextView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)contextView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)contextViewDidInvalidateLayout:(id)arg0 ;
-(void)dealloc;
-(void)didChangeFromContextItem:(id)arg0 toContextItem:(id)arg1 ;
-(void)didUpdateFromDateZoom:(NSInteger)arg0 toDateZoom:(NSInteger)arg1 newVisibleRange:(id)arg2 ;
-(void)didUpdateSeriesWithNewValueRange:(id)arg0 ;
-(void)didUpdateVisibleValueRange:(id)arg0 changeContext:(NSInteger)arg1 ;
-(void)fetchContextItemsIfNeededWithDateInterval:(id)arg0 completion:(id)arg1 ;
-(void)refreshOverlayContextItems;
-(void)reloadOverlayContextItems;
-(void)restoreUserActivityState:(id)arg0 ;
-(void)sampleTypeDateRangeController:(id)arg0 didUpdateDateRanges:(id)arg1 ;
-(void)saveRestorationState;
-(void)updateController:(id)arg0 didReceiveHighFrequencyUpdateForType:(id)arg1 ;
-(void)updateController:(id)arg0 didReceiveUpdateForType:(id)arg1 samplesAdded:(id)arg2 objectsRemoved:(id)arg3 recoveringFromError:(BOOL)arg4 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif