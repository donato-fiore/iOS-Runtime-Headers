// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI16ENMANAGERADAPTER_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI16ENMANAGERADAPTER_H

@class ENManager, NSSet;
@protocol _TtP28HealthExposureNotificationUI17ExposureNotifying_;

#import <Foundation/Foundation.h>


@interface _TtC28HealthExposureNotificationUI16ENManagerAdapter : NSObject <_TtP28HealthExposureNotificationUI17ExposureNotifying_>

 {
    ? activationGroup;
    ? statusObservation;
    ? statusChangeObservers;
}


@property (nonatomic) BOOL areAvailabilityAlertsEnabled; // ivar: areAvailabilityAlertsEnabled
@property (nonatomic) NSInteger exposureNotificationStatus; // ivar: exposureNotificationStatus
@property (nonatomic) BOOL isAvailabilityAlertsSwitchEnabled; // ivar: isAvailabilityAlertsSwitchEnabled
@property (nonatomic) BOOL isExposureLoggingDataPresent; // ivar: isExposureLoggingDataPresent
@property (nonatomic, readonly) ENManager *manager; // ivar: manager
@property (nonatomic, copy) NSSet *statusChangeObservers;


+(id)defaultAdapter;
+(void)setDefaultAdapter:(id)arg0 ;
-(BOOL)tccContainsRecordForBundleIdentifier:(id)arg0 ;
-(id)init;
-(void)allRegionConfigurations:(id)arg0 ;
-(void)dealloc;
-(void)didEnterLegalConsentPageForRegion:(id)arg0 ;
-(void)fetchAgencyModelForRegionCode:(id)arg0 reason:(unsigned int)arg1 completion:(id)arg2 ;
-(void)fetchAllEntities:(id)arg0 ;
-(void)fetchSubdivisionsForRegion:(id)arg0 completion:(id)arg1 ;
-(void)getAgencyModelForBundleID:(id)arg0 completion:(id)arg1 ;
-(void)getAgencyModelForRegionCode:(id)arg0 completion:(id)arg1 ;
-(void)getLastVisitedRegionWithCompletion:(id)arg0 ;
-(void)isKeyReleasePreAuthorizedForRegion:(id)arg0 completion:(id)arg1 ;
-(void)isTravelStatusEnabledForRegion:(id)arg0 completion:(id)arg1 ;
-(void)latestExposureNotification:(id)arg0 ;
-(void)notifyChangeObserversForChangeFrom:(NSInteger)arg0 to:(NSInteger)arg1 ;
-(void)onboardingDidStartForRegion:(id)arg0 source:(NSInteger)arg1 ;
-(void)refreshStatusWithCompletion:(id)arg0 ;
-(void)resetAllDataAndDisableExposureNotifications:(id)arg0 ;
-(void)setActivePhaseOneAppWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)setActiveRegion:(id)arg0 completion:(id)arg1 ;
-(void)setAvailabilityAlertsEnabled:(BOOL)arg0 completion:(id)arg1 ;
-(void)setExposureNotificationEnabled:(BOOL)arg0 completion:(id)arg1 ;
-(void)setPreAuthorizeDiagnosisKeysEnabled:(BOOL)arg0 forRegion:(id)arg1 completion:(id)arg2 ;
-(void)setShareAnalyticsEnabled:(BOOL)arg0 region:(id)arg1 version:(id)arg2 completion:(id)arg3 ;
-(void)setTravelStatusEnabled:(BOOL)arg0 region:(id)arg1 completion:(id)arg2 ;
-(void)setUserConsent:(NSInteger)arg0 region:(id)arg1 text:(id)arg2 version:(id)arg3 completion:(id)arg4 ;
-(void)setWeeklySummaryEnabled:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif