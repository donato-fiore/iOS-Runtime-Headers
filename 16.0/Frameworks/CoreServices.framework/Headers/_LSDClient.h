// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSDCLIENT_H
#define _LSDCLIENT_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _LSDClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, retain) NSXPCConnection *XPCConnection; // ivar: _XPCConnection


-(id)initWithXPCConnection:(id)arg0 ;
-(id)initWithXPCConnection:(id)arg0 queue:(id)arg1 ;
-(void)didHandleInvocation:(id)arg0 isReply:(BOOL)arg1 ;
-(void)handleXPCInvocation:(id)arg0 isReply:(BOOL)arg1 ;
-(void)willHandleInvocation:(id)arg0 isReply:(BOOL)arg1 ;


@end


#endif