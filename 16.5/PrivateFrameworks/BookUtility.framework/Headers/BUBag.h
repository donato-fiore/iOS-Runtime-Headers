// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BUBAG_H
#define BUBAG_H

@class AMSBagValue, NSString, NSDate, AMSProcessInfo;
@protocol AMSBagProtocol;

#import <Foundation/Foundation.h>


@interface BUBag : NSObject <AMSBagProtocol>

 {
    id<AMSBagProtocol> *_bag;
}


@property (readonly, nonatomic) AMSBagValue *accountFlowURLPatterns;
@property (readonly, nonatomic) AMSBagValue *acquireSlotURL;
@property (readonly, nonatomic) AMSBagValue *addFundsURL;
@property (readonly, nonatomic) AMSBagValue *allowCitations;
@property (readonly, nonatomic) AMSBagValue *allowingCitations;
@property (readonly, nonatomic) AMSBagValue *amdDomains;
@property (readonly, nonatomic) AMSBagValue *amdFinishProvisioning;
@property (readonly, nonatomic) AMSBagValue *amdSyncMachine;
@property (readonly, nonatomic) AMSBagValue *appAnalyticsURL;
@property (readonly, nonatomic) AMSBagValue *automaticDownloadQueueURL;
@property (readonly, nonatomic) AMSBagValue *availableBookUpdates;
@property (readonly, nonatomic) AMSBagValue *availableBookUpdatesReloadFrequency;
@property (readonly, nonatomic) AMSBagValue *booksISBNURL;
@property (readonly, nonatomic) AMSBagValue *booksMediaAPIHost;
@property (readonly, nonatomic) AMSBagValue *booksMediaAPIPreviewHost;
@property (readonly, nonatomic) AMSBagValue *booksReadingNowWidgetRolloutRate;
@property (readonly, nonatomic) AMSBagValue *booksServiceAndSupportURL;
@property (readonly, nonatomic) AMSBagValue *booksTabs;
@property (readonly, nonatomic) AMSBagValue *buyProduct;
@property (readonly, nonatomic) AMSBagValue *commerceUIURLs;
@property (readonly, nonatomic) AMSBagValue *contentRestoreMaxItemCount;
@property (readonly, nonatomic) AMSBagValue *contentRestoreURL;
@property (readonly, nonatomic) AMSBagValue *countryCode;
@property (readonly, nonatomic) AMSBagValue *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AMSBagValue *deleteUserReviewUrl;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AMSBagValue *dtPurchasesPages;
@property (readonly, nonatomic) AMSBagValue *endOfBookUpsellEnabled;
@property (readonly, nonatomic) AMSBagValue *endOfPictureBookUpsellEnabled;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) AMSBagValue *familyInfo;
@property (readonly, nonatomic) AMSBagValue *forgottenPassword;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AMSBagValue *isAudiobooksStoreEnabled;
@property (readonly, nonatomic) AMSBagValue *isBooksStoreEnabled;
@property (readonly, nonatomic) AMSBagValue *ixStoreSheet;
@property (readonly, nonatomic) AMSBagValue *ixStoreSheetBooks;
@property (readonly, nonatomic) AMSBagValue *jsAppURL;
@property (readonly, nonatomic) AMSBagValue *kvsGetAll;
@property (readonly, nonatomic) AMSBagValue *kvsPutAll;
@property (readonly, nonatomic) AMSBagValue *language;
@property (readonly, nonatomic) AMSBagValue *languageTag;
@property (readonly, nonatomic) AMSBagValue *libraryLink;
@property (readonly, nonatomic) AMSBagValue *mdFinishProvisioning;
@property (readonly, nonatomic) AMSBagValue *mdSyncMachine;
@property (readonly, nonatomic) AMSBagValue *mediaAPITokenProviderURL;
@property (readonly, nonatomic) AMSBagValue *metrics;
@property (readonly, nonatomic) AMSBagValue *mobileNetworkConstraints;
@property (readonly, nonatomic) AMSBagValue *mobileURLHandlers;
@property (readonly, nonatomic) AMSBagValue *onboardingPersonalizationID;
@property (readonly, nonatomic) AMSBagValue *p2LaunchAudioBookStorePathPatterns;
@property (readonly, nonatomic) AMSBagValue *p2LaunchEbookstoreHostPatterns;
@property (readonly, nonatomic) AMSBagValue *p2LaunchEbookstorePathPatterns;
@property (readonly, nonatomic) AMSBagValue *p2ServiceTermsURL;
@property (readonly, nonatomic) AMSBagValue *privacyAcknowledgementURL;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly, nonatomic) AMSBagValue *processRedirectURL;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly, nonatomic) AMSBagValue *purchaseDAAP;
@property (readonly, nonatomic) AMSBagValue *pushNotificationsEnvironment;
@property (readonly, nonatomic) AMSBagValue *readingGoalShareURL;
@property (readonly, nonatomic) AMSBagValue *remoteConfigSupportedStorefronts;
@property (readonly, nonatomic) AMSBagValue *reportConcernReasons;
@property (readonly, nonatomic) AMSBagValue *reportConcernURL;
@property (readonly, nonatomic) AMSBagValue *reportConcerns;
@property (readonly, nonatomic) AMSBagValue *resetAndRedirectURL;
@property (readonly, nonatomic) AMSBagValue *saveUserReviewURL;
@property (readonly, nonatomic) AMSBagValue *searchHints;
@property (readonly, nonatomic) AMSBagValue *searchTransparencyURL;
@property (readonly, nonatomic) AMSBagValue *seriesInfoLiveFetchesEnabled;
@property (readonly, nonatomic) AMSBagValue *seriesInfoRequestBatchSize;
@property (readonly, nonatomic) AMSBagValue *seriesInfoUpdateIntervalEnabled;
@property (readonly, nonatomic) AMSBagValue *seriesInfoUpdateIntervalInDays;
@property (readonly, nonatomic) AMSBagValue *sharedPurchasesEnabled;
@property (readonly, nonatomic) AMSBagValue *signSAPRequest;
@property (readonly, nonatomic) AMSBagValue *signSAPSetup;
@property (readonly, nonatomic) AMSBagValue *signSAPSetupCert;
@property (readonly, nonatomic) AMSBagValue *songDownloadDone;
@property (readonly, nonatomic) AMSBagValue *storeFront;
@property (readonly, nonatomic) AMSBagValue *storePlatformLookupURLUnpersonalized;
@property (readonly) Class superclass;
@property (readonly, nonatomic) AMSBagValue *tafEmailBodyUrlBase;
@property (readonly, nonatomic) AMSBagValue *trendingSearches;
@property (readonly, nonatomic) AMSBagValue *trustedDomains;
@property (readonly, nonatomic) AMSBagValue *userRateContentURL;
@property (readonly, nonatomic) AMSBagValue *userReviewSortOptions;
@property (readonly, nonatomic) AMSBagValue *viewAudiobook;
@property (readonly, nonatomic) AMSBagValue *viewBook;
@property (readonly, nonatomic) AMSBagValue *viewBookUpdateParams;
@property (readonly, nonatomic) AMSBagValue *writeUserReviewURL;


+(id)_defaultValueDictionary;
+(id)defaultBag;
+(id)defaultBagKeysDictionary;
+(id)offlineCacheProvider;
+(void)audiobookStoreIsAvailable:(id)arg0 ;
+(void)setOfflineCacheProvider:(id)arg0 ;
-(id)URLForKey:(id)arg0 ;
-(id)URLForKey:(id)arg0 account:(id)arg1 ;
-(id)arrayForKey:(id)arg0 ;
-(id)boolForKey:(id)arg0 ;
-(id)bu_voteURL;
-(id)dictionaryForKey:(id)arg0 ;
-(id)doubleForKey:(id)arg0 ;
-(id)initWithBackingBag:(id)arg0 ;
-(id)integerForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)createSnapshotWithCompletion:(id)arg0 ;


@end


#endif