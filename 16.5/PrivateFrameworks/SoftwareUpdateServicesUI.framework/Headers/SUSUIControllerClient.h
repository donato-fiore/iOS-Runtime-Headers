// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSUICONTROLLERCLIENT_H
#define SUSUICONTROLLERCLIENT_H

@class NSXPCConnection, NSString;
@protocol SUSUIControllerServerInterface;

#import <Foundation/Foundation.h>


@interface SUSUIControllerClient : NSObject <SUSUIControllerServerInterface>

 {
    NSXPCConnection *_serverConnection;
    BOOL _connected;
    BOOL _serverIsExiting;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)createKeybagWithSecret:(id)arg0 ;
-(id)_remoteInterface;
-(id)_remoteInterfaceWithErrorHandler:(id)arg0 ;
-(id)init;
-(void)_connectToServerIfNecessary;
-(void)_invalidateConnection;
-(void)_noteConnectionDropped;
-(void)_noteServerExiting;
-(void)dealloc;
-(void)getPasscodePolicy:(id)arg0 ;
-(void)invalidate;


@end


#endif