// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKDONOTDISTURBMONITOR_H
#define _DKDONOTDISTURBMONITOR_H

@class DKMonitor, NSString, DNDStateService;
@protocol DNDStateUpdateListener;



@interface _DKDoNotDisturbMonitor : DKMonitor <DNDStateUpdateListener>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) DNDStateService *dndStateService; // ivar: _dndStateService
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_eventWithState:(BOOL)arg0 ;
+(id)eventStream;
-(void)start;
-(void)stateService:(id)arg0 didReceiveDoNotDisturbStateUpdate:(id)arg1 ;
-(void)stop;


@end


#endif