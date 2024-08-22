// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADTRACKINGTRANSPARENCY_H
#define ADTRACKINGTRANSPARENCY_H


#import <Foundation/Foundation.h>


@interface ADTrackingTransparency : NSObject

@property (nonatomic) NSInteger acknowledgedVersionForPersonalizedAds;
@property (nonatomic) BOOL crossAppTrackingAllowed;
@property (readonly, nonatomic) NSInteger crossAppTrackingAllowedSwitchDisabledReason;
@property (readonly, nonatomic) BOOL crossAppTrackingAllowedSwitchEnabled;
@property (readonly, nonatomic) NSInteger latestVersionForPersonalizedAdsConsent;
@property (nonatomic) BOOL personalizedAds;
@property (readonly, nonatomic) BOOL personalizedAdsAvailable;
@property (readonly, nonatomic) BOOL personalizedAdsAvailableForAppStore;
@property (readonly, nonatomic) NSInteger personalizedAdsSwitchDisabledReason;
@property (readonly, nonatomic) BOOL personalizedAdsSwitchEnabled;


-(BOOL)_isUserEDURestricted;
-(BOOL)_isUserManagedRestricted;
-(BOOL)_userAllowedToChangeSettings;
-(BOOL)isPersonalizedAdsScreenTimeRestricted;
-(BOOL)shouldDisplayPAUI;
-(NSInteger)accountLevelSwitchDisabledReason;
-(NSInteger)accountRestrictionReason;
-(id)appTrackingServiceProxy:(id)arg0 ;
// -(id)appTrackingXPCConnection:(id)arg0 withInvalidation:(unk)arg1  ;
-(void)personalizedAdsAvailable:(id)arg0 ;


@end


#endif