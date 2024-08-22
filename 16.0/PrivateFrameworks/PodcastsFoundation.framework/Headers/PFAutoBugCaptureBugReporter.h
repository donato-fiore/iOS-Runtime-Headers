// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFAUTOBUGCAPTUREBUGREPORTER_H
#define PFAUTOBUGCAPTUREBUGREPORTER_H

@class SDRDiagnosticReporter;
@protocol PFBugReporter, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PFAutoBugCaptureBugReporter : NSObject <PFBugReporter>

 {
    SDRDiagnosticReporter *_reporter;
    NSObject<OS_dispatch_queue> *_reportQueue;
}




+(id)sharedInstance;
-(id)_processName;
-(id)init;
-(void)_executeReportErrorForDomain:(id)arg0 inSystem:(id)arg1 errorKind:(id)arg2 userInfo:(id)arg3 ;
-(void)_reportSignature:(id)arg0 toReporter:(id)arg1 ;
-(void)reportErrorForDomain:(id)arg0 inSystem:(id)arg1 errorKind:(id)arg2 userInfo:(id)arg3 ;
-(void)reportErrorInSystem:(id)arg0 errorKind:(id)arg1 userInfo:(id)arg2 ;


@end


#endif