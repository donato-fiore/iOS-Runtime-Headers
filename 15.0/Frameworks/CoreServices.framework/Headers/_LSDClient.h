// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSDCLIENT_H
#define _LSDCLIENT_H

@class NSXPCConnection, NSString;
@protocol NSXPCConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _LSDClient : NSObject <NSXPCConnectionDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, retain) NSXPCConnection *XPCConnection; // ivar: _XPCConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithXPCConnection:(id)arg0 ;
-(id)initWithXPCConnection:(id)arg0 queue:(id)arg1 ;
-(id)replacementObjectForXPCConnection:(id)arg0 encoder:(id)arg1 object:(id)arg2 ;
-(void)connection:(id)arg0 handleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)didHandleInvocation:(id)arg0 isReply:(BOOL)arg1 ;
-(void)willHandleInvocation:(id)arg0 isReply:(BOOL)arg1 ;


@end


#endif