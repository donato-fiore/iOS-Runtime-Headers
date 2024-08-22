// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXRUNNINGUIVIEWSERVICEEXTENSION_H
#define _EXRUNNINGUIVIEWSERVICEEXTENSION_H

@class EXRunningUIExtension, NSString, NSXPCListener, NSXPCConnection;
@protocol NSXPCListenerDelegate;



@interface _EXRunningUIViewServiceExtension : EXRunningUIExtension <NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSXPCListener *internalListener; // ivar: _internalListener
@property (retain) NSXPCListener *serviceListener; // ivar: _serviceListener
@property (readonly) Class superclass;
@property (retain) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(int)startWithArguments:(*char *)arg0 count:(int)arg1 ;


@end


#endif