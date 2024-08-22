// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXSCENESESSION_H
#define _EXSCENESESSION_H

@class NSString, NSXPCListenerEndpoint, NSUUID, NSXPCListener, NSXPCConnection;
@protocol NSXPCListenerDelegate, _EXSceneSessionExtensionXPCProtocol, _EXConnectionHandler, _EXScene;

#import <Foundation/Foundation.h>

#import "_EXSceneConfiguration.h"
#import "_EXExtension.h"

@interface _EXSceneSession : NSObject <NSXPCListenerDelegate, _EXSceneSessionExtensionXPCProtocol, _EXConnectionHandler>



@property (copy) _EXSceneConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) _EXExtension *extension; // ivar: _extension
@property (readonly, nonatomic) BOOL hasSwiftUIContent; // ivar: _hasSwiftUIContent
@property (readonly) NSUInteger hash;
@property (readonly) NSXPCListenerEndpoint *hostEndpoint; // ivar: _hostEndpoint
@property (retain) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy) NSString *role;
@property (retain, nonatomic) NSObject<_EXScene> *scene; // ivar: _scene
@property (retain) NSXPCListener *sceneConnectionListener; // ivar: _sceneConnectionListener
@property (retain, nonatomic) NSXPCConnection *sceneXPCConnection; // ivar: _sceneXPCConnection
@property (weak, nonatomic) NSXPCConnection *sessionXPCConnection; // ivar: _sessionXPCConnection
@property (readonly) NSUInteger signpost; // ivar: _signpost
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)shouldAcceptXPCConnection:(id)arg0 ;
-(id)initWithExtension:(id)arg0 ;
-(id)makeConfigurationWithParameters:(id)arg0 ;
-(id)makeConnectionResponse;
-(id)makeSceneWithError:(*id)arg0 ;
-(id)makeXPCConnectionWithError:(*id)arg0 ;
-(void)connectSceneSessionWithRequest:(id)arg0 reply:(id)arg1 ;
-(void)connectToScene:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif