// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKORIENTATIONMONITOR_H
#define _DKORIENTATIONMONITOR_H

@class DKMonitor, FBSDisplayLayoutMonitor, BMSource;



@interface _DKOrientationMonitor : DKMonitor {
    FBSDisplayLayoutMonitor *_monitor;
    BMSource *_source;
}




+(id)_BMEventWithValue:(NSInteger)arg0 ;
+(id)_eventWithValue:(NSInteger)arg0 ;
+(id)entitlements;
+(id)eventStream;
-(void)deactivate;
-(void)dealloc;
-(void)start;
-(void)stop;


@end


#endif