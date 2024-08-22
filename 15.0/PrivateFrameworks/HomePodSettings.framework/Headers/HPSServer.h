// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HPSSERVER_H
#define HPSSERVER_H

@class NSString, NSMutableArray, NSXPCListener;
@protocol NSXPCListenerDelegate, HPSImplementer, HPSHomeInterface;

#import <Foundation/Foundation.h>


@interface HPSServer : NSObject <NSXPCListenerDelegate, HPSImplementer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<HPSHomeInterface> *homeInterfaceDelegate; // ivar: _homeInterfaceDelegate
@property (retain, nonatomic) NSMutableArray *homePodAccessoryClients; // ivar: _homePodAccessoryClients
@property (retain, nonatomic) NSXPCListener *homeSettingServerListener; // ivar: _homeSettingServerListener
@property (retain, nonatomic) NSXPCListener *serverListener; // ivar: _serverListener
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)getAirPlaySettings:(id)arg0 ;
-(void)getAllHomeKitSettingsKeyPath:(id)arg0 ;
-(void)getCurrentHomeAttribute:(id)arg0 completion:(id)arg1 ;
-(void)getHomeAccessoryAttribute:(id)arg0 completion:(id)arg1 ;
-(void)getHomeKitCachedSettings:(id)arg0 ;
-(void)getHomeKitSettingForKeyPath:(id)arg0 completion:(id)arg1 ;
-(void)handleClientDisconnection:(id)arg0 ;
-(void)homeKitAccessorySettingForKeyPath:(id)arg0 value:(id)arg1 completion:(id)arg2 ;
-(void)homeKitSettingValueForKeyPath:(id)arg0 completion:(id)arg1 ;
-(void)homekitAccessoryDidUpdateAttribute:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(void)homekitDidUpdateAccessorySettingValueForKeyPath:(id)arg0 value:(id)arg1 completion:(id)arg2 ;
-(void)isAutomaticSoftwareUpdateEnabled:(id)arg0 ;
-(void)isHomeKitSyncComplete:(id)arg0 ;
-(void)isValidHome:(id)arg0 ;
-(void)setHomeKitSettingForKeyPath:(id)arg0 newValue:(id)arg1 completion:(id)arg2 ;
-(void)startConnection;


@end


#endif