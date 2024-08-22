// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11ACTIVITYKIT23ACTIVITYPUSHTOKENCLIENT_H
#define _TTC11ACTIVITYKIT23ACTIVITYPUSHTOKENCLIENT_H

@protocol ACActivityPushTokenXPCClient;

#import <Foundation/Foundation.h>


@interface _TtC11ActivityKit23ActivityPushTokenClient : NSObject <ACActivityPushTokenXPCClient>

 {
    ? _pushTokenPublisher;
    ? connection;
    ? serverStartupToken;
    ? _queue_pushTokens;
    ? queue;
}




-(id)init;
-(void)pushTokensChanged:(id)arg0 ;


@end


#endif