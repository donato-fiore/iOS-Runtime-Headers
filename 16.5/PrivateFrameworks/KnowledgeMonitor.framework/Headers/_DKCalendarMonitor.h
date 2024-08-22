// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKCALENDARMONITOR_H
#define _DKCALENDARMONITOR_H

@class DKMonitor;



@interface _DKCalendarMonitor : DKMonitor {
    BOOL _enabled;
}




+(id)_eventWithTitle:(id)arg0 interaction:(id)arg1 ;
+(id)entitlements;
+(id)eventStream;
-(id)init;
-(void)_receiveDatabaseChangeNotification:(id)arg0 ;
-(void)deactivate;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)update;


@end


#endif