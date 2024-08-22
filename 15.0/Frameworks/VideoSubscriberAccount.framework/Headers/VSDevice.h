// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSDEVICE_H
#define VSDEVICE_H

@class NSString, NSOperationQueue;
@protocol VSRemoteNotifierDelegate, VSDeviceDelegate;

#import <Foundation/Foundation.h>

#import "VSRemoteNotifier.h"

@interface VSDevice : NSObject <VSRemoteNotifierDelegate>



@property (nonatomic) *unk copyAnswer; // ivar: _copyAnswer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSDeviceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger deviceType;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) NSString *productVersionString; // ivar: _productVersionString
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
-(id)developerSettingsFetchOperation;
-(id)init;
-(id)managedProfileConnection;
-(id)productVersion;
-(id)stringForAMSDeviceFamilies;
-(id)stringForAMSPlatform;
-(id)stringForAMSPlatformAttributes;
-(void)cloudConfigurationDidChange;
-(void)dealloc;
-(void)fetchDeviceManagedSetTopBoxProfileWithCompletion:(id)arg0 ;
-(void)fetchSetTopBoxProfileWithCompletion:(id)arg0 ;
-(void)refreshSetTopBoxProfile:(id)arg0 ;


@end


#endif