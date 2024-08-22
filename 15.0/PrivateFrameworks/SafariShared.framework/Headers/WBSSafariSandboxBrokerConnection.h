// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSSAFARISANDBOXBROKERCONNECTION_H
#define WBSSAFARISANDBOXBROKERCONNECTION_H

@class NSXPCConnection;
@protocol WBSSafariSandboxBrokerProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSSafariSandboxBrokerConnection : NSObject <WBSSafariSandboxBrokerProtocol>

 {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}




-(void)_connectionWithCompletionHandler:(id)arg0 ;
-(void)ensureConnected:(id)arg0 ;


@end


#endif