// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBACCESSIBILITYWINDOWHOSTINGCONTROLLERSERVER_H
#define SBACCESSIBILITYWINDOWHOSTINGCONTROLLERSERVER_H

@class NSMutableArray, FBServiceClientAuthenticator, BSServiceConnectionListener, NSMapTable, NSMutableDictionary, NSString;
@protocol BSServiceConnectionListenerDelegate, SBSAccessibilityWindowHostingClientToServerInterface, BSInvalidatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBAccessibilityWindowHostingControllerServer : NSObject <BSServiceConnectionListenerDelegate, SBSAccessibilityWindowHostingClientToServerInterface, BSInvalidatable>

 {
    NSMutableArray *_activeConnections;
    FBServiceClientAuthenticator *_clientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    NSMapTable *_connectionToHostedContextIDs;
    NSMutableDictionary *_contextIDToScene;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_beginHostingWindowWithContextID:(unsigned int)arg0 atLevel:(CGFloat)arg1 ;
-(void)_endHostingWindowWithContextID:(unsigned int)arg0 ;
-(void)_handleDisconnectForServiceConnection:(id)arg0 ;
-(void)activate;
-(void)invalidate;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)registerWindowWithContextID:(id)arg0 atLevel:(id)arg1 ;
-(void)unregisterWindowWithContextID:(id)arg0 ;


@end


#endif