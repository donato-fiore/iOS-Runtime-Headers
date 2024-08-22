// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDREMOTETIMELINEVIEWCONTROLLERPROVIDER_H
#define DDREMOTETIMELINEVIEWCONTROLLERPROVIDER_H

@class NSString, EKEvent, NSArray, EKEventStore;
@protocol EKDayViewControllerDataSource, EKDayViewControllerDelegate;


#import "DDRemoteActionViewControllerProvider.h"

@interface DDRemoteTimeLineViewControllerProvider : DDRemoteActionViewControllerProvider <EKDayViewControllerDataSource, EKDayViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) EKEvent *event; // ivar: _event
@property (retain) NSArray *events; // ivar: _events
@property (readonly) NSUInteger hash;
@property (retain) EKEventStore *store; // ivar: _store
@property (readonly) Class superclass;


-(BOOL)dayViewControllerShouldAllowLongPress:(id)arg0 ;
-(BOOL)dayViewControllerShouldRespondToApplicationDidBecomeActiveStateChange:(id)arg0 ;
-(BOOL)dayViewControllerShouldShowDetachDialogOnGestureDraggingEnd:(id)arg0 ;
-(BOOL)dayviewControllerShouldAllowSwipeToChangeDays:(id)arg0 ;
-(BOOL)delegateWantsToHandleDayViewController:(id)arg0 gestureCommittingOccurrence:(id)arg1 ;
-(id)dayViewController:(id)arg0 createEventAtDate:(id)arg1 allDay:(BOOL)arg2 ;
-(id)dayViewController:(id)arg0 eventsForStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)createViewControllerWithCompletionHandler:(id)arg0 ;
-(void)dayViewController:(id)arg0 awaitsDeletingOccurrence:(id)arg1 ;
-(void)dayViewController:(id)arg0 awaitsRefreshingOccurrence:(id)arg1 ;
-(void)dayViewController:(id)arg0 beginEditingOccurrence:(id)arg1 ;
-(void)dayViewController:(id)arg0 didChangeDisplayDate:(id)arg1 ;
-(void)dayViewController:(id)arg0 didSelectEvent:(id)arg1 ;
-(void)dayViewController:(id)arg0 didSelectEvent:(id)arg1 animated:(BOOL)arg2 ;
-(void)dayViewController:(id)arg0 handleGestureCommittingOccurrence:(id)arg1 ;
-(void)dayViewControllerDidChangeDisplayedOccurrences:(id)arg0 ;
-(void)dayViewControllerDidFinishPinchingDayView:(id)arg0 ;
-(void)dayViewControllerDidReloadData:(id)arg0 ;
-(void)dayViewControllerDidRespondToApplicationDidBecomeActiveStateChange:(id)arg0 ;
-(void)dayViewControllerDidTapEmptySpace:(id)arg0 ;
-(void)dayViewControllerIsPinchingDayView:(id)arg0 ;
-(void)dayViewcontrollerDidBeginMovingEventWithGesture:(id)arg0 ;
-(void)updateSelectedOccurrenceView;


@end


#endif