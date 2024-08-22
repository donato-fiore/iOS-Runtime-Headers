// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EXRUNNINGUIEXTENSION_H
#define _EXRUNNINGUIEXTENSION_H

@class EXRunningExtension, NSString, NSXPCListener, NSMutableDictionary, NSXPCConnection;
@protocol _UIViewServiceSessionManagerDelegate, NSXPCListenerDelegate, _EXInternalExtensionXPCProtocol, _EXExtensionSceneProviding, _EXExtensionViewControllerFactory;



@interface _EXRunningUIExtension : EXRunningExtension <_UIViewServiceSessionManagerDelegate, NSXPCListenerDelegate, _EXInternalExtensionXPCProtocol, _EXExtensionSceneProviding, _EXExtensionViewControllerFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain) NSXPCListener *internalListener; // ivar: _internalListener
@property (retain) NSXPCListener *serviceListener; // ivar: _serviceListener
@property (readonly) NSMutableDictionary *sessions; // ivar: _sessions
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain) NSObject<_EXExtensionViewControllerFactory> *viewControllerFactory; // ivar: _viewControllerFactory
@property (retain) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(BOOL)isExtensionViewServiceSessionManager:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)requiresExtensionContextForViewServiceSessionManager:(id)arg0 ;
-(id)configurationForSceneNamed:(id)arg0 ;
-(id)containingViewControllerClassNameForViewServiceSessionManager:(id)arg0 ;
-(id)init;
-(id)mainStoryboardNameForViewServiceSessionManager:(id)arg0 ;
-(id)makeViewControllerWithSceneConfiguration:(id)arg0 ;
-(id)scenes;
-(id)sessionForIdentifier:(id)arg0 ;
-(id)viewControllerClassNameForViewServiceSessionManager:(id)arg0 ;
-(int)startWithArguments:(*char *)arg0 count:(int)arg1 ;
-(void)addSession:(id)arg0 ;
-(void)requestHostUserInterfaceSessionForSession:(id)arg0 reply:(id)arg1 ;
-(void)viewServiceSessionManager:(id)arg0 didCreateViewController:(id)arg1 contextToken:(id)arg2 ;


@end


#endif