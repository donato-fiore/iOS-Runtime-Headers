// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTTRAVELTIMEEDITVIEWCONTROLLER_H
#define EKEVENTTRAVELTIMEEDITVIEWCONTROLLER_H

@class EKCalendarItem, EKEventStore, UITableView, NSIndexPath, UISwitch, NSString, UIView, UITableViewCell, NSDate, EKStructuredLocation;
@protocol UITableViewDataSource, UITableViewDelegate, EKTravelRouteEstimationControllerDelegate, EKEditItemViewControllerDelegate;


#import "EKEditItemViewController.h"
#import "EKTravelRouteEstimationController.h"

@interface EKEventTravelTimeEditViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKTravelRouteEstimationControllerDelegate, EKEditItemViewControllerDelegate>

 {
    CGRect _initFrame;
    EKCalendarItem *_calendarItem;
    EKEventStore *_eventStore;
    UITableView *_table;
    NSIndexPath *_checkedItem;
    UISwitch *_switchControl;
    NSInteger _travelTimeSelectedChoice;
    CGFloat _customTravelTimeDuration;
    BOOL _estimationGroupIsShowing;
    BOOL _customTimesGroupIsShowing;
    BOOL _externallySetValueGroupIsShowing;
    BOOL _isAnimatingTableSections;
    BOOL _pendingReloadData;
    NSString *_routeEstimationErrorMessage;
    BOOL _isOriginSelectionVisible;
    BOOL _suppressErrors;
    BOOL _needsShowOriginAlert;
    BOOL _estimatedRowIsChecked;
    EKTravelRouteEstimationController *_routeEstimationControler;
    NSInteger _selectedRoutingMode;
    NSInteger _originalSelectedRoutingMode;
    CGFloat _originalSelectedTravelTime;
    UIView *_shadowView;
    UITableViewCell *_sampleSizingCell;
}


@property (retain, nonatomic) NSDate *arrivalDate; // ivar: _arrivalDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) EKStructuredLocation *destinationStructuredLocation; // ivar: _destinationStructuredLocation
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EKStructuredLocation *originStructuredLocation; // ivar: _originStructuredLocation
@property (nonatomic) NSInteger selectedRoutingMode;
@property (nonatomic) CGFloat selectedTravelTime; // ivar: _selectedTravelTime
@property (readonly) Class superclass;


+(id)_cannotProvideDirectionsLocalizedString;
+(id)_directionsCouldNotBeFoundLocalizedString;
+(id)_okLocalizedString;
+(id)_startingLocationLocalizedString;
+(id)_travelTimeLocalizedString;
-(BOOL)_shouldAutoSelectEstimatedTravelTimeOnLookupCompletion;
-(BOOL)_showingOptions;
-(BOOL)_showingOptionsInitialState;
-(BOOL)editItemViewControllerSave:(id)arg0 ;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(BOOL)setTravelTimeSelectedChoiceEstimatedRowAtIndex:(NSUInteger)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_cellStyleForIndexPath:(id)arg0 ;
-(NSInteger)_numberOfEstimatedTravelTimeResultRows;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSInteger)travelTimeSelectedChoice;
-(NSUInteger)_customTravelTimeSection;
-(NSUInteger)_estimatedTravelTimeSection;
-(NSUInteger)_externallySetValueTravelTimeSection;
-(NSUInteger)_toggleSwitchSection;
-(id)_errorStringForMapKitErrorCode:(NSUInteger)arg0 ;
-(id)_indexPathForSelectedTravelTime;
-(id)_routeEstimationControler;
-(id)_stringForOriginLocation;
-(id)editItemEventToDetach;
-(id)initWithFrame:(struct CGRect )arg0 styleProvider:(id)arg1 calendarItem:(id)arg2 eventStore:(id)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_autoselectFromAvailableChoices;
-(void)_checkItemAtIndexPath:(id)arg0 ;
-(void)_contentCategorySizeChanged:(id)arg0 ;
-(void)_handleEstimationControllerTravelTimeLookupErrors;
-(void)_handleOriginLocationErrorsWithAlert:(BOOL)arg0 ;
-(void)_layoutShadowView;
-(void)_locationsChanged;
-(void)_originLocationButtonWasTapped;
-(void)_setEstimationActive:(BOOL)arg0 ;
-(void)_showRouteEstimationAlert;
-(void)_travelTimeActivationSwitchChanged:(id)arg0 ;
-(void)_updateTableView;
-(void)_updateVisibleSections;
-(void)editItemViewController:(id)arg0 didCompleteWithAction:(int)arg1 ;
-(void)loadView;
-(void)resetBackgroundColor;
-(void)routeEstimationControllerDidBeginOriginLocationLookup:(id)arg0 ;
-(void)routeEstimationControllerDidBeginTravelTimeLookup:(id)arg0 ;
-(void)routeEstimationControllerDidFinishOriginLocationLookup:(id)arg0 ;
-(void)routeEstimationControllerDidFinishTravelTimeLookup:(id)arg0 ;
-(void)setCell:(id)arg0 checked:(BOOL)arg1 ;
-(void)setTravelTimeSelectedChoice:(NSInteger)arg0 ;
-(void)setTravelTimeSelectedChoiceToFirstValidEstimatedRow;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayFooterView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif