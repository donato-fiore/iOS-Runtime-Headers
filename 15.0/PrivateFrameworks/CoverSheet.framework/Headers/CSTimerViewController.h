// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSTIMERVIEWCONTROLLER_H
#define CSTIMERVIEWCONTROLLER_H

@class NSTimer, NSDate, MTTimerManager;
@protocol CSTimerViewControllerDelegate;


#import "CSCoverSheetViewControllerBase.h"

@interface CSTimerViewController : CSCoverSheetViewControllerBase {
    NSTimer *_updateTimer;
    NSDate *_endDate;
    MTTimerManager *_timerManager;
}


@property (weak, nonatomic) NSObject<CSTimerViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled


-(BOOL)isEndDateValid;
-(BOOL)isTimerActive;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)timerView;
-(void)_nextTimerChanged:(id)arg0 ;
-(void)_startTimer;
-(void)_stopTimer;
-(void)_stopTimerNotifyingDelegate:(BOOL)arg0 ;
-(void)_updateNextTimer;
-(void)_updateTimerFired;
-(void)_updateTimerLabelView;
-(void)dealloc;
-(void)loadView;
-(void)setEndDate:(id)arg0 ;


@end


#endif