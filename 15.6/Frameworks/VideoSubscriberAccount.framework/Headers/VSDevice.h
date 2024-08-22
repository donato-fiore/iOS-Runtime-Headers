// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSDEVICE_H
#define VSDEVICE_H

@class NSString, NSMutableSet, NSOperationQueue;
@protocol VSManagedProfileConnectionObserver, VSRemoteNotifierDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VSRemoteNotifier.h"
#import "VSPreferences.h"
#import "VSManagedProfileConnection.h"

@interface VSDevice : NSObject <VSManagedProfileConnectionObserver, VSRemoteNotifierDelegate>



@property (nonatomic) *unk copyAnswer; // ivar: _copyAnswer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VSRemoteNotifier *developerSettingsRemoteNotifier; // ivar: _developerSettingsRemoteNotifier
@property (readonly, nonatomic) NSUInteger deviceType;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *newDeveloperSettingsFetchOperationBlock; // ivar: _newDeveloperSettingsFetchOperationBlock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // ivar: _notificationQueue
@property (retain, nonatomic) NSMutableSet *observers; // ivar: _observers
@property (retain, nonatomic) VSPreferences *preferences; // ivar: _preferences
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) NSString *productVersionString; // ivar: _productVersionString
@property (retain, nonatomic) VSManagedProfileConnection *profileConnection; // ivar: _profileConnection
@property (readonly, nonatomic, getter=isRunningACustomerBuild) BOOL runningACustomerBuild;
@property (readonly, nonatomic, getter=isRunningAnInternalBuild) BOOL runningAnInternalBuild;
@property (retain, nonatomic) VSRemoteNotifier *setTopBoxStateRemoteNotifier; // ivar: _setTopBoxStateRemoteNotifier
@property (readonly) Class superclass;


+(BOOL)_getMobileGestaltBoolean:(struct __CFString *)arg0 withCopyAnswer:(*unk)arg1 ;
+(BOOL)_runningACustomerBuildWithCopyAnswer:(*unk)arg0 ;
+(BOOL)_runningAnInternalBuildWithCopyAnswer:(*unk)arg0 ;
+(NSUInteger)_deviceTypeWithCopyAnswer:(*unk)arg0 ;
+(id)_productVersionWithCopyAnswer:(*unk)arg0 ;
+(id)currentDevice;
-(BOOL)setIgnoreSetTopBoxProfile:(BOOL)arg0 ;
-(id)accountDeletionConfirmationMessageForIdentityProviderDisplayName:(id)arg0 ;
-(id)developerIdentityProviderDeletionConfirmationMessage;
-(id)init;
-(id)productVersion;
-(id)stringForAMSDeviceFamilies;
-(id)stringForAMSPlatform;
-(id)stringForAMSPlatformAttributes;
-(void)cloudConfigurationDidChange;
-(void)dealloc;
-(void)fetchDeviceManagedSetTopBoxProfileWithCompletion:(id)arg0 ;
-(void)fetchSetTopBoxProfileWithCompletion:(id)arg0 ;
-(void)profileConnectionProfileChanged:(id)arg0 ;
-(void)refreshSetTopBoxProfile:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)remoteNotifier:(id)arg0 didReceiveRemoteNotificationWithUserInfo:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif