// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HPSHOMEACCESSORYSETTINGSLISTENER_H
#define HPSHOMEACCESSORYSETTINGSLISTENER_H

@class NSMutableDictionary, NSString, NSMutableArray, NSXPCListener;
@protocol NSXPCListenerDelegate, HPSHomeAccessorySettingsConnectionListenerInterfaceDelegete, HPSHomeAccessorySettingsProviderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HPSHomeAccessorySettingsListener : NSObject <NSXPCListenerDelegate, HPSHomeAccessorySettingsConnectionListenerInterfaceDelegete, HPSHomeAccessorySettingsProviderDelegate>



@property (retain) NSMutableDictionary *connectionProviderList; // ivar: _connectionProviderList
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HPSHomeAccessorySettingsConnectionListenerInterfaceDelegete> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *endpointClients; // ivar: _endpointClients
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *homeSettingServerListener; // ivar: _homeSettingServerListener
@property (retain) NSObject<OS_dispatch_queue> *settingsSessionClientsSerialQueue; // ivar: _settingsSessionClientsSerialQueue
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_currentConnectionAccessorySettingsProvider;
-(id)init;
-(void)connectionProvider:(id)arg0 notifyConnectionSessionDelegate:(id)arg1 accessoryDidUpdateSettingForEndPointIdentifier:(id)arg2 keyPath:(id)arg3 value:(id)arg4 ;
-(void)dealloc;
-(void)destroyResources;
-(void)handleClientDisconnection:(id)arg0 ;
-(void)sendFetchAccessorySettingsValueForEndPointIdentifier:(id)arg0 keyPath:(id)arg1 completionHandler:(id)arg2 ;
-(void)sendSubscribeRequestToAccessorySettingsForEndPointIdentifier:(id)arg0 keypath:(id)arg1 completionHandler:(id)arg2 ;
-(void)sendUnsubscribeRequestToAccessorySettingsForEndPointIdentifier:(id)arg0 keypath:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif