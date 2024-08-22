// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTLAUNCHSERVICEXPCDISPATCHER_H
#define GTLAUNCHSERVICEXPCDISPATCHER_H

@protocol GTLaunchServiceXPCDispatcher, GTLaunchService;


#import "GTXPCDispatcher.h"

@interface GTLaunchServiceXPCDispatcher : GTXPCDispatcher <GTLaunchServiceXPCDispatcher>

 {
    id<GTLaunchService> *_service;
}




-(id)initWithService:(id)arg0 properties:(id)arg1 ;
-(void)launchReplayerWithConfiguration_:(id)arg0 replyConnection:(id)arg1 ;
-(void)resumeTaskForPid_:(id)arg0 replyConnection:(id)arg1 ;
-(void)symbolicatorSignatureForPid_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)terminateTaskForPid_:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif