// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFDEFERREDLAUNCHTASKCOORDINATOR_H
#define PFDEFERREDLAUNCHTASKCOORDINATOR_H


#import <Foundation/Foundation.h>


@interface PFDeferredLaunchTaskCoordinator : NSObject {
    ? _adminQueue;
    ? _workQueue;
    ? _tasks;
    ? _deferring;
    ? _timeoutScheduled;
}




+(id)sharedInstance;
-(id)init;
-(void)deferWork:(id)arg0 ;
-(void)deferWorkOnQueue:(id)arg0 withBlock:(id)arg1 ;
-(void)scheduleDefaultDeferralDeadline;
-(void)scheduleDeferralDeadlineAfter:(CGFloat)arg0 ;
-(void)stopDeferring;


@end


#endif