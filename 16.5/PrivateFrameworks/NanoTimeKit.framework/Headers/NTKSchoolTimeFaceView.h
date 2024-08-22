// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKSCHOOLTIMEFACEVIEW_H
#define NTKSCHOOLTIMEFACEVIEW_H

@class UILabel, CLKUICurvedColoringLabel, CLKClockTimer, CLKClockTimerToken, NSDateFormatter;


#import "NTKFaceView.h"
#import "NTKSchoolTimeDialView.h"
#import "NTKAnalogHandsView.h"
#import "NTKDigitalTimeLabel.h"

@interface NTKSchoolTimeFaceView : NTKFaceView {
    NTKSchoolTimeDialView *_dialView;
    NTKAnalogHandsView *_handsView;
    NTKDigitalTimeLabel *_digitalTimeLabel;
    UILabel *_dateLabel;
    UILabel *_nameLabel;
    CLKUICurvedColoringLabel *_curvedNameLabel;
    CLKClockTimer *_clockTimer;
    CLKClockTimerToken *_clockTimerToken;
    NSDateFormatter *_formatter;
}




+(id)schoolTimeColor;
+(id)secondHandColor;
-(id)initWithFaceStyle:(NSInteger)arg0 forDevice:(id)arg1 clientIdentifier:(id)arg2 ;
-(void)_applyDataMode;
-(void)_applyFrozen;
-(void)_handleChangeNotification;
-(void)_layoutCurvedNameLabel;
-(void)_loadSnapshotContentViews;
-(void)_setDate:(id)arg0 ;
-(void)_setupNameLabel;
-(void)_setupNotifications;
-(void)_startClockUpdates;
-(void)_startObserving;
-(void)_stopClockUpdates;
-(void)_stopObserving;
-(void)_tearDownUI;
-(void)_timeDidUpdate:(id)arg0 ;
-(void)_unloadSnapshotContentViews;
-(void)_updateTimeAndDate:(id)arg0 animated:(BOOL)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setName:(id)arg0 ;
-(void)setupUI;


@end


#endif