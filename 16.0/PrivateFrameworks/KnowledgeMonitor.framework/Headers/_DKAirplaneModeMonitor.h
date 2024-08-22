// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKAIRPLANEMODEMONITOR_H
#define _DKAIRPLANEMODEMONITOR_H

@class DKMonitor, BMSource, NSNumber;



@interface _DKAirplaneModeMonitor : DKMonitor {
    BMSource *_source;
}


@property (retain, nonatomic) NSNumber *airplaneModeStatus; // ivar: _airplaneModeStatus
@property *__SCPreferences radioPrefs; // ivar: _radioPrefs


+(id)_BMEventWithState:(BOOL)arg0 ;
+(id)_eventWithState:(BOOL)arg0 ;
+(id)eventStream;
-(void)deactivate;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)updateAirplaneModeStatus;


@end


#endif