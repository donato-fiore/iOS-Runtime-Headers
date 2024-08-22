// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RADIOAVAILABILITYCONTROLLER_H
#define RADIOAVAILABILITYCONTROLLER_H

@class NSNumber, NSString;
@protocol ICEnvironmentMonitorObserver, MCProfileConnectionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RadioAvailabilityController : NSObject <ICEnvironmentMonitorObserver, MCProfileConnectionObserver>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;
    NSObject<OS_dispatch_queue> *_restrictionLoadQueue;
    BOOL _hasSuccessfullyLoadedURLBag;
    BOOL _isRadioAvailable;
    NSNumber *_isRadioAvailableFromBag;
    BOOL _isRadioRestricted;
    NSNumber *_lastActiveAccountUniqueIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasLoadedRadioAvailability;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isRadioAvailable) BOOL radioAvailable;
@property (readonly) Class superclass;


-(BOOL)_calculateRadioRestricted;
-(id)_currentStoreFrontIdentifier;
-(id)_userDefaultsDomain;
-(id)init;
-(void)_currentStoreFrontIdentifierWithCompletion:(id)arg0 ;
-(void)_reloadRadioBagAvailabilityWithCompletionHandler:(id)arg0 ;
-(void)_reloadRadioRestriction;
-(void)_updateRadioAvailabilityAllowingNotifications:(BOOL)arg0 ;
-(void)_updateRadioAvailabilityWithStoreBagDictionary:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg0 ;
-(void)getRadioAvailabilityWithCompletionHandler:(id)arg0 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg0 userInfo:(id)arg1 ;


@end


#endif