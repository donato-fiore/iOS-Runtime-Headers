// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATSESSIONPROXYLISTENER_H
#define ATSESSIONPROXYLISTENER_H

@class NSXPCListener, NSMutableArray, NSString, ATSession;
@protocol NSXPCListenerDelegate, ATSessionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATSessionProxyListener : NSObject <NSXPCListenerDelegate, ATSessionObserver>

 {
    NSXPCListener *_listener;
    NSMutableArray *_connections;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ATSession *session; // ivar: _session
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithSession:(id)arg0 ;
-(void)sessionDidFinish:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif