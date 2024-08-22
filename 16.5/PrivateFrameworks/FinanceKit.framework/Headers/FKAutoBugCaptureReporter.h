// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FKAUTOBUGCAPTUREREPORTER_H
#define FKAUTOBUGCAPTUREREPORTER_H


#import <Foundation/Foundation.h>


@interface FKAutoBugCaptureReporter : NSObject



-(BOOL)isExpectedFailureReason:(int)arg0 ;
-(BOOL)isRunningUnitTests;
-(BOOL)shouldReportIssue;
-(void)handleResponse:(id)arg0 ;
-(void)reportIssueWithDomain:(id)arg0 type:(id)arg1 subtype:(id)arg2 subtypeContext:(id)arg3 payload:(id)arg4 ;


@end


#endif