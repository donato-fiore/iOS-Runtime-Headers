// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BROADCASTER_H
#define BROADCASTER_H

@class NSProxy, NSArray, Protocol, NSString;
@protocol IDSSendXPCProtocol;


#import "IMRemoteObjectBroadcaster.h"
#import "IMMessageContext.h"

@interface Broadcaster : NSProxy <IDSSendXPCProtocol>

 {
    NSArray *_targets;
    IMRemoteObjectBroadcaster *_parent;
    Protocol *_protocol;
    IMMessageContext *_messageContext;
    id *_completion;
}


@property (nonatomic) int curXPCMessagePriority; // ivar: _curXPCMessagePriority
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithNotifier:(id)arg0 messageContext:(id)arg1 protocol:(id)arg2 targets:(id)arg3 ;
-(id)initWithNotifier:(id)arg0 messageContext:(id)arg1 protocol:(id)arg2 targets:(id)arg3 priority:(int)arg4 ;
-(id)initWithNotifier:(id)arg0 messageContext:(id)arg1 protocol:(id)arg2 targets:(id)arg3 priority:(int)arg4 completion:(id)arg5 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)sendXPCObject:(id)arg0 ;


@end


#endif