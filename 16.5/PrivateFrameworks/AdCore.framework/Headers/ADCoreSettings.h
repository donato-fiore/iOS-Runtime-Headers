// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADCORESETTINGS_H
#define ADCORESETTINGS_H

@class NSString, NSURL, ACAccount;


#import "ADSingleton.h"

@interface ADCoreSettings : ADSingleton

@property (nonatomic) CGFloat NSURLConnectionTimeout; // ivar: _NSURLConnectionTimeout
@property (nonatomic) CGFloat NSURLTransactionTimeout; // ivar: _NSURLTransactionTimeout
@property (nonatomic) CGFloat adServerTimeoutInterval; // ivar: _adServerTimeoutInterval
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) int connectionType; // ivar: _connectionType
@property (readonly, nonatomic) NSString *customJinglePayload;
@property (retain, nonatomic) NSURL *defaultConfigurationServerURL; // ivar: _defaultConfigurationServerURL
@property (retain, nonatomic) NSURL *defaultServerURL; // ivar: _defaultServerURL
@property (retain, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (readonly, nonatomic) BOOL educationModeEnabled; // ivar: _educationModeEnabled
@property (readonly, nonatomic) ACAccount *iCloudAccount;
@property (readonly, nonatomic) NSString *iCloudAccountIdentifier;
@property (readonly, nonatomic) NSString *iCloudDSID;
@property (readonly, nonatomic) NSString *iTunesAccountDSID;
@property (readonly, nonatomic) ACAccount *iTunesStoreAccount;
@property (retain, nonatomic) NSString *iTunesStorefront; // ivar: _iTunesStorefront
@property (readonly, nonatomic) BOOL isManagedAppleID;
@property (readonly, nonatomic) BOOL isManagediCloudAccount;
@property (readonly, nonatomic) BOOL isManagediTunesAccount;
@property (nonatomic) BOOL isPersonalizedAdsEnabled;
@property (readonly, nonatomic) BOOL isRestrictedRegion; // ivar: _isRestrictedRegion
@property (nonatomic) CGFloat jingleTimeoutInterval; // ivar: _jingleTimeoutInterval
@property (readonly, nonatomic) NSString *localeIdentifier;
@property (retain, nonatomic) NSString *longBuildVersion; // ivar: _longBuildVersion
@property (nonatomic) int maxSegmentSendInterval;
@property (retain, nonatomic) NSString *osIdentifier; // ivar: _osIdentifier
@property (retain, nonatomic) NSString *osVersionAndBuild; // ivar: _osVersionAndBuild
@property (nonatomic) int runState; // ivar: _runState
@property (nonatomic) int segmentRetrievalInterval;
@property (retain, nonatomic) NSString *shortBuildVersion; // ivar: _shortBuildVersion
@property (retain, nonatomic) NSString *shortModelType; // ivar: _shortModelType
@property (retain, nonatomic) NSString *storefrontLocalizationLanguage; // ivar: _storefrontLocalizationLanguage
@property (nonatomic) float timezone; // ivar: _timezone
@property (readonly) BOOL unitTesting;


+(id)sharedInstance;
-(BOOL)isAccountRestricted;
-(BOOL)isRestrictedByScreenTime;
-(BOOL)purpleBuddyWillRun;
-(id)adprivacydBag;
-(id)deviceDescription;
-(id)init;
-(int)deviceRunStateForBundleIdentifier:(id)arg0 ;
-(void)expire;
-(void)reloadNoServicesRestrictions;
-(void)reloadStorefront:(id)arg0 ;
-(void)setIdentifierForAdvertisingAllowed:(BOOL)arg0 ;


@end


#endif