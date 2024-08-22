// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDDATALISTVIEWCONTROLLER_H
#define WDDATALISTVIEWCONTROLLER_H

@class HKTableViewController, UIBarButtonItem, UIActivityIndicatorView, _UIContentUnavailableView, UITapGestureRecognizer, NSString, HKDisplayType, NSDate;
@protocol HKMonthViewControllerDelegate, WDUserActivityResponder, WDDataListViewControllerDataProvider;


#import "WDProfile.h"

@interface WDDataListViewController : HKTableViewController <HKMonthViewControllerDelegate, WDUserActivityResponder>

 {
    WDProfile *_profile;
    UIBarButtonItem *_deleteAllButtonItem;
    UIActivityIndicatorView *_spinner;
    NSInteger _cellStyle;
    _UIContentUnavailableView *_noContentView;
    UITapGestureRecognizer *_navigationBarTapGestureRecognizer;
    BOOL _showOriginalAppProvenance;
}


@property (readonly, nonatomic) NSObject<WDDataListViewControllerDataProvider> *dataProvider; // ivar: _dataProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKDisplayType *displayType; // ivar: _displayType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WDProfile *profile;
@property (retain, nonatomic) NSDate *scrollToDate; // ivar: _scrollToDate
@property (readonly) Class superclass;


-(BOOL)_hasSpinnerRowRowAtIndexPath:(id)arg0 ;
-(BOOL)_shouldShowSpinnerRowInSection:(NSInteger)arg0 ;
-(BOOL)isEditEnabled;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)_closestRowToDate:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_defaultCellForTableView:(id)arg0 cellStyle:(NSInteger)arg1 indexPath:(id)arg2 object:(id)arg3 ;
-(id)_deleteAllDataAlertMessage;
-(id)_overridenDisplayImageForSource:(id)arg0 ;
-(id)_quantityCellForTableView:(id)arg0 dataObjectSource:(id)arg1 ;
-(id)_rightBarButtonItems;
-(id)_sampleAtIndexPath:(id)arg0 ;
-(id)_sampleTypesForDeleteAll;
-(id)applyTransitionActivity:(id)arg0 ;
-(id)initWithDisplayType:(id)arg0 profile:(id)arg1 dataProvider:(id)arg2 usingInsetStyling:(BOOL)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_calendarDateSelectorButtonTapped:(id)arg0 ;
-(void)_deleteAllButtonTapped:(id)arg0 ;
-(void)_deleteAllWithOptions:(NSUInteger)arg0 ;
-(void)_deleteAssociatedSamplesConfirmationPlural:(BOOL)arg0 deleteBlock:(id)arg1 ;
-(void)_deleteWorkoutSamplesConfirmationPlural:(BOOL)arg0 deleteBlock:(id)arg1 ;
-(void)_displayTypeStringsChanged:(id)arg0 ;
-(void)_handleReturnedImage:(id)arg0 forSource:(id)arg1 cell:(id)arg2 fetchError:(id)arg3 ;
-(void)_handleReturnedImage:(id)arg0 forSource:(id)arg1 cell:(id)arg2 tableView:(id)arg3 fetchError:(id)arg4 ;
-(void)_loadIconForSourceObject:(id)arg0 onCell:(id)arg1 ofTableView:(id)arg2 ;
-(void)_localeDidChange:(id)arg0 ;
-(void)_reloadAllData;
-(void)_reloadAllDataScrolledToDate:(id)arg0 ;
-(void)_tapGestureRecognizerAction:(id)arg0 ;
-(void)_updateActivityForViewDidAppear;
-(void)_updateNavigationTitle;
-(void)_updateRightBarButtonItems;
-(void)applyChangeActivity:(id)arg0 ;
-(void)dealloc;
-(void)didTapBackButtonForMonthViewController:(id)arg0 ;
-(void)monthViewController:(id)arg0 didSelectDate:(id)arg1 ;
-(void)resetDataAndScrollToDate:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif