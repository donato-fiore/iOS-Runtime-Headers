// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKADDHOLIDAYCALENDAREDITOR_H
#define EKADDHOLIDAYCALENDAREDITOR_H

@class NSArray, NSSet, CUIKSubscribedHolidayCalendar, UISearchController, UIView, UILabel, UIActivityIndicatorView, EKSource, NSString;
@protocol EKCalendarEditorDelegate, UISearchResultsUpdating;


#import "EKAbstractCalendarEditor.h"
#import "EKSubscribedCalendarEditor.h"

@interface EKAddHolidayCalendarEditor : EKAbstractCalendarEditor <EKCalendarEditorDelegate, UISearchResultsUpdating>

 {
    NSArray *_calendarData;
    NSArray *_filteredCalendarData;
    NSSet *_alreadySubscribedCalendarURLStrings;
    CUIKSubscribedHolidayCalendar *_selectedCalendarDatum;
    EKSubscribedCalendarEditor *_subscriptionEditor;
    UISearchController *_searchController;
    UIView *_standbyScreen;
    UILabel *_standbyMessageLabel;
    UIActivityIndicatorView *_spinner;
    EKSource *_limitedToSource;
    NSUInteger _entityType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_alreadySubscribedToCalendar:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)editItems;
-(id)initWithCalendar:(id)arg0 eventStore:(id)arg1 entityType:(NSUInteger)arg2 limitedToSource:(id)arg3 ;
-(id)rightButton;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct CGSize )calculatePreferredContentSize;
-(void)_beginLoadingHolidayCalendars;
-(void)_displayCalendarListScreen;
-(void)_displayErrorScreen;
-(void)_displayLoadingScreen;
-(void)_holidayCalendarsLoadCompletedWithCalendarData:(id)arg0 ;
-(void)_holidayCalendarsLoadFailed;
-(void)_populatedAlreadySubscribedCalendarURLs;
-(void)calendarEditor:(id)arg0 didCompleteWithAction:(int)arg1 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif