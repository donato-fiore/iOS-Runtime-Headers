// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STYSIGNPOSTSMONITOR_H
#define STYSIGNPOSTSMONITOR_H

@class NSDate, SignpostSupportObjectExtractor;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "STYAbcHelper.h"

@interface STYSignpostsMonitor : NSObject

@property (retain) STYAbcHelper *abcHelper; // ivar: _abcHelper
@property BOOL autoUploadThroughAbc; // ivar: _autoUploadThroughAbc
@property unsigned int eventCount; // ivar: _eventCount
@property (retain) NSDate *lastTailspinRequest; // ivar: _lastTailspinRequest
@property (retain) NSDate *lastTailspinRequestForDelayedNotifications; // ivar: _lastTailspinRequestForDelayedNotifications
@property (retain) SignpostSupportObjectExtractor *notificationExtractor; // ivar: _notificationExtractor
@property (retain) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property BOOL seedUserMode; // ivar: _seedUserMode
@property (retain) NSObject<OS_dispatch_queue> *spObjectProcessingQueue; // ivar: _spObjectProcessingQueue
@property unsigned int timeToReconnectWithDiagnosticd; // ivar: _timeToReconnectWithDiagnosticd


+(id)sharedMonitor;
-(BOOL)monitorSignposts:(BOOL)arg0 ;
-(BOOL)startListeningForNotifications;
-(id)initPrivate;
-(id)tailspinFilenamePrefixForInterval:(id)arg0 ;
-(void)notificationStreamTerminated:(id)arg0 unmatchedIntervalStarts:(id)arg1 ;
-(void)perfProblemDetected:(id)arg0 tailspinFilenamePrefix:(id)arg1 ;
-(void)perfProblemDetectedOnMac:(id)arg0 ;
-(void)processEmittedEvent:(id)arg0 ;
-(void)processInterval:(id)arg0 ;
-(void)reportLatencyToReceiveSignposts:(id)arg0 ;
-(void)setupNotificationPipeline;
-(void)stopMonitoringSignposts;


@end


#endif