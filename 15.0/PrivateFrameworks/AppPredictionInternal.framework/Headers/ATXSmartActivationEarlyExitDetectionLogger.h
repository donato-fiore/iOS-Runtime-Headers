// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXSMARTACTIVATIONEARLYEXITDETECTIONLOGGER_H
#define ATXSMARTACTIVATIONEARLYEXITDETECTIONLOGGER_H

@class BMBiomeScheduler, BPSSink;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXSmartActivationEarlyExitDetectionLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
}




+(id)sharedInstance;
-(BOOL)_logEventIfEarlyExit:(id)arg0 ;
-(id)init;
-(void)_processNewUserFocusComputedModeEvent:(id)arg0 ;
-(void)_registerForModeChangeNotifications;
-(void)stopListening;


@end


#endif