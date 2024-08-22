// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSSERVERSETTINGSSTORE_H
#define _LSSERVERSETTINGSSTORE_H

@class LSInProcessSettingsStore, NSString, NSXPCListener;
@protocol NSXPCListenerDelegate;



@interface _LSServerSettingsStore : LSInProcessSettingsStore <NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)setUserElection:(unsigned char)arg0 forExtensionKey:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)settingsStoreConfigurationForProcessWithAuditToken:(struct ? )arg0 ;
-(void)_internalQueue_initializeDatabase;
-(void)_internalQueue_insertIdentifier:(id)arg0 userElection:(unsigned char)arg1 ;
-(void)_internalQueue_insertIdentifier:(id)arg0 userElection:(unsigned char)arg1 timestamp:(CGFloat)arg2 ;
-(void)_internalQueue_loadDatabase;
-(void)_internalQueue_loadPluginKitDatabase;
-(void)postSettingsChangeNotification;
-(void)setUserElection:(unsigned char)arg0 forExtensionKey:(id)arg1 reply:(id)arg2 ;
-(void)userElectionForExtensionKey:(id)arg0 reply:(id)arg1 ;


@end


#endif