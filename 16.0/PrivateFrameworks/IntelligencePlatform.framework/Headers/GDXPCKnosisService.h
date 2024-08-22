// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDXPCKNOSISSERVICE_H
#define GDXPCKNOSISSERVICE_H

@class NSXPCConnection, NSXPCInterface;

#import <Foundation/Foundation.h>


@interface GDXPCKnosisService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}




-(id)executeKGQ:(id)arg0 withError:(*id)arg1 ;
-(id)init;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)locked_establishConnection;


@end


#endif