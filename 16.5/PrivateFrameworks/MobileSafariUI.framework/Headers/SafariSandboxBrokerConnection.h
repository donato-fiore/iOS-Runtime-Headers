// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAFARISANDBOXBROKERCONNECTION_H
#define SAFARISANDBOXBROKERCONNECTION_H

@class WBSUISafariSandboxBrokerConnection, NSXPCConnection;



@interface SafariSandboxBrokerConnection : WBSUISafariSandboxBrokerConnection {
    NSXPCConnection *_connection;
}




-(void)_connectionWithCompletionHandler:(id)arg0 ;


@end


#endif