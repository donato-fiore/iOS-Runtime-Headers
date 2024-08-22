// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFAUTOBUGCAPTUREBUGREPORTER_H
#define PFAUTOBUGCAPTUREBUGREPORTER_H

@class SDRDiagnosticReporter;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PFAutoBugCaptureBugReporter : NSObject {
    SDRDiagnosticReporter *_reporter;
    NSObject<OS_dispatch_queue> *_reportQueue;
}




+(id)sharedInstance;
-(BOOL)_timeSinceLastSimilarReport:(id)arg0 hasExceededElapsedTimeThreshold:(CGFloat)arg1 ;
-(BOOL)canSubmitNewReport:(id)arg0 withMinimumElapsedTime:(CGFloat)arg1 ;
-(id)_lastSubmissionTimeForReport:(id)arg0 ;
-(id)_processName;
-(id)init;
// -(void)_executeSubmitBugReport:(id)arg0 userInfo:(id)arg1 withMaximumSubmissionCadence:(unk)arg2  ;
-(void)_reportSignature:(id)arg0 forReport:(id)arg1 ;
-(void)_scheduleSubmissionOfBugReport:(id)arg0 withUserInfo:(id)arg1 ;
-(void)_setLastSubmissionTime:(id)arg0 forReport:(id)arg1 ;
-(void)_submitBugReport:(id)arg0 withUserInfo:(id)arg1 ;
// -(void)submitBugReport:(id)arg0 userInfo:(id)arg1 withMaximumSubmissionCadence:(unk)arg2  ;


@end


#endif