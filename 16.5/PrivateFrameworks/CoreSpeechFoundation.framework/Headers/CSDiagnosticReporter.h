// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSDIAGNOSTICREPORTER_H
#define CSDIAGNOSTICREPORTER_H

@class SDRDiagnosticReporter;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSDiagnosticReporter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) SDRDiagnosticReporter *reporter; // ivar: _reporter


+(id)sharedInstance;
-(id)init;
-(void)submitAudioIssueReport:(id)arg0 ;
-(void)submitAudioIssueReport:(id)arg0 withError:(id)arg1 ;
-(void)submitDiagnosticReportWithType:(id)arg0 withSubType:(id)arg1 withDuration:(CGFloat)arg2 withContext:(id)arg3 ;
-(void)submitDiagnosticReportWithType:(id)arg0 withSubType:(id)arg1 withSubTypeContext:(id)arg2 withDuration:(CGFloat)arg3 withContext:(id)arg4 ;
-(void)submitEndpointerIssueReport:(id)arg0 ;
-(void)submitRemoteCoreSpeechIssueReport:(id)arg0 context:(id)arg1 ;
-(void)submitSiriPowerIssueReport:(id)arg0 ;
-(void)submitTrialIssueReport:(id)arg0 ;
-(void)submitUresIssueReport:(id)arg0 ;
-(void)submitVoiceIdIssueReport:(id)arg0 ;
-(void)submitVoiceTriggerIssueReport:(id)arg0 ;


@end


#endif