// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCAMERAHARDWAREBUTTONSTUDYLOGGER_H
#define SBCAMERAHARDWAREBUTTONSTUDYLOGGER_H

@class SLGNotificationActivatedLogger;

#import <Foundation/Foundation.h>


@interface SBCameraHardwareButtonStudyLogger : NSObject {
    BOOL _monitoringProcesses;
    SLGNotificationActivatedLogger *_logger;
}




-(id)init;
-(void)_handleApplicationProcessStateDidChangeNotification:(id)arg0 ;
-(void)_startProcessMonitor;
-(void)_stopProcessMonitor;
-(void)dealloc;
-(void)logButtonEvent:(struct __IOHIDEvent *)arg0 ;
-(void)logPocketState:(NSInteger)arg0 ;


@end


#endif