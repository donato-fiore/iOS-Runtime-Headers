// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SECURITYDXPCCLIENT_H
#define SECURITYDXPCCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface SecuritydXPCClient : NSObject

@property (retain) NSXPCConnection *connection; // ivar: _connection


+(void)configureSecuritydXPCProtocol:(id)arg0 ;
-(id)init;


@end


#endif