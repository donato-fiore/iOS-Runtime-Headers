// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIDOCUPLOADSESSIONCLIENT_H
#define DIDOCUPLOADSESSIONCLIENT_H

@class NSString, NSXPCConnection;
@protocol DIDocUploadSessionXPCProtocol;

#import <Foundation/Foundation.h>

#import "DIXPCDisconnectHandler.h"

@interface DIDocUploadSessionClient : NSObject <DIDocUploadSessionXPCProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) DIXPCDisconnectHandler *disconnectHandler; // ivar: _disconnectHandler
@property (readonly) NSUInteger hash;
@property (retain) NSObject<DIDocUploadSessionXPCProtocol> *remoteObjectProxy; // ivar: _remoteObjectProxy
@property (retain) NSXPCConnection *serverConnection; // ivar: _serverConnection
@property (readonly) Class superclass;


-(id)init;
-(void)cancelUploads;
-(void)uploadDocData:(id)arg0 uploadSettings:(id)arg1 completion:(id)arg2 ;


@end


#endif