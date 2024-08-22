// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC14SIRIKITRUNTIME25BRIDGEBACKEDSERVICEHELPER_H
#define _TTC14SIRIKITRUNTIME25BRIDGEBACKEDSERVICEHELPER_H

@protocol AFServiceHelper;

#import <Foundation/Foundation.h>


@interface _TtC14SiriKitRuntime25BridgeBackedServiceHelper : NSObject <AFServiceHelper>

 {
    ? bridge;
    ? outputPublisher;
    ? requestContextData;
    ? peerInfo;
}




-(BOOL)isDeviceInCarDND;
-(BOOL)isDeviceInStarkMode;
-(BOOL)isDeviceLockedWithPasscode;
-(BOOL)isTimeoutSuspended;
-(BOOL)openSensitiveURL:(id)arg0 ;
-(id)assistantLocalizedStringForKey:(id)arg0 table:(id)arg1 bundle:(id)arg2 ;
-(id)endpointInfo;
-(id)init;
-(id)instanceInfo;
-(id)peerInfoForCurrentCommand;
-(void)dismissAssistant;
-(void)fetchContextsForKeys:(id)arg0 includesNearbyDevices:(BOOL)arg1 completion:(id)arg2 ;
-(void)handleCommand:(id)arg0 completion:(id)arg1 ;
-(void)isDeviceWatchAuthenticatedWithCompletion:(id)arg0 ;
-(void)prepareForAudioHandoffFailedWithCompletion:(id)arg0 ;
-(void)prepareForAudioHandoffWithCompletion:(id)arg0 ;


@end


#endif