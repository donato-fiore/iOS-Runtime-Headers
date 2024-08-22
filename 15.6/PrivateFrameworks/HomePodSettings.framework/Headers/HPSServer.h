// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HPSSERVER_H
#define HPSSERVER_H

@class NSString, NSMutableArray, NSXPCListener;
@protocol NSXPCListenerDelegate, HPSImplementer, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HPSServer : NSObject <NSXPCListenerDelegate, HPSImplementer>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientInfoSerialQueue; // ivar: _clientInfoSerialQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<HPSImplementer> *homeInterfaceDelegate; // ivar: _homeInterfaceDelegate
@property (retain, nonatomic) NSMutableArray *homePodAccessoryClients; // ivar: _homePodAccessoryClients
@property (retain, nonatomic) NSXPCListener *homeSettingServerListener; // ivar: _homeSettingServerListener
@property (retain, nonatomic) NSXPCListener *serverListener; // ivar: _serverListener
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)accessoryDidUpdateAttribute:(id)arg0 withContext:(id)arg1 ;
-(void)deviceDidUpdateSetting:(id)arg0 withValue:(id)arg1 ;
-(void)getAirPlaySettings:(id)arg0 ;
-(void)getCurrentHomeAttribute:(id)arg0 completion:(id)arg1 ;
-(void)getHomeAccessoryAttribute:(id)arg0 completion:(id)arg1 ;
-(void)getHomeKitCachedSettings:(id)arg0 ;
-(void)handleClientDisconnection:(id)arg0 ;
-(void)homeKitAccessorySettingForKeyPath:(id)arg0 value:(id)arg1 completion:(id)arg2 ;
-(void)homeKitSettingValueForKeyPath:(id)arg0 completion:(id)arg1 ;
-(void)isAutomaticSoftwareUpdateEnabled:(id)arg0 ;
-(void)isHomeKitSyncComplete:(id)arg0 ;
-(void)isValidHome:(id)arg0 ;
-(void)startConnection;


@end


#endif