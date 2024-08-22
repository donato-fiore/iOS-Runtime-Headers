// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC13SEYMOURCLIENT9XPCCLIENT_H
#define _TTC13SEYMOURCLIENT9XPCCLIENT_H

@class SwiftObject;
@protocol _TtP13SeymourClient15TransportServer_;



@interface _TtC13SeymourClient9XPCClient : SwiftObject <_TtP13SeymourClient15TransportServer_>

 {
    ? dispatchService;
    ? connection;
    ? lock;
    ? server;
    ? state;
}




-(void)receiveEvent:(NSInteger)arg0 data:(id)arg1 ;
-(void)receiveRequest:(NSInteger)arg0 data:(id)arg1 completion:(id)arg2 ;


@end


#endif