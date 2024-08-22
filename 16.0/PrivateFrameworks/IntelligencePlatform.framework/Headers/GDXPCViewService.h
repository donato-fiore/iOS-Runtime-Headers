// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDXPCVIEWSERVICE_H
#define GDXPCVIEWSERVICE_H

@class NSXPCConnection, NSXPCInterface;

#import <Foundation/Foundation.h>


@interface GDXPCViewService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}




-(BOOL)performUpdateForViewNames:(id)arg0 includeDependencies:(BOOL)arg1 error:(*id)arg2 ;
-(id)accessTokenForFeaturesWithIsSandboxed:(BOOL)arg0 error:(*id)arg1 ;
-(id)accessTokenForViewName:(id)arg0 isSandboxed:(BOOL)arg1 error:(*id)arg2 ;
-(id)featureKeysWithError:(*id)arg0 ;
-(id)init;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)locked_establishConnection;


@end


#endif