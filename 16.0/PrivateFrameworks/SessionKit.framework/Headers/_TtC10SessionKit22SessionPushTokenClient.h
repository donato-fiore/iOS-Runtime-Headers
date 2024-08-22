// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10SESSIONKIT22SESSIONPUSHTOKENCLIENT_H
#define _TTC10SESSIONKIT22SESSIONPUSHTOKENCLIENT_H

@protocol _TtP10SessionKit25SessionPushTokenXPCClient_;

#import <Foundation/Foundation.h>


@interface _TtC10SessionKit22SessionPushTokenClient : NSObject <_TtP10SessionKit25SessionPushTokenXPCClient_>

 {
    ? _pushTokenPublisher;
    ? connection;
    ? serverStartupToken;
    ? _queue_pushTokens;
    ? queue;
}




-(id)init;
-(void)pushTokensChangedWithTokens:(id)arg0 ;


@end


#endif