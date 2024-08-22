// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCURRENTACTIVITYSUMMARYDEMOQUERYSERVER_H
#define HDCURRENTACTIVITYSUMMARYDEMOQUERYSERVER_H



#import "HDQueryServer.h"

@interface HDCurrentActivitySummaryDemoQueryServer : HDQueryServer



+(Class)queryClass;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(void)_queue_start;


@end


#endif