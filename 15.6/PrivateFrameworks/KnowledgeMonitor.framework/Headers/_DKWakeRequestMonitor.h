// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKWAKEREQUESTMONITOR_H
#define _DKWAKEREQUESTMONITOR_H

@class DKMonitor, NSDate, NSString;
@protocol OS_dispatch_source;



@interface _DKWakeRequestMonitor : DKMonitor {
    BOOL _updateTimerResumed;
}


@property (retain, nonatomic) NSDate *nextUserVisibleWakeRequestDate; // ivar: _nextUserVisibleWakeRequestDate
@property (retain, nonatomic) NSString *nextUserVisibleWakeRequestor; // ivar: _nextUserVisibleWakeRequestor
@property (retain, nonatomic) NSObject<OS_dispatch_source> *updateTimer; // ivar: _updateTimer
@property (nonatomic) int wakeRequestToken; // ivar: _wakeRequestToken


+(id)entitlements;
+(id)eventStream;
-(id)loadState;
-(void)deactivate;
-(void)dealloc;
-(void)obtainNextUserVisibleWakeRequest;
-(void)saveState;
-(void)start;
-(void)stop;
-(void)synchronouslyReflectCurrentValue;


@end


#endif