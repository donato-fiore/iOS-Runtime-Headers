// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UVBSCONNECTION_H
#define UVBSCONNECTION_H

@class BSServiceConnection, UVObjCSingleFireEvent, NSString;
@protocol UVBSClientConnection, UVBSServerConnection;

#import <Foundation/Foundation.h>


@interface UVBSConnection : NSObject <UVBSClientConnection, UVBSServerConnection>

 {
    BSServiceConnection *_serviceConnection;
    UVObjCSingleFireEvent *_invalidationEvent;
    UVObjCSingleFireEvent *_activationEvent;
}


@property (readonly) int clientPid; // ivar: _clientPid
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) int serverPid; // ivar: _serverPid
@property (readonly) Class superclass;


+(id)_connectionError:(id)arg0 ;
+(id)_machLookupError:(id)arg0 ;
// +(id)createWithEndpoint:(id)arg0 clientContextBuilder:(id)arg1 error:(unk)arg2  ;
// +(id)createWithMachName:(id)arg0 service:(id)arg1 instance:(id)arg2 clientContextBuilder:(id)arg3 error:(unk)arg4  ;
-(id)initWithServiceConnection:(id)arg0 ;
-(id)initWithServiceConnection:(id)arg0 context:(id)arg1 ;
-(id)remoteTarget;
-(id)remoteTarget:(*id)arg0 ;
-(void)_didActivate;
-(void)_didInvalidate;
-(void)activateWithInterface:(id)arg0 targetQueue:(id)arg1 serviceQuality:(id)arg2 interfaceTarget:(id)arg3 ;
-(void)dealloc;
-(void)initializeWithClientContext:(id)arg0 ;
-(void)invalidate;
-(void)onActivation:(id)arg0 ;
-(void)onInvalidation:(id)arg0 ;


@end


#endif