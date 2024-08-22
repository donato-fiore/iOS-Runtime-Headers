// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKAIRPLANEMODEMONITOR_H
#define _DKAIRPLANEMODEMONITOR_H

@class DKMonitor, NSNumber;



@interface _DKAirplaneModeMonitor : DKMonitor

@property (retain, nonatomic) NSNumber *airplaneModeStatus; // ivar: _airplaneModeStatus
@property *__SCPreferences radioPrefs; // ivar: _radioPrefs


+(id)_eventWithState:(BOOL)arg0 ;
+(id)eventStream;
-(void)deactivate;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)updateAirplaneModeStatus;


@end


#endif