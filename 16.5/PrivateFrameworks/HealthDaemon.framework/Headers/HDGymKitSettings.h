// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDGYMKITSETTINGS_H
#define HDGYMKITSETTINGS_H

@class NRDevice, NSString;
@protocol HDDatabaseProtectedDataObserver, HDDataObserver, NRDevicePropertyObserver, HDProfileReadyObserver, OS_dispatch_queue, HDGymKitSettingsDelegate;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDGymKitSettings : NSObject <HDDatabaseProtectedDataObserver, HDDataObserver, NRDevicePropertyObserver, HDProfileReadyObserver>

 {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _nfcPermission;
    os_unfair_lock_s _lock;
    int _privacyNotificationToken;
    NRDevice *_currentDevice;
    BOOL _hasRunProtectedDataCheck;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDGymKitSettingsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL fitnessTrackingEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger nfcPermission;
@property (readonly) Class superclass;


-(BOOL)isLowPowerModeEnabled;
-(id)initWithProfile:(id)arg0 queue:(id)arg1 ;
-(void)_setNFCAlwaysOnPreferenceIfNecessary;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)device:(id)arg0 propertyDidChange:(id)arg1 fromValue:(id)arg2 ;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)unitTest_simulateNRDeviceUpdate;


@end


#endif