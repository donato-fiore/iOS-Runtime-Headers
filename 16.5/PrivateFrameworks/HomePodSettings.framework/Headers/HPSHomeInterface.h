// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(void)_accessoryDidUpdateAttribute:(id)arg0 withContext:(id)arg1 ;
-(void)dealloc;
-(void)getAirPlaySettings:(id)arg0 ;
-(void)getCurrentHomeAttribute:(id)arg0 completion:(id)arg1 ;
-(void)getHomeAccessoryAttribute:(id)arg0 completion:(id)arg1 ;
-(void)getHomeKitCachedSettings:(id)arg0 ;
-(void)handleConnectionInterrupted;
-(void)handleConnectionInvalidated;
-(void)isAutomaticSoftwareUpdateEnabled:(id)arg0 ;
-(void)isHomeKitSyncComplete:(id)arg0 ;
-(void)startConnection;


@end


#endif