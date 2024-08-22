// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDDISPLAYTYPEDETAILVIEWCONTROLLER_H
#define WDDISPLAYTYPEDETAILVIEWCONTROLLER_H

@class HKTableViewController, HKDisplayType, HKDisplayCategory, HKNavigationController, NSDate, _UINavigationControllerPalette, HKTimeScopeControl, NSSet, UIFont, NSString, HKInteractiveChartViewController, NSMutableArray;
@protocol UITableViewDataSource, UITableViewDelegate, HKInteractiveChartViewObserver, WDSourceOrderObserver, WDUserActivityResponder;


#import "WDProfile.h"

@interface WDDisplayTypeDetailViewController : HKTableViewController <UITableViewDataSource, UITableViewDelegate, HKInteractiveChartViewObserver, WDSourceOrderObserver, WDUserActivityResponder>

 {
    HKDisplayType *_displayType;
    HKDisplayCategory *_displayCategory;
    HKNavigationController *_monthNavController;
    NSDate *_selectedDate;
    _UINavigationControllerPalette *_palette;
    HKTimeScopeControl *_timeSpanControl;
    NSSet *_availableUnits;
    BOOL _inLandscapeMode;
}


@property (retain, nonatomic) UIFont *bodyFont; // ivar: _bodyFont
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKInteractiveChartViewController *interactiveChartViewController; // ivar: _interactiveChartViewController
@property (retain, nonatomic) WDProfile *profile; // ivar: _profile
@property (retain, nonatomic) NSMutableArray *sections; // ivar: _sections
@property (readonly) Class superclass;


-(BOOL)_canSelectUnitsRow;
-(BOOL)_shouldShowUnitsRow;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_selectedUnitCellText;
-(id)_showAddDataVC:(id)arg0 ;
-(id)_showAllDataVC:(id)arg0 ;
-(id)applyTransitionActivity:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayType:(id)arg0 displayCategory:(id)arg1 profile:(id)arg2 displayDate:(id)arg3 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_addActivityForAction:(NSInteger)arg0 newResponder:(id)arg1 ;
-(void)_attachPaletteIfNecessary;
-(void)_changeTimeScope:(NSInteger)arg0 ;
-(void)_configureCell:(id)arg0 forTableView:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_detachPaletteIfNecessary;
-(void)_displayTypeStringsChanged:(id)arg0 ;
-(void)_localeDidChange:(id)arg0 ;
-(void)_setupObservers;
-(void)_timeFrameForChartsChanged:(id)arg0 ;
-(void)_unitPreferencesDidUpdate:(id)arg0 ;
-(void)_updateActivityForViewDidAppear;
-(void)addSectionWithItem:(id)arg0 ;
-(void)addSectionWithItems:(id)arg0 ;
-(void)applyChangeActivity:(id)arg0 ;
-(void)calculateSections;
-(void)dealloc;
-(void)sourceOrderUpdatedWithOrder:(id)arg0 dataType:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif