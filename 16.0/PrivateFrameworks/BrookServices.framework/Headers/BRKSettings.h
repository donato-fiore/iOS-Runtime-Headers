// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRKSETTINGS_H
#define BRKSETTINGS_H

@class NPSManager, NPSDomainAccessor, NSSet, NRDevice, CLLocationManager, NSString, NSDate;
@protocol MCProfileConnectionObserver, CLLocationManagerDelegate;

#import <Foundation/Foundation.h>


@interface BRKSettings : NSObject <MCProfileConnectionObserver, CLLocationManagerDelegate>

 {
    NPSManager *_npsManager;
    BOOL _shouldObserveDefaultChanges;
    int _notifyToken;
    BOOL _currentIsManagedConfigurationImproveHandwashingEnabled;
    NPSDomainAccessor *_domainAccessor;
    NSSet *_observedKeys;
    NSSet *_dataCollectionKeys;
    NRDevice *_device;
    CLLocationManager *_locationManager;
}


@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (nonatomic) CGFloat brookCoolDownInterval;
@property (readonly, nonatomic, getter=isBrookTentpoleEnabled) BOOL brookTentpoleEnabled;
@property (nonatomic, getter=isDataCollectionEnabled) BOOL dataCollectionEnabled;
@property (readonly, nonatomic, getter=isDataCollectionOnboardingComplete) BOOL dataCollectionOnboardingComplete;
@property (nonatomic, getter=isDataCollectionUploadDisabled) BOOL dataCollectionUploadDisabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHealthAndActivityEnabled) BOOL healthAndActivityEnabled; // ivar: _healthAndActivityEnabled
@property (retain, nonatomic) NSDate *lastDataCollectionUploadDate;
@property (readonly, nonatomic, getter=isLocationAuthFlowEnabled) BOOL locationAuthFlowEnabled;
@property (nonatomic, getter=isOnboardingComplete) BOOL onboardingComplete;
@property (nonatomic) NSUInteger overrideDataCollectionAuthorization;
@property (nonatomic, getter=areRemindersEnabled) BOOL remindersEnabled;
@property (readonly, nonatomic, getter=isStealthUIEnabled) BOOL stealthUIEnabled;
@property (readonly) Class superclass;


+(id)_stringForConfigurationWithKey:(id)arg0 ;
+(id)remindersFooterExplanationContactStoreNotAuthorized;
+(id)remindersFooterExplanationFormat;
+(id)remindersFooterExplanationInavlidLocationAuth;
+(id)remindersFooterExplanationNoLocation;
+(id)remindersFooterExplanationNoLocationOrMeCard;
+(id)remindersFooterExplanationSignificantLocationsUnavailable;
+(id)remindersFooterLinkTitleContacts;
+(id)remindersFooterLinkTitleLocation;
+(id)remindersSettingFooter;
+(id)remindersSettingTitle;
+(id)settingsForActiveDevice;
+(id)settingsForDevice:(id)arg0 ;
+(id)settingsTitle;
+(id)timerSettingFooter;
+(id)timerSettingTitle;
-(BOOL)_isManagedConfigurationImproveHandwashingEnabled;
-(BOOL)_isManagedConfigurationImproveHealthAndActivityEnabled;
-(BOOL)_isTinkerDataCollectionEnabled;
-(id)_initWithDevice:(id)arg0 ;
-(id)_valueForKey:(id)arg0 ;
-(id)tinkerDataCollectionCredentials;
-(void)_BRKCancelForBRKSettingsChange;
-(void)_BRKRegisterForBRKSettingsChange;
-(void)_handleNPSNotification;
-(void)_observeDefaultChanges:(BOOL)arg0 ;
-(void)_setValue:(id)arg0 forKey:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;


@end


#endif