// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIAVAILABILITYVIEWCONTROLLER_H
#define EKUIAVAILABILITYVIEWCONTROLLER_H

@class NSOperationQueue, UIBarButtonItem, NSArray, NSDate, UIView, NSString, EKEvent, NSMutableArray, NSLayoutConstraint, UIButton, _UINavigationBarPalette, UIScrollView;
@protocol UIScrollViewDelegate;


#import "EKEditItemViewController.h"
#import "EKUIAvailabilityFreeSpanView.h"
#import "EKUIResizingDateLabel.h"
#import "EKUIAvailabilityParticipantList.h"
#import "EKUIAvailabilityTimelineView.h"
#import "EKUIAvailabilityTitleContainerView.h"

@interface EKUIAvailabilityViewController : EKEditItemViewController <UIScrollViewDelegate>



@property (retain, nonatomic) NSOperationQueue *availabilityRequestsQueue; // ivar: _availabilityRequestsQueue
@property CGFloat availableWidth; // ivar: _availableWidth
@property (retain) UIBarButtonItem *bottomNextTime; // ivar: _bottomNextTime
@property (retain) UIBarButtonItem *bottomSpinner; // ivar: _bottomSpinner
@property (retain) NSArray *busyParticipants; // ivar: _busyParticipants
@property BOOL compact; // ivar: _compact
@property (retain) NSDate *currentStartDate; // ivar: _currentStartDate
@property (retain) UIView *dateNavContainer; // ivar: _dateNavContainer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) UIBarButtonItem *doneButton; // ivar: _doneButton
@property (retain) EKEvent *event; // ivar: _event
@property (retain) EKUIAvailabilityFreeSpanView *eventTime; // ivar: _eventTime
@property BOOL fetchingData; // ivar: _fetchingData
@property (retain, nonatomic) NSMutableArray *freeSpanViews; // ivar: _freeSpanViews
@property BOOL fromDetail; // ivar: _fromDetail
@property (readonly) NSUInteger hash;
@property (retain) NSMutableArray *hourLines; // ivar: _hourLines
@property (retain) UIView *largeDateNavContainer; // ivar: _largeDateNavContainer
@property (retain) NSLayoutConstraint *largeNavLeadingConstraint; // ivar: _largeNavLeadingConstraint
@property (retain) EKUIResizingDateLabel *largeWeekdayLabel; // ivar: _largeWeekdayLabel
@property (retain) NSDate *modifiedEndDate; // ivar: _modifiedEndDate
@property (retain) NSDate *modifiedStartDate; // ivar: _modifiedStartDate
@property (retain) UIButton *nextButton; // ivar: _nextButton
@property (retain) _UINavigationBarPalette *palette; // ivar: _palette
@property (retain, nonatomic) NSMutableArray *participantAvailabilityViews; // ivar: _participantAvailabilityViews
@property (retain) UIView *participantDivider; // ivar: _participantDivider
@property (retain, nonatomic) EKUIAvailabilityParticipantList *participantList; // ivar: _participantList
@property (retain) NSLayoutConstraint *participantWidthConstraint; // ivar: _participantWidthConstraint
@property (retain, nonatomic) NSArray *participants; // ivar: _participants
@property CGFloat pinchStartRatio; // ivar: _pinchStartRatio
@property CGFloat pinchStartWidth; // ivar: _pinchStartWidth
@property (retain) UIButton *previousButton; // ivar: _previousButton
@property CGFloat rowHeight; // ivar: _rowHeight
@property (copy) id *saveBlock; // ivar: _saveBlock
@property (retain) UIScrollView *scrollView; // ivar: _scrollView
@property BOOL searchingForNextAvailableTime; // ivar: _searchingForNextAvailableTime
@property (readonly) Class superclass;
@property (retain) NSLayoutConstraint *timelineHeightConstraint; // ivar: _timelineHeightConstraint
@property (retain) EKUIAvailabilityTimelineView *timelineView; // ivar: _timelineView
@property (retain) NSMutableArray *titleConstraints; // ivar: _titleConstraints
@property (retain) EKUIAvailabilityTitleContainerView *titleContainer; // ivar: _titleContainer
@property (retain) UIBarButtonItem *topNextTime; // ivar: _topNextTime
@property (retain) UIBarButtonItem *topSpacer; // ivar: _topSpacer
@property (retain) UIBarButtonItem *topSpinner; // ivar: _topSpinner
@property (retain) EKUIResizingDateLabel *weekdayLabel; // ivar: _weekdayLabel


+(CGFloat)defaultTimelineHeight;
+(id)cancelNextTimeString;
+(id)nextTimeString;
+(id)presentAvailabilityViewControllerForEvent:(id)arg0 fromViewController:(id)arg1 editDelegate:(id)arg2 ;
-(BOOL)span:(id)arg0 overlapsWithDate:(id)arg1 ;
-(BOOL)span:(id)arg0 overlapsWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)updateCurrentEventAtTime:(id)arg0 ;
-(CGFloat)convertDateIntoOffset:(id)arg0 ;
-(CGFloat)timelineWidth;
-(id)dedupSpans:(id)arg0 ;
-(id)eventFreeSpanAtStart:(id)arg0 endDate:(id)arg1 isFreeSpan:(BOOL)arg2 ;
-(id)initWithEvent:(id)arg0 ;
-(id)mergeSpan:(id)arg0 intoSpans:(id)arg1 ;
-(struct CGRect )frameForFreeSpanViewAtStart:(id)arg0 endDate:(id)arg1 duration:(CGFloat)arg2 ;
-(struct CGSize )preferredContentSize;
-(void)cancelTapped:(id)arg0 ;
-(void)clearFreeSpanViews;
-(void)configureNavBarAndToolBar;
-(void)configureParticipants;
-(void)contentCategorySizeChanged:(id)arg0 ;
-(void)doneTapped:(id)arg0 ;
-(void)fetchAvailability;
-(void)findNextFreeSpan;
-(void)findPossibleEventRanges;
-(void)layout;
-(void)loadView;
-(void)nextAvailableTimeTapped:(id)arg0 ;
-(void)nextDayTapped:(id)arg0 ;
-(void)previousDayTapped:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setDate:(id)arg0 ;
-(void)singleTap:(id)arg0 ;
-(void)sizeWillBeCompact:(BOOL)arg0 ;
-(void)updateForContentCategory;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewPinched:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif