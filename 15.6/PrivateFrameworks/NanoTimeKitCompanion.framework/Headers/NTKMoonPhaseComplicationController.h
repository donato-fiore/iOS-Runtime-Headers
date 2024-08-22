// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKMOONPHASECOMPLICATIONCONTROLLER_H
#define NTKMOONPHASECOMPLICATIONCONTROLLER_H

@class NSDate, NSTimer, CLLocation, NSString;
@protocol NTKTimeTravel, NTKMoonPhaseComplicationDisplay;


#import "NTKComplicationController.h"

@interface NTKMoonPhaseComplicationController : NTKComplicationController <NTKTimeTravel>

 {
    NSDate *_timeTravelDate;
    ? _displayFlags;
    NSTimer *_afterEventTimer;
    BOOL _paused;
    BOOL _missedUpdateWhilePaused;
}


@property (readonly, weak, nonatomic) NSObject<NTKMoonPhaseComplicationDisplay> *legacyDisplay;
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (retain, nonatomic) NSString *token; // ivar: _token


+(BOOL)_acceptsComplicationType:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(BOOL)hasTapAction;
-(void)_activate;
-(void)_afterEventTimerFired:(id)arg0 ;
-(void)_asyncUpdateDisplay;
-(void)_configureForLegacyDisplay:(id)arg0 ;
-(void)_deactivate;
-(void)_invalidateEventTimer;
-(void)_scheduleAfterEventTimer:(id)arg0 ;
-(void)_updateDisplay;
-(void)_updateDisplayForced:(BOOL)arg0 ;
-(void)performTapAction;
-(void)setDataMode:(NSInteger)arg0 forDisplayWrapper:(id)arg1 ;
-(void)setShowsLockedUI:(BOOL)arg0 ;
-(void)setTimeTravelDate:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif