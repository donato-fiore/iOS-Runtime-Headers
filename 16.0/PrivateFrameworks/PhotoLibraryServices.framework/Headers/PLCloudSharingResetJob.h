// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCLOUDSHARINGRESETJOB_H
#define PLCLOUDSHARINGRESETJOB_H



#import "PLCloudSharingJob.h"

@interface PLCloudSharingResetJob : PLCloudSharingJob



+(void)resetAllLocalState;
-(NSInteger)daemonOperation;
-(void)run;
-(void)runDaemonSide;


@end


#endif