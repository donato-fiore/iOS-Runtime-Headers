// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UMPERSONACALLBACKLISTENER_H
#define UMPERSONACALLBACKLISTENER_H

@class NSString, NSMutableSet, NSXPCListener;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface UMPersonaCallbackListener : NSObject <NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *machServiceName; // ivar: _machServiceName
@property (copy, nonatomic) id *personaUpdateCallbackHandler; // ivar: _personaUpdateCallbackHandler
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableSet *xpcConnections; // ivar: _xpcConnections
@property (retain, nonatomic) NSXPCListener *xpcListener; // ivar: _xpcListener


+(id)sharedServer;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)setupPersonaCallbackMachService:(id)arg0 callbackHandler:(id)arg1 ;
-(void)_setUpUMServerXPCConnectionIfNeeded:(id)arg0 ;
-(void)_tearDownConnectionToUMServerWithConnection:(id)arg0 ;
-(void)bubbleDidPop;
-(void)deviceLoginSessionStateDidUpdate;
-(void)personaListDidUpdateCompletionHandler:(id)arg0 ;
-(void)personaUpdateCallbackForMachServiceCompletionHandler:(id)arg0 ;
-(void)readyToSwitchToLoginSession:(id)arg0 completionHandler:(id)arg1 ;
-(void)readyToSwitchToUser:(id)arg0 completionHandler:(id)arg1 ;
-(void)uploadContentWithCompletionHandler:(id)arg0 ;
-(void)userSwitchTaskListDidUpdate;
-(void)willSwitchToUser:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif