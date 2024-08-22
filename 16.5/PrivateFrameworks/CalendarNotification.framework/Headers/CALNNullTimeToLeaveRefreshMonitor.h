// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNNULLTIMETOLEAVEREFRESHMONITOR_H
#define CALNNULLTIMETOLEAVEREFRESHMONITOR_H

@protocol CALNTimeToLeaveRefreshMonitor, CALNTimeToLeaveRefreshMonitorDelegate;

#import <Foundation/Foundation.h>


@interface CALNNullTimeToLeaveRefreshMonitor : NSObject <CALNTimeToLeaveRefreshMonitor>



@property (weak, nonatomic) NSObject<CALNTimeToLeaveRefreshMonitorDelegate> *delegate; // ivar: _delegate


+(id)sharedInstance;
-(void)removeRefreshTimerForEventExternalURL:(id)arg0 ;
-(void)setUpRefreshTimerWithTriggerDate:(id)arg0 eventExternalURL:(id)arg1 ;


@end


#endif