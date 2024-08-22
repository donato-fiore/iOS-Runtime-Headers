// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DAICALENDARLOGGER_H
#define DAICALENDARLOGGER_H

@protocol ICSLoggingDelegate;

#import <Foundation/Foundation.h>


@interface DAiCalendarLogger : NSObject <ICSLoggingDelegate>





+(id)sharedLogger;
-(void)logICSMessage:(id)arg0 atLevel:(NSInteger)arg1 ;
-(void)registerWithiCalendar;


@end


#endif