// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HPSHOMEINTERFACE_H
#define HPSHOMEINTERFACE_H

@class NSXPCConnection;
@protocol HPSettingsConnectionInterfaceDelegate;

#import <Foundation/Foundation.h>


@interface HPSHomeInterface : NSObject

@property (nonatomic) BOOL connectionValid; // ivar: _connectionValid
@property (weak, nonatomic) NSObject<HPSettingsConnectionInterfaceDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSXPCConnection *hpsConnection; // ivar: _hpsConnection


+(id)connectionError;
-(id)initWithDelegate:(id)arg0 ;
-(void)_accessoryDidUpdateAttribute:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(void)_homekitDidUpdateAccessorySettingValueForKeyPath:(id)arg0 value:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)getAirPlaySettings:(id)arg0 ;
-(void)getAllHomeKitSettingsKeyPath:(id)arg0 ;
-(void)getCurrentHomeAttribute:(id)arg0 completion:(id)arg1 ;
-(void)getHomeAccessoryAttribute:(id)arg0 completion:(id)arg1 ;
-(void)getHomeKitCachedSettings:(id)arg0 ;
-(void)getHomeKitSettingForKeyPath:(id)arg0 completion:(id)arg1 ;
-(void)handleConnectionInterrupted;
-(void)handleConnectionInvalidated;
-(void)homeKitAccessorySettingForKeyPath:(id)arg0 value:(id)arg1 completion:(id)arg2 ;
-(void)homeKitSettingValueForKeyPath:(id)arg0 completion:(id)arg1 ;
-(void)isAutomaticSoftwareUpdateEnabled:(id)arg0 ;
-(void)isHomeKitSyncComplete:(id)arg0 ;
-(void)isValidHome:(id)arg0 ;
-(void)setHomeKitSettingForKeyPath:(id)arg0 newValue:(id)arg1 completion:(id)arg2 ;
-(void)startConnection;


@end


#endif