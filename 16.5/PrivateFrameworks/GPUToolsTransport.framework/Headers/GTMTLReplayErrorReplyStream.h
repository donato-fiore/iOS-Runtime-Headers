// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTMTLREPLAYERRORREPLYSTREAM_H
#define GTMTLREPLAYERRORREPLYSTREAM_H

@protocol GTMTLReplayErrorObserverXPCDispatcher, GTMTLReplayErrorObserver;


#import "GTXPCDispatcher.h"

@interface GTMTLReplayErrorReplyStream : GTXPCDispatcher <GTMTLReplayErrorObserverXPCDispatcher>

 {
    id<GTMTLReplayErrorObserver> *_observer;
}




-(id)initWithObserver:(id)arg0 ;
-(void)sendErrorToHost_:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif