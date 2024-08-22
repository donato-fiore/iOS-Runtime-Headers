// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDXPCENTITYRESOLUTIONSERVICE_H
#define GDXPCENTITYRESOLUTIONSERVICE_H

@class NSXPCConnection, NSXPCInterface;

#import <Foundation/Foundation.h>


@interface GDXPCEntityResolutionService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}




-(id)init;
-(id)submitQuery:(id)arg0 withError:(*id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)locked_establishConnection;


@end


#endif