// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTMTLDIAGNOSTICSSERVICEXPCDISPATCHER_H
#define GTMTLDIAGNOSTICSSERVICEXPCDISPATCHER_H

@protocol GTMTLDiagnosticsServiceXPCDispatcher, GTMTLDiagnosticsService;


#import "GTXPCDispatcher.h"

@interface GTMTLDiagnosticsServiceXPCDispatcher : GTXPCDispatcher <GTMTLDiagnosticsServiceXPCDispatcher>

 {
    id<GTMTLDiagnosticsService> *_service;
}




-(id)initWithService:(id)arg0 properties:(id)arg1 ;
-(void)deregisterObserver_:(id)arg0 replyConnection:(id)arg1 ;
-(void)raiseRuntimeIssue_:(id)arg0 replyConnection:(id)arg1 ;
-(void)registerObserver_:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif