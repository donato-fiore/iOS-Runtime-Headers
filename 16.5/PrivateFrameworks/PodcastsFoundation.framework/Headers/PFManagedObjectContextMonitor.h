// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFMANAGEDOBJECTCONTEXTMONITOR_H
#define PFMANAGEDOBJECTCONTEXTMONITOR_H


#import <Foundation/Foundation.h>


@interface PFManagedObjectContextMonitor : NSObject {
    ? signpost;
    ? context;
    ? label;
    ? pingInterval;
    ? shortHangDuration;
    ? severeHangDuration;
    ? criticalHangDuration;
    ? criticalHangRepeatInterval;
    ? lock;
    ? status;
    ? multiTimer;
    ? pingTimer;
}




-(id)init;
-(id)initWithContext:(id)arg0 label:(NSInteger)arg1 pingInterval:(CGFloat)arg2 shortHangDuration:(CGFloat)arg3 severeHangDuration:(CGFloat)arg4 criticalHangDuration:(CGFloat)arg5 criticalHangRepeatInterval:(CGFloat)arg6 ;
-(void)beginMonitoring;
-(void)endMonitoring;


@end


#endif