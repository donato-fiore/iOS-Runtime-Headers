// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMREPLYINGREMOTEDAEMONPROXY_H
#define IMREPLYINGREMOTEDAEMONPROXY_H

@class NSProxy;


#import "IMDaemonController.h"

@interface IMReplyingRemoteDaemonProxy : NSProxy

@property (readonly, weak, nonatomic) IMDaemonController *daemonController; // ivar: _daemonController
@property (nonatomic) BOOL synchronousReplies; // ivar: _synchronousReplies


-(id)initWithDaemonController:(id)arg0 synchronousReplies:(BOOL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif