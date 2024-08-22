// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LAASSERTIONSPROXY_H
#define LAASSERTIONSPROXY_H

@class NSXPCConnection, NSString;
@protocol LAAssertionsXPC, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface LAAssertionsProxy : NSObject <LAAssertionsXPC>

 {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isConnected;
-(id)_remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)dealloc;
-(void)dropTouchIdAssertion:(id)arg0 ;
-(void)setConnection:(id)arg0 ;
-(void)setQueue:(id)arg0 ;
-(void)takeTouchIdAssertion:(id)arg0 ;


@end


#endif