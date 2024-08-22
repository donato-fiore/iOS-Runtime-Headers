// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DIDOCUPLOADSESSIONCLIENT_H
#define DIDOCUPLOADSESSIONCLIENT_H

@class NSString, NSXPCConnection;
@protocol DIDocUploadSessionXPCProtocol;

#import <Foundation/Foundation.h>

#import "DLXPCDisconnectHandler.h"

@interface DIDocUploadSessionClient : NSObject <DIDocUploadSessionXPCProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) DLXPCDisconnectHandler *disconnectHandler; // ivar: _disconnectHandler
@property (readonly) NSUInteger hash;
@property (retain) NSObject<DIDocUploadSessionXPCProtocol> *remoteObjectProxy; // ivar: _remoteObjectProxy
@property (retain) NSXPCConnection *serverConnection; // ivar: _serverConnection
@property (readonly) Class superclass;


-(id)init;
-(void)cancelUploads;
-(void)uploadDocData:(id)arg0 uploadSettings:(id)arg1 completion:(id)arg2 ;


@end


#endif