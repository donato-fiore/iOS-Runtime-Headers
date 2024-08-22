// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BUBAG_H
#define BUBAG_H

@class AMSBagValue, NSString, NSDate, AMSProcessInfo;
@protocol AMSBagProtocol;

#import <Foundation/Foundation.h>


@interface BUBag : NSObject <AMSBagProtocol>

 {
    id<AMSBagProtocol> *_bag;
}


@property (readonly, nonatomic) AMSBagValue *bu_acquireSlotURL;
@property (readonly, nonatomic) AMSBagValue *bu_addFundsURL;
@property (readonly, nonatomic) AMSBagValue *bu_allowCitations;
@property (readonly, nonatomic) AMSBagValue *bu_allowingCitations;
@property (readonly, nonatomic) AMSBagValue *bu_amdDomains;
@property (readonly, nonatomic) AMSBagValue *bu_amdFinishProvisioning;
@property (readonly, nonatomic) AMSBagValue *bu_amdSyncMachine;
@property (readonly, nonatomic) AMSBagValue *bu_appAnalyticsURL;
@property (readonly, nonatomic) AMSBagValue *bu_automaticDownloadQueueURL;
@property (readonly, nonatomic) AMSBagValue *bu_availableBookUpdates;
@property (readonly, nonatomic) AMSBagValue *bu_availableBookUpdatesReloadFrequency;
@property (readonly, nonatomic) AMSBagValue *bu_booksISBNURL;
@property (readonly, nonatomic) AMSBagValue *bu_booksMediaAPIHost;
@property (readonly, nonatomic) AMSBagValue *bu_booksMediaAPIPreviewHost;
@property (readonly, nonatomic) AMSBagValue *bu_booksTabs;
@property (readonly, nonatomic) AMSBagValue *bu_buyProduct;
@property (readonly, nonatomic) AMSBagValue *bu_contentRestoreMaxItemCount;
@property (readonly, nonatomic) AMSBagValue *bu_contentRestoreURL;
@property (readonly, nonatomic) AMSBagValue *bu_countryCode;
@property (readonly, nonatomic) AMSBagValue *bu_currencyCode;
@property (readonly, nonatomic) AMSBagValue *bu_deleteUserReviewUrl;
@property (readonly, nonatomic) AMSBagValue *bu_dtPurchasesPages;
@property (readonly, nonatomic) AMSBagValue *bu_endOfBookUpsellEnabled;
@property (readonly, nonatomic) AMSBagValue *bu_endOfPictureBookUpsellEnabled;
@property (readonly, nonatomic) AMSBagValue *bu_familyInfo;
@property (readonly, nonatomic) AMSBagValue *bu_forgottenPassword;
@property (readonly, nonatomic) AMSBagValue *bu_isAudiobooksStoreEnabled;
@property (readonly, nonatomic) AMSBagValue *bu_isBooksStoreEnabled;
@property (readonly, nonatomic) AMSBagValue *bu_ixStoreSheet;
@property (readonly, nonatomic) AMSBagValue *bu_ixStoreSheetBooks;
@property (readonly, nonatomic) AMSBagValue *bu_jsAppURL;
@property (readonly, nonatomic) AMSBagValue *bu_kvsGetAll;
@property (readonly, nonatomic) AMSBagValue *bu_kvsPutAll;
@property (readonly, nonatomic) AMSBagValue *bu_language;
@property (readonly, nonatomic) AMSBagValue *bu_languageTag;
@property (readonly, nonatomic) AMSBagValue *bu_libraryLink;
@property (readonly, nonatomic) AMSBagValue *bu_mdFinishProvisioning;
@property (readonly, nonatomic) AMSBagValue *bu_mdSyncMachine;
@property (readonly, nonatomic) AMSBagValue *bu_mediaAPITokenProviderURL;
@property (readonly, nonatomic) AMSBagValue *bu_metrics;
@property (readonly, nonatomic) AMSBagValue *bu_mobileNetworkConstraints;
@property (readonly, nonatomic) AMSBagValue *bu_mobileURLHandlers;
@property (readonly, nonatomic) AMSBagValue *bu_p2LaunchAudioBookStorePathPatterns;
@property (readonly, nonatomic) AMSBagValue *bu_p2LaunchEbookstoreHostPatterns;
@property (readonly, nonatomic) AMSBagValue *bu_p2LaunchEbookstorePathPatterns;
@property (readonly, nonatomic) AMSBagValue *bu_p2ServiceTermsURL;
@property (readonly, nonatomic) AMSBagValue *bu_privacyAcknowledgementURL;
@property (readonly, nonatomic) AMSBagValue *bu_processRedirectURL;
@property (readonly, nonatomic) AMSBagValue *bu_purchaseDAAP;
@property (readonly, nonatomic) AMSBagValue *bu_readingGoalShareURL;
@property (readonly, nonatomic) AMSBagValue *bu_remoteConfigSupportedStorefronts;
@property (readonly, nonatomic) AMSBagValue *bu_reportConcerns;
@property (readonly, nonatomic) AMSBagValue *bu_resetAndRedirectURL;
@property (readonly, nonatomic) AMSBagValue *bu_saveUserReviewURL;
@property (readonly, nonatomic) AMSBagValue *bu_searchHints;
@property (readonly, nonatomic) AMSBagValue *bu_seriesInfoLiveFetchesEnabled;
@property (readonly, nonatomic) AMSBagValue *bu_seriesInfoRequestBatchSize;
@property (readonly, nonatomic) AMSBagValue *bu_seriesInfoUpdateIntervalEnabled;
@property (readonly, nonatomic) AMSBagValue *bu_seriesInfoUpdateIntervalInDays;
@property (readonly, nonatomic) AMSBagValue *bu_signSAPRequest;
@property (readonly, nonatomic) AMSBagValue *bu_signSAPSetup;
@property (readonly, nonatomic) AMSBagValue *bu_signSAPSetupCert;
@property (readonly, nonatomic) AMSBagValue *bu_songDownloadDone;
@property (readonly, nonatomic) AMSBagValue *bu_storeFront;
@property (readonly, nonatomic) AMSBagValue *bu_storePlatformLookupURLUnpersonalized;
@property (readonly, nonatomic) AMSBagValue *bu_tafEmailBodyUrlBase;
@property (readonly, nonatomic) AMSBagValue *bu_trendingSearches;
@property (readonly, nonatomic) AMSBagValue *bu_trustedDomains;
@property (readonly, nonatomic) AMSBagValue *bu_userRateContentURL;
@property (readonly, nonatomic) AMSBagValue *bu_userReviewSortOptions;
@property (readonly, nonatomic) AMSBagValue *bu_viewAudiobook;
@property (readonly, nonatomic) AMSBagValue *bu_viewBook;
@property (readonly, nonatomic) AMSBagValue *bu_viewBookUpdateParams;
@property (readonly, nonatomic) AMSBagValue *bu_writeUserReviewURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly) Class superclass;


+(id)_defaultValueDictionary;
+(id)defaultBag;
+(id)defaultBagKeysDictionary;
+(id)offlineCacheProvider;
+(void)audiobookStoreIsAvailable:(id)arg0 ;
+(void)setOfflineCacheProvider:(id)arg0 ;
-(id)URLForKey:(id)arg0 ;
-(id)arrayForKey:(id)arg0 ;
-(id)boolForKey:(id)arg0 ;
-(id)bu_voteURL;
-(id)dictionaryForKey:(id)arg0 ;
-(id)doubleForKey:(id)arg0 ;
-(id)integerForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)createSnapshotWithCompletion:(id)arg0 ;


@end


#endif