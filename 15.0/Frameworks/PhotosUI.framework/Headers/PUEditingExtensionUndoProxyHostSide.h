// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUEDITINGEXTENSIONUNDOPROXYHOSTSIDE_H
#define PUEDITINGEXTENSIONUNDOPROXYHOSTSIDE_H

@class NSXPCConnection, NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol PUEditingExtensionUndoButtonHost, NSXPCListenerDelegate, PUEditingExtensionUndoTarget;

#import <Foundation/Foundation.h>


@interface PUEditingExtensionUndoProxyHostSide : NSObject <PUEditingExtensionUndoButtonHost, NSXPCListenerDelegate, PUEditingExtensionUndoTarget>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<PUEditingExtensionUndoButtonHost> *target; // ivar: _target


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)remoteObject;
-(void)performRedo;
-(void)performUndo;
-(void)setShowUndoRedo:(BOOL)arg0 ;
-(void)setUndoEnabled:(BOOL)arg0 redoEnabled:(BOOL)arg1 ;


@end


#endif