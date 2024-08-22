// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRCHMHOMEOBSERVER_H
#define TVRCHMHOMEOBSERVER_H

@class HMHome, NSString, NSMutableDictionary;
@protocol HMAccessoryDelegate, HMHomeDelegate, HMAccessoryDelegatePrivate;

#import <Foundation/Foundation.h>


@interface TVRCHMHomeObserver : NSObject <HMAccessoryDelegate, HMHomeDelegate, HMAccessoryDelegatePrivate>



@property (retain, nonatomic) HMHome *currentHome; // ivar: _currentHome
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *serviceToAccessoryIDMapping; // ivar: _serviceToAccessoryIDMapping
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_checkErrorForLocallySuspendedAccessory:(id)arg0 ;
-(id)init;
-(void)_checkAccessoryReachabilityAndFetchTVServices:(id)arg0 withCompletion:(id)arg1 ;
-(void)_readCharacteristic:(id)arg0 completion:(id)arg1 ;
-(void)_updateAccessoriesForHome:(id)arg0 ;
-(void)_updateServicesForAccessory:(id)arg0 ;
-(void)accessory:(id)arg0 didUpdateNameForService:(id)arg1 ;
-(void)accessoryDidUpdateReachability:(id)arg0 ;
-(void)accessoryDidUpdateReachableTransports:(id)arg0 ;
-(void)accessoryDidUpdateServices:(id)arg0 ;
-(void)home:(id)arg0 didAddAccessory:(id)arg1 ;
-(void)home:(id)arg0 didRemoveAccessory:(id)arg1 ;


@end


#endif