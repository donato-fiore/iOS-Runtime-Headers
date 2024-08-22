// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSMESSAGELOADINGANALYTICCONTROLLER_H
#define MSMESSAGELOADINGANALYTICCONTROLLER_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MSDiagnosticManager.h"

@interface MSMessageLoadingAnalyticController : NSObject

@property (retain, nonatomic) MSDiagnosticManager *diagnosticManager; // ivar: _diagnosticManager
@property (copy, nonatomic) id *endedRecordingHandler; // ivar: _endedRecordingHandler
@property (nonatomic) NSUInteger maxLoadingTimeSeconds; // ivar: _maxLoadingTimeSeconds
@property (readonly, copy, nonatomic) NSDictionary *messageLoadTimes; // ivar: _messageLoadTimes
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialMessageLoadingTimerQueue; // ivar: _serialMessageLoadingTimerQueue
@property (copy, nonatomic) id *startedRecordingHandler; // ivar: _startedRecordingHandler


-(id)_retrieveAndRemoveMessageLoadingInfoForMessage:(id)arg0 ;
-(id)initWithDiagnosticManager:(id)arg0 ;
-(id)initWithDiagnosticManager:(id)arg0 maxLoadingTimeSeconds:(NSUInteger)arg1 ;
-(void)_calculateAndSubmitTimeForLoadingInfo:(id)arg0 ;
-(void)_commonInitWithDiagnosticManager:(id)arg0 maxLoadingTimeSeconds:(NSUInteger)arg1 ;
-(void)_endRecordingForMessage:(id)arg0 ;
-(void)_startTimeoutForMessage:(id)arg0 ;
-(void)endAllRecording;
-(void)endRecordingForMessage:(id)arg0 ;
-(void)startRecordingForMessage:(id)arg0 ;


@end


#endif