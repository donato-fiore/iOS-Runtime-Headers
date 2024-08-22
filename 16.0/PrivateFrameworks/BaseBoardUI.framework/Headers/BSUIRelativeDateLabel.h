// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSUIRELATIVEDATELABEL_H
#define BSUIRELATIVEDATELABEL_H

@class BSRelativeDateTimer, NSString, BSRelativeDateTimerFireInfo;
@protocol _UIAlwaysOnEnvironmentObserver, BSRelativeDateTimerDelegate;


#import "BSUIDefaultDateLabel.h"

@interface BSUIRelativeDateLabel : BSUIDefaultDateLabel <_UIAlwaysOnEnvironmentObserver, BSRelativeDateTimerDelegate>

 {
    BSRelativeDateTimer *_relativeDateTimer;
    NSUInteger _value;
    NSUInteger _resolution;
    NSInteger _comparedToNow;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic, getter=_overrideTimerFireInfo, setter=_setOverrideTimerFireInfo:) BSRelativeDateTimerFireInfo *overrideTimerFireInfo; // ivar: _overrideTimerFireInfo
@property (readonly) Class superclass;


-(id)_timelinesForDateInterval:(id)arg0 ;
-(id)constructLabelString;
-(void)_timelinesForDateInterval:(id)arg0 completion:(id)arg1 ;
-(void)_updateWithFrameSpecifier:(id)arg0 ;
-(void)_updateWithFrameSpecifier:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)prepareForReuse;
-(void)setTimeZoneRelativeStartDate:(id)arg0 absoluteStartDate:(id)arg1 ;
-(void)timerFiredWithValue:(NSUInteger)arg0 forResolution:(NSUInteger)arg1 comparedToNow:(NSInteger)arg2 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif