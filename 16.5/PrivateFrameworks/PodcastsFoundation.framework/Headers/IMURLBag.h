// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMURLBAG_H
#define IMURLBAG_H

@class AMSSnapshotBag, NSString, NSDate, AMSBag, AMSProcessInfo;
@protocol AMSBagProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IMMutableBagKeySet.h"

@interface IMURLBag : NSObject <AMSBagProtocol>



@property (retain) AMSSnapshotBag *currentSnapshot; // ivar: _currentSnapshot
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger downloadLimitPodcast; // ivar: _downloadLimitPodcast
@property (nonatomic) NSInteger downloadLimitVideoPodcast; // ivar: _downloadLimitVideoPodcast
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (nonatomic) NSUInteger failedUpdateAttempts; // ivar: _failedUpdateAttempts
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IMMutableBagKeySet *keySet; // ivar: _keySet
@property (nonatomic) CGFloat libraryShowFetchThresholdDefaultValue; // ivar: _libraryShowFetchThresholdDefaultValue
@property (retain, nonatomic) AMSBag *liveBag; // ivar: _liveBag
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)registerBagKeys:(id)arg0 ;
-(NSUInteger)explicitContentBadgeTreatment;
-(id)URLForKey:(id)arg0 ;
-(id)arrayForKey:(id)arg0 ;
-(id)backgroundFetchInterval;
-(id)bag;
-(id)boolForKey:(id)arg0 ;
-(id)coldStartLandOnListenNow;
-(id)dictionaryForKey:(id)arg0 ;
-(id)doubleForKey:(id)arg0 ;
-(id)fairPlayV2Enabled;
-(id)fairPlayV2RolloutRate;
-(id)init;
-(id)integerForKey:(id)arg0 ;
-(id)libraryShowFetchThreshold;
-(id)mediaTaskCountryCode;
-(id)mescalCertificateURL;
-(id)mescalSetupURL;
-(id)mescalSignSapRequests;
-(id)mescalSignSapResponses;
-(id)mescalSignedActions;
-(id)metricsDictionary;
-(id)metricsFastImpressionTimeout;
-(id)metricsImpressionableThreshold;
-(id)metricsImpressionableViewablePercentage;
-(id)metricsSamplingPercentageUsersLog;
-(id)metricsSessionDurationLog;
-(id)metricsURL;
-(id)personalizedChannelPollingInterval;
-(id)personalizedLookupURL;
-(id)podcastsLicenseCert;
-(id)podcastsLicenseOfflineRenew;
-(id)podcastsLicenseOfflineStart;
-(id)podcastsLicenseOfflineStop;
-(id)podcastsLicenseOfflineStopNonce;
-(id)podcastsLicenseStreamingRenew;
-(id)podcastsLicenseStreamingStart;
-(id)podcastsLicenseStreamingStop;
-(id)podcastsMediaAPIHostUrl;
-(id)pushNotificationRegistration;
-(id)reportAConcernURL;
-(id)storefrontSupportsColdStart;
-(id)stringForKey:(id)arg0 ;
-(id)syncStringForKey:(id)arg0 ;
-(id)syncValueForKey:(id)arg0 ;
-(id)tokenServiceUrl;
-(id)trustedDomains;
-(id)unpersonalizedLookupURL;
-(void)_registerBagKeysIfNeeded;
-(void)createSnapshotWithCompletion:(id)arg0 ;
-(void)reportAConcernURLWithCompletion:(id)arg0 ;
-(void)scheduleBagUpdateOnDate:(id)arg0 ;
-(void)updateBagOnCurrentQueue;
-(void)updateWithNewBag:(id)arg0 ;


@end


#endif