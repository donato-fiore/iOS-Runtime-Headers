// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSMANAGEDPROFILECONNECTION_H
#define VSMANAGEDPROFILECONNECTION_H

@class NSString, NSMutableSet, MCProfileConnection;
@protocol MCProfileConnectionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VSManagedProfileConnection : NSObject <MCProfileConnectionObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // ivar: _notificationQueue
@property (retain, nonatomic) NSMutableSet *observers; // ivar: _observers
@property (retain, nonatomic) MCProfileConnection *profileConnection; // ivar: _profileConnection
@property (readonly) Class superclass;


+(id)sharedConnection;
-(NSInteger)TVProviderModificationAllowed;
-(NSInteger)UIAppInstallationAllowed;
-(NSInteger)accountModificationAllowed;
-(NSInteger)analyticsAllowed;
-(NSInteger)appInstallationAllowed;
-(NSInteger)boolForManagedConfigurationBool:(int)arg0 ;
-(NSInteger)maximumAppsRating;
-(id)init;
-(id)providerUniqueID;
-(id)userToken;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)refreshProfileWithCompletion:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif