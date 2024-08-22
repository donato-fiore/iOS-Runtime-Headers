// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKORIENTATIONMONITOR_H
#define _DKORIENTATIONMONITOR_H

@class DKMonitor, FBSDisplayLayoutMonitor;



@interface _DKOrientationMonitor : DKMonitor {
    FBSDisplayLayoutMonitor *_monitor;
}




+(id)_eventWithValue:(NSInteger)arg0 ;
+(id)entitlements;
+(id)eventStream;
-(void)deactivate;
-(void)dealloc;
-(void)start;
-(void)stop;


@end


#endif