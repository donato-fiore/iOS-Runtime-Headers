// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTMTLDIAGNOSTICSSERVICEXPCDISPATCHER_H
#define GTMTLDIAGNOSTICSSERVICEXPCDISPATCHER_H

@protocol GTMTLDiagnosticsServiceXPCDispatcher, GTMTLDiagnosticsServiceDelegate, GTMTLDiagnosticsService, GTXPCConnection;


#import "GTXPCDispatcher.h"

@interface GTMTLDiagnosticsServiceXPCDispatcher : GTXPCDispatcher <GTMTLDiagnosticsServiceXPCDispatcher, GTMTLDiagnosticsServiceDelegate>

 {
    id<GTMTLDiagnosticsService> *_service;
    id<GTXPCConnection> *_notifyConnection;
}




-(id)initWithService:(id)arg0 properties:(id)arg1 notifyConnection:(id)arg2 ;
-(void)notifyCommandBufferIssue:(id)arg0 ;
-(void)notifyDiagnosticsIssue:(id)arg0 ;
-(void)setDelegate_:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif