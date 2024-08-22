// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANMESSENGERDESTINATION_H
#define ANMESSENGERDESTINATION_H

@class NSArray, HMHome;

#import <Foundation/Foundation.h>


@interface ANMessengerDestination : NSObject

@property (retain, nonatomic) NSArray *accessories; // ivar: _accessories
@property (retain, nonatomic) NSArray *devices; // ivar: _devices
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSArray *users; // ivar: _users


+(id)_bestRemoteRelayAccessoryFromAccessories:(id)arg0 inHome:(id)arg1 ;
+(id)_destinationForAppleAccessories:(id)arg0 home:(id)arg1 rooms:(id)arg2 rapportConnection:(id)arg3 ;
+(id)destinationForAccessoriesInHome:(id)arg0 rooms:(id)arg1 rapportConnection:(id)arg2 ;
+(id)destinationForHome:(id)arg0 excludingUsers:(id)arg1 excludingAccessories:(id)arg2 rapportConnection:(id)arg3 ;
+(id)relayDestinationForHome:(id)arg0 rooms:(id)arg1 rapportConnection:(id)arg2 error:(*id)arg3 ;
-(BOOL)addAccessory:(id)arg0 ;
-(BOOL)addDeviceWithID:(id)arg0 rapportConnection:(id)arg1 ;
-(BOOL)addUser:(id)arg0 inHome:(id)arg1 ;
-(id)idsIdentifiersForService:(id)arg0 ;
-(id)init;
-(id)participantsWithService:(id)arg0 ;
-(void)addUser:(id)arg0 inHome:(id)arg1 rapportConnection:(id)arg2 ;
-(void)removeDeviceWithID:(id)arg0 ;
-(void)removeUser:(id)arg0 ;
-(void)removeUser:(id)arg0 rapportConnection:(id)arg1 ;


@end


#endif