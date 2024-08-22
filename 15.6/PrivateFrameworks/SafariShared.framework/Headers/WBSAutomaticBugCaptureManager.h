// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSAUTOMATICBUGCAPTUREMANAGER_H
#define WBSAUTOMATICBUGCAPTUREMANAGER_H

@class SDRDiagnosticReporter;

#import <Foundation/Foundation.h>


@interface WBSAutomaticBugCaptureManager : NSObject {
    SDRDiagnosticReporter *_reporter;
}




+(id)sharedManager;
-(id)init;
-(void)_startLoggingSessionForDomain:(id)arg0 detectedProcess:(id)arg1 type:(id)arg2 subType:(id)arg3 context:(id)arg4 duration:(CGFloat)arg5 ;
-(void)captureDeferredNavigationWithDomain:(id)arg0 detectedProcess:(id)arg1 context:(id)arg2 ;
-(void)captureLoadingStallWithDomain:(id)arg0 detectedProcess:(id)arg1 context:(id)arg2 ;
-(void)captureLoadingStallWithDomain:(id)arg0 detectedProcess:(id)arg1 context:(id)arg2 duration:(CGFloat)arg3 ;
-(void)capturePerformanceTimeoutWithDomain:(id)arg0 detectedProcess:(id)arg1 context:(id)arg2 ;
-(void)captureProcessTerminationDueToResourceLimitsWithDomain:(id)arg0 detectedProcess:(id)arg1 resourceType:(id)arg2 ;


@end


#endif