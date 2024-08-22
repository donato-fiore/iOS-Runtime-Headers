// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDXPCLIGHTHOUSESERVICE_H
#define GDXPCLIGHTHOUSESERVICE_H

@class NSXPCConnection, NSXPCInterface;

#import <Foundation/Foundation.h>


@interface GDXPCLighthouseService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}




-(id)collectDBStats:(*id)arg0 ;
-(id)collectDBStatus:(*id)arg0 ;
-(id)init;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)locked_establishConnection;


@end


#endif