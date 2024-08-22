// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKLOWPOWERMODEMONITOR_H
#define _DKLOWPOWERMODEMONITOR_H

@class DKMonitor, BMSource, NSNumber;



@interface _DKLowPowerModeMonitor : DKMonitor {
    BMSource *_source;
}


@property (retain, nonatomic) NSNumber *lowPowerModeStatus; // ivar: _lowPowerModeStatus


+(BOOL)shouldMergeUnchangedEvents;
+(id)_BMEventWithLowPowerModeState:(BOOL)arg0 ;
+(id)_eventWithLowPowerModeState:(BOOL)arg0 ;
+(id)eventStream;
+(void)setLowPowerMode:(BOOL)arg0 ;
-(void)lowPowerModeStateChanged:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)synchronouslyReflectCurrentValue;
-(void)updateLowPowerMode;


@end


#endif