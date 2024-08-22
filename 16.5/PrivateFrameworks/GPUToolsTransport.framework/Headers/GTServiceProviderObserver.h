// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTSERVICEPROVIDEROBSERVER_H
#define GTSERVICEPROVIDEROBSERVER_H

@protocol GTServiceProviderObserver, OS_xpc_object, GTXPCConnection;

#import <Foundation/Foundation.h>


@interface GTServiceProviderObserver : NSObject <GTServiceProviderObserver>

 {
    NSUInteger _replyStream;
    NSObject<OS_xpc_object> *_replyPath;
    id<GTXPCConnection> *_connection;
}




-(id)initWithMessage:(id)arg0 notifyConnection:(id)arg1 ;
-(void)notifyServiceListChanged:(id)arg0 ;


@end


#endif