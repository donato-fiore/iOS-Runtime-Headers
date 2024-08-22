// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMEDIAACCESSORY_H
#define HMDMEDIAACCESSORY_H

@class NSDictionary, NSString;
@protocol HMFLogging;


#import "HMDAccessory.h"
#import "HMDMediaAccessoryAdvertisement.h"
#import "HMDMediaProfile.h"

@interface HMDMediaAccessory : HMDAccessory <HMFLogging>



@property (readonly, copy) HMDMediaAccessoryAdvertisement *advertisement; // ivar: _advertisement
@property (readonly, copy) NSDictionary *assistantObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMDMediaProfile *mediaProfile; // ivar: _mediaProfile
@property (readonly) Class superclass;
@property (readonly, copy) NSString *urlString;


+(BOOL)supportsSecureCoding;
-(BOOL)_shouldFilterAccessoryProfile:(id)arg0 ;
-(BOOL)providesHashRouteID;
-(NSInteger)reachableTransports;
-(NSUInteger)supportedTransports;
-(id)_createMediaProfile;
-(id)dumpSimpleState;
-(id)dumpState;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTransaction:(id)arg0 home:(id)arg1 ;
-(id)name;
-(id)transactionWithObjectChangeType:(NSUInteger)arg0 ;
-(id)transportReports;
-(void)_registerForMessages;
-(void)addAdvertisement:(id)arg0 ;
-(void)configureWithHome:(id)arg0 msgDispatcher:(id)arg1 configurationTracker:(id)arg2 initialConfiguration:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleRoomChanged:(id)arg0 ;
-(void)handleRoomNameChanged:(id)arg0 ;
-(void)handleUpdatedAdvertisement:(id)arg0 ;
-(void)handleUpdatedMinimumUserPrivilege:(NSInteger)arg0 ;
-(void)handleUpdatedPassword:(id)arg0 ;
-(void)notifyConnectivityChangedWithReachabilityState:(BOOL)arg0 ;
-(void)removeAdvertisement:(id)arg0 ;
-(void)setRemotelyReachable:(BOOL)arg0 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif