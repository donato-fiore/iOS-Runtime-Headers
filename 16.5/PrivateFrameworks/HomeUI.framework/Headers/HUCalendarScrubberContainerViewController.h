// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCALENDARSCRUBBERCONTAINERVIEWCONTROLLER_H
#define HUCALENDARSCRUBBERCONTAINERVIEWCONTROLLER_H

@class UIViewController, AVBackgroundView, NSArray, NSString, UIView, NSDate, UIButton, HFCameraPlaybackEngine;
@protocol HUCalendarScrubberViewDelegate, HFCameraPlaybackEngineObserver;


#import "HUCalendarScrubberViewController.h"

@interface HUCalendarScrubberContainerViewController : UIViewController <HUCalendarScrubberViewDelegate, HFCameraPlaybackEngineObserver>



@property (retain, nonatomic) AVBackgroundView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) HUCalendarScrubberViewController *calendarScrubber; // ivar: _calendarScrubber
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *hairlineViewLeft; // ivar: _hairlineViewLeft
@property (retain, nonatomic) UIView *hairlineViewRight; // ivar: _hairlineViewRight
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isEditing; // ivar: _isEditing
@property (retain, nonatomic) NSDate *lastSelectedDate; // ivar: _lastSelectedDate
@property (retain, nonatomic) UIButton *nextWeekButton; // ivar: _nextWeekButton
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (retain, nonatomic) UIButton *prevWeekButton; // ivar: _prevWeekButton
@property (readonly) Class superclass;


-(id)initWithPlaybackEngine:(id)arg0 ;
-(void)_jumpToDate:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateNextPreviousButtonState;
-(void)handleNextButton:(id)arg0 ;
-(void)handlePreviousButton:(id)arg0 ;
-(void)playbackEngine:(id)arg0 didRemoveEvents:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdateEvents:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdatePlaybackPosition:(id)arg1 ;
-(void)scrubberViewController:(id)arg0 didMoveToSection:(NSUInteger)arg1 ;
-(void)scrubberViewController:(id)arg0 didSelectItemAtIndex:(id)arg1 ;
-(void)updateViewConstraints;
-(void)viewDidLoad;


@end


#endif