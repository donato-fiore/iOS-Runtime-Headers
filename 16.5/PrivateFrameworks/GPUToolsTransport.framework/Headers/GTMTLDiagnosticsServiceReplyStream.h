// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTMTLDIAGNOSTICSSERVICEREPLYSTREAM_H
#define GTMTLDIAGNOSTICSSERVICEREPLYSTREAM_H

@protocol GTMTLDiagnosticsServiceObserverXPCDispatcher, GTMTLDiagnosticsServiceObserver;


#import "GTXPCDispatcher.h"

@interface GTMTLDiagnosticsServiceReplyStream : GTXPCDispatcher <GTMTLDiagnosticsServiceObserverXPCDispatcher>

 {
    id<GTMTLDiagnosticsServiceObserver> *_observer;
}




-(id)initWithObserver:(id)arg0 ;
-(void)notifyCommandBufferIssue_:(id)arg0 replyConnection:(id)arg1 ;
-(void)notifyDiagnosticsIssue_:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif