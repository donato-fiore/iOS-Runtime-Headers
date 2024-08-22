// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKDAYPREVIEWCONTROLLER_H
#define EKDAYPREVIEWCONTROLLER_H

@class UIViewController, NSArray, UIView, NSDate, NSString, EKEvent;
@protocol EKDayViewDataSource, EKEditItemViewControllerProtocol, EKEditItemViewControllerDelegate;


#import "EKDayView.h"

@interface EKDayPreviewController : UIViewController <EKDayViewDataSource, EKEditItemViewControllerProtocol>

 {
    BOOL _firstshow;
    BOOL _userHasTappedToExpand;
    BOOL _isAnimating;
    NSArray *_cachedTimedEvents;
    UIView *_roundedView;
    EKDayView *_dayView;
    NSDate *_date;
    NSDate *_originalEventStartDate;
    NSDate *_originalEventEndDate;
    BOOL _hasOverriddenEventDates;
    NSDate *_overriddenEventStartDate;
    NSDate *_overriddenEventEndDate;
    BOOL _hasOverriddenStatus;
    BOOL _requireScrollPositionCorrection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (retain, nonatomic) EKEvent *event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesAllDayEvents; // ivar: _hidesAllDayEvents
@property (weak, nonatomic) UIViewController *hostingViewController; // ivar: _hostingViewController
@property (nonatomic) NSInteger overriddenParticipantStatus; // ivar: _overriddenParticipantStatus
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL respectsSelectedCalendarsFilter; // ivar: _respectsSelectedCalendarsFilter
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic) BOOL useCustomBackButton;


-(BOOL)_eventOccursOnThisDay:(id)arg0 ;
-(BOOL)_shouldShowAllVisibleEvents;
-(CGFloat)_dayViewHeight;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_anchorEvent;
-(id)_dateForFirstHourMarker;
-(id)_eventsForStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)_hourMaskForEvents:(id)arg0 ;
-(id)_selectedCalendars;
-(id)dayView:(id)arg0 eventsForStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithDate:(id)arg0 event:(id)arg1 overriddenEventStartDate:(id)arg2 overriddenEventEndDate:(id)arg3 ;
-(struct CGSize )preferredContentSize;
-(struct _NSRange )_displayedHoursRange;
-(void)_scrollDayViewToCorrectOffsetAnimated:(BOOL)arg0 ;
-(void)_setNewVisibleHourLabels;
-(void)_setupAutoLayout;
-(void)_setupDayView;
-(void)loadView;
-(void)reload;
-(void)reloadWithNewDate:(id)arg0 overriddenEventStartDate:(id)arg1 overriddenEventEndDate:(id)arg2 ;
-(void)renderPressHighlight:(BOOL)arg0 ;
-(void)toggleExpandedState;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif