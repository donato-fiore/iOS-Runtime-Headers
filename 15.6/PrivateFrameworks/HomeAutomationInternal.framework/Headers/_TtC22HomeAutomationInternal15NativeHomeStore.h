// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC22HOMEAUTOMATIONINTERNAL15NATIVEHOMESTORE_H
#define _TTC22HOMEAUTOMATIONINTERNAL15NATIVEHOMESTORE_H

@protocol HMHomeManagerDelegatePrivate, HMHomeDelegatePrivate, HMAccessoryDelegatePrivate, HMMediaSystemDelegate;

#import <Foundation/Foundation.h>


@interface _TtC22HomeAutomationInternal15NativeHomeStore : NSObject <HMHomeManagerDelegatePrivate, HMHomeDelegatePrivate, HMAccessoryDelegatePrivate, HMMediaSystemDelegate>

 {
    ? cachedResults;
    ? cacheRequiresInvalidation;
    ? loadSucceeded;
    ? refreshCompleted;
    ? osUpdateNeeded;
    ? waitSemaphores;
    ? initializationSignpostID;
    ? homeManagerInitTimeout;
    ? _homeManager;
}




-(id)init;
-(void)accessory:(id)arg0 didAddProfile:(id)arg1 ;
-(void)accessory:(id)arg0 didRemoveProfile:(id)arg1 ;
-(void)accessory:(id)arg0 didUpdateAssociatedServiceTypeForService:(id)arg1 ;
-(void)accessory:(id)arg0 didUpdateNameForService:(id)arg1 ;
-(void)accessoryDidUpdateName:(id)arg0 ;
-(void)accessoryDidUpdateServices:(id)arg0 ;
-(void)home:(id)arg0 didAddAccessory:(id)arg1 ;
-(void)home:(id)arg0 didAddMediaSystem:(id)arg1 ;
-(void)home:(id)arg0 didAddRoom:(id)arg1 ;
-(void)home:(id)arg0 didAddRoom:(id)arg1 toZone:(id)arg2 ;
-(void)home:(id)arg0 didAddService:(id)arg1 toServiceGroup:(id)arg2 ;
-(void)home:(id)arg0 didAddServiceGroup:(id)arg1 ;
-(void)home:(id)arg0 didAddZone:(id)arg1 ;
-(void)home:(id)arg0 didRemoveAccessory:(id)arg1 ;
-(void)home:(id)arg0 didRemoveMediaSystem:(id)arg1 ;
-(void)home:(id)arg0 didRemoveRoom:(id)arg1 ;
-(void)home:(id)arg0 didRemoveRoom:(id)arg1 fromZone:(id)arg2 ;
-(void)home:(id)arg0 didRemoveService:(id)arg1 fromServiceGroup:(id)arg2 ;
-(void)home:(id)arg0 didRemoveServiceGroup:(id)arg1 ;
-(void)home:(id)arg0 didRemoveZone:(id)arg1 ;
-(void)home:(id)arg0 didUpdateNameForRoom:(id)arg1 ;
-(void)home:(id)arg0 didUpdateNameForServiceGroup:(id)arg1 ;
-(void)home:(id)arg0 didUpdateNameForZone:(id)arg1 ;
-(void)home:(id)arg0 didUpdateRoom:(id)arg1 forAccessory:(id)arg2 ;
-(void)homeDidUpdateName:(id)arg0 ;
-(void)homeManager:(id)arg0 didAddHome:(id)arg1 ;
-(void)homeManager:(id)arg0 didRemoveHome:(id)arg1 ;
-(void)homeManagerDidUpdateAssistantIdentifiers:(id)arg0 ;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;
-(void)mediaSystem:(id)arg0 didUpdateConfiguredName:(id)arg1 ;
-(void)mediaSystem:(id)arg0 didUpdateName:(id)arg1 ;


@end


#endif