// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWSAMPLELOGGER_H
#define AWSAMPLELOGGER_H

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface AWSampleLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_powerLogQueue;
    NSMutableDictionary *_clientLogData;
    NSMutableSet *_outstandingClientLogData;
    NSMutableSet *_addedClientLogData;
    NSObject<OS_dispatch_source> *_timer;
    NSUInteger _samplingStartTime;
    NSUInteger _cumulativeSamplingTime;
    NSUInteger _samplesRequested;
    NSUInteger _pollsRequested;
    NSUInteger _samplesSucceeded;
}




+(id)sharedLogger;
+(void)client:(id)arg0 attentionStateChange:(BOOL)arg1 ;
+(void)client:(id)arg0 event:(id)arg1 ;
+(void)client:(id)arg0 pollEventType:(NSUInteger)arg1 event:(id)arg2 ;
-(id)init;
-(void)_outputPowerLog;
-(void)outputPowerLog;
-(void)powerLogName:(id)arg0 event:(id)arg1 ;
-(void)sampleStartedWithDeadline:(NSUInteger)arg0 ;
-(void)sampleSucceeded;
-(void)shouldSample:(BOOL)arg0 ;
-(void)startUpdate;
-(void)updateDataForClient:(id)arg0 deadline:(NSUInteger)arg1 ;


@end


#endif