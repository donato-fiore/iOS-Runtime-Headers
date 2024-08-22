// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBEVENTOBJECT_H
#define NTPBEVENTOBJECT_H

@class PBCodable;
@protocol NSCopying;


#import "NTPBAdCtaEngagement.h"
#import "NTPBAdEngagement.h"
#import "NTPBAdExposureIneligible.h"
#import "NTPBAdExposureOpportunity.h"
#import "NTPBAdImpression.h"
#import "NTPBAlreadySubscriberSignIn.h"
#import "NTPBAnfComponentExposure.h"
#import "NTPBAppSessionEnd.h"
#import "NTPBAppSessionEndWatch.h"
#import "NTPBAppSessionResign.h"
#import "NTPBAppSessionResume.h"
#import "NTPBAppSessionStart.h"
#import "NTPBAppSessionStartWatch.h"
#import "NTPBAppleIdSignInResult.h"
#import "NTPBArticleEngagement.h"
#import "NTPBArticleFeedback.h"
#import "NTPBArticleHostViewExposure.h"
#import "NTPBArticleLikeDislike.h"
#import "NTPBArticleScroll.h"
#import "NTPBArticleScrollNotw.h"
#import "NTPBArticleSessionResign.h"
#import "NTPBArticleSessionResume.h"
#import "NTPBArticleViewNotw.h"
#import "NTPBArticleViewWatch.h"
#import "NTPBAudioEngage.h"
#import "NTPBAudioEngagementCompleted.h"
#import "NTPBBackgroundSubscriptionValidation.h"
#import "NTPBBundleIdMappingMiss.h"
#import "NTPBBundleSubscriberInfo.h"
#import "NTPBChannelMuteUnmute.h"
#import "NTPBComscoreEventSend.h"
#import "NTPBCoverArticleWidgetExposure.h"
#import "NTPBCoverArticleWidgetView.h"
#import "NTPBDiscoverMoreInterstitialExposure.h"
#import "NTPBEmailOptInInvite.h"
#import "NTPBEndOfArticleExposure.h"
#import "NTPBExternalAnalyticsEventSend.h"
#import "NTPBFeedCellExposure.h"
#import "NTPBFeedCellHostViewExposure.h"
#import "NTPBFeedEngagementMenuExposure.h"
#import "NTPBFeedLoad.h"
#import "NTPBFeedSubscribeUnsubscribe.h"
#import "NTPBFeedViewExposure.h"
#import "NTPBGroupViewExposure.h"
#import "NTPBInAppWebEmbedExposure.h"
#import "NTPBIssueDownload.h"
#import "NTPBIssueExposure.h"
#import "NTPBIssueTocView.h"
#import "NTPBLinkTap.h"
#import "NTPBLinkTapArticle.h"
#import "NTPBLocalNotificationReceived.h"
#import "NTPBLocalNotificationReturn.h"
#import "NTPBMediaEngage.h"
#import "NTPBMediaEngageComplete.h"
#import "NTPBMediaExposure.h"
#import "NTPBMediaView.h"
#import "NTPBNoUserAction.h"
#import "NTPBNotificationSettingsScreenView.h"
#import "NTPBNotificationSubscribeUnsubscribe.h"
#import "NTPBOptInButtonExposure.h"
#import "NTPBPaidSubscriptionConversionPointExposure.h"
#import "NTPBPaidSubscriptionResult.h"
#import "NTPBPaidSubscriptionSheetIapFail.h"
#import "NTPBPaidSubscriptionSheetView.h"
#import "NTPBPaywallButtonTap.h"
#import "NTPBPDFPageView.h"
#import "NTPBPullToRefresh.h"
#import "NTPBPurchaseOffersItem.h"
#import "NTPBReadingListAddRemove.h"
#import "NTPBReadingListShow.h"
#import "NTPBRecommendationBrickExposure.h"
#import "NTPBReportConcernSubmission.h"
#import "NTPBRestorePaidSubscription.h"
#import "NTPBSearchBegin.h"
#import "NTPBSearchExecute.h"
#import "NTPBSearchResultSelect.h"
#import "NTPBSearchViewExposure.h"
#import "NTPBShareInformationScreenView.h"
#import "NTPBShareResult.h"
#import "NTPBShareSheetExposure.h"
#import "NTPBShareSheetIapFail.h"
#import "NTPBSubscriptionDetectionScreenView.h"
#import "NTPBSuggestionsFeedback.h"
#import "NTPBTocCardDrag.h"
#import "NTPBTocCellExposure.h"
#import "NTPBTocExposure.h"
#import "NTPBTocHandleTap.h"
#import "NTPBTocReorder.h"
#import "NTPBTocToggleTap.h"
#import "NTPBTodayWidgetExposure.h"
#import "NTPBTodayWidgetHeadlineExposure.h"
#import "NTPBTodayWidgetSession.h"
#import "NTPBTopOfFeedModuleExposure.h"
#import "NTPBUrlMappingMiss.h"
#import "NTPBUserIgnoreFavoritesSuggestion.h"
#import "NTPBUserOnboardingBegin.h"
#import "NTPBUserOnboardingChannelPickerComplete.h"
#import "NTPBUserOnboardingResult.h"
#import "NTPBUserOnboardingResume.h"
#import "NTPBUserOnboardingScreenView.h"
#import "NTPBWebAccessScreenView.h"
#import "NTPBWidgetEngagement.h"

@interface NTPBEventObject : PBCodable <NSCopying>



@property (retain, nonatomic) NTPBAdCtaEngagement *adCtaEngagement; // ivar: _adCtaEngagement
@property (retain, nonatomic) NTPBAdEngagement *adEngagement; // ivar: _adEngagement
@property (retain, nonatomic) NTPBAdExposureIneligible *adExposureIneligible; // ivar: _adExposureIneligible
@property (retain, nonatomic) NTPBAdExposureOpportunity *adExposureOpportunity; // ivar: _adExposureOpportunity
@property (retain, nonatomic) NTPBAdImpression *adImpression; // ivar: _adImpression
@property (retain, nonatomic) NTPBAlreadySubscriberSignIn *alreadySubscriberSignIn; // ivar: _alreadySubscriberSignIn
@property (retain, nonatomic) NTPBAnfComponentExposure *anfComponentExposure; // ivar: _anfComponentExposure
@property (retain, nonatomic) NTPBAppSessionEnd *appSessionEnd; // ivar: _appSessionEnd
@property (retain, nonatomic) NTPBAppSessionEndWatch *appSessionEndWatch; // ivar: _appSessionEndWatch
@property (retain, nonatomic) NTPBAppSessionResign *appSessionResign; // ivar: _appSessionResign
@property (retain, nonatomic) NTPBAppSessionResume *appSessionResume; // ivar: _appSessionResume
@property (retain, nonatomic) NTPBAppSessionStart *appSessionStart; // ivar: _appSessionStart
@property (retain, nonatomic) NTPBAppSessionStartWatch *appSessionStartWatch; // ivar: _appSessionStartWatch
@property (retain, nonatomic) NTPBAppleIdSignInResult *appleidSignInResult; // ivar: _appleidSignInResult
@property (retain, nonatomic) NTPBArticleEngagement *articleEngagement; // ivar: _articleEngagement
@property (retain, nonatomic) NTPBArticleFeedback *articleFeedback; // ivar: _articleFeedback
@property (retain, nonatomic) NTPBArticleHostViewExposure *articleHostViewExposure; // ivar: _articleHostViewExposure
@property (retain, nonatomic) NTPBArticleLikeDislike *articleLikeDislike; // ivar: _articleLikeDislike
@property (retain, nonatomic) NTPBArticleScroll *articleScroll; // ivar: _articleScroll
@property (retain, nonatomic) NTPBArticleScrollNotw *articleScrollNotw; // ivar: _articleScrollNotw
@property (retain, nonatomic) NTPBArticleSessionResign *articleSessionResign; // ivar: _articleSessionResign
@property (retain, nonatomic) NTPBArticleSessionResume *articleSessionResume; // ivar: _articleSessionResume
@property (retain, nonatomic) NTPBArticleViewNotw *articleViewNotw; // ivar: _articleViewNotw
@property (retain, nonatomic) NTPBArticleViewWatch *articleViewWatch; // ivar: _articleViewWatch
@property (retain, nonatomic) NTPBAudioEngage *audioEngage; // ivar: _audioEngage
@property (retain, nonatomic) NTPBAudioEngagementCompleted *audioEngagementCompleted; // ivar: _audioEngagementCompleted
@property (retain, nonatomic) NTPBBackgroundSubscriptionValidation *backgroundSubscriptionValidation; // ivar: _backgroundSubscriptionValidation
@property (retain, nonatomic) NTPBBundleIdMappingMiss *bundleIdMappingMiss; // ivar: _bundleIdMappingMiss
@property (retain, nonatomic) NTPBBundleSubscriberInfo *bundleSubscriberInfo; // ivar: _bundleSubscriberInfo
@property (retain, nonatomic) NTPBChannelMuteUnmute *channelMuteUnmute; // ivar: _channelMuteUnmute
@property (retain, nonatomic) NTPBComscoreEventSend *comscoreEventSend; // ivar: _comscoreEventSend
@property (retain, nonatomic) NTPBCoverArticleWidgetExposure *coverArticleWidgetExposure; // ivar: _coverArticleWidgetExposure
@property (retain, nonatomic) NTPBCoverArticleWidgetView *coverArticleWidgetView; // ivar: _coverArticleWidgetView
@property (retain, nonatomic) NTPBDiscoverMoreInterstitialExposure *discoverMoreInterstitialExposure; // ivar: _discoverMoreInterstitialExposure
@property (retain, nonatomic) NTPBEmailOptInInvite *emailOptInInvite; // ivar: _emailOptInInvite
@property (retain, nonatomic) NTPBEndOfArticleExposure *endOfArticleExposure; // ivar: _endOfArticleExposure
@property (retain, nonatomic) NTPBExternalAnalyticsEventSend *externalAnalyticsEventSend; // ivar: _externalAnalyticsEventSend
@property (retain, nonatomic) NTPBFeedCellExposure *feedCellExposure; // ivar: _feedCellExposure
@property (retain, nonatomic) NTPBFeedCellHostViewExposure *feedCellHostViewExposure; // ivar: _feedCellHostViewExposure
@property (retain, nonatomic) NTPBFeedEngagementMenuExposure *feedEngagementMenuExposure; // ivar: _feedEngagementMenuExposure
@property (retain, nonatomic) NTPBFeedLoad *feedLoad; // ivar: _feedLoad
@property (retain, nonatomic) NTPBFeedSubscribeUnsubscribe *feedSubscribeUnsubscribe; // ivar: _feedSubscribeUnsubscribe
@property (retain, nonatomic) NTPBFeedViewExposure *feedViewExposure; // ivar: _feedViewExposure
@property (retain, nonatomic) NTPBGroupViewExposure *groupViewExposure; // ivar: _groupViewExposure
@property (readonly, nonatomic) BOOL hasAdCtaEngagement;
@property (readonly, nonatomic) BOOL hasAdEngagement;
@property (readonly, nonatomic) BOOL hasAdExposureIneligible;
@property (readonly, nonatomic) BOOL hasAdExposureOpportunity;
@property (readonly, nonatomic) BOOL hasAdImpression;
@property (readonly, nonatomic) BOOL hasAlreadySubscriberSignIn;
@property (readonly, nonatomic) BOOL hasAnfComponentExposure;
@property (readonly, nonatomic) BOOL hasAppSessionEnd;
@property (readonly, nonatomic) BOOL hasAppSessionEndWatch;
@property (readonly, nonatomic) BOOL hasAppSessionResign;
@property (readonly, nonatomic) BOOL hasAppSessionResume;
@property (readonly, nonatomic) BOOL hasAppSessionStart;
@property (readonly, nonatomic) BOOL hasAppSessionStartWatch;
@property (readonly, nonatomic) BOOL hasAppleidSignInResult;
@property (readonly, nonatomic) BOOL hasArticleEngagement;
@property (readonly, nonatomic) BOOL hasArticleFeedback;
@property (readonly, nonatomic) BOOL hasArticleHostViewExposure;
@property (readonly, nonatomic) BOOL hasArticleLikeDislike;
@property (readonly, nonatomic) BOOL hasArticleScroll;
@property (readonly, nonatomic) BOOL hasArticleScrollNotw;
@property (readonly, nonatomic) BOOL hasArticleSessionResign;
@property (readonly, nonatomic) BOOL hasArticleSessionResume;
@property (readonly, nonatomic) BOOL hasArticleViewNotw;
@property (readonly, nonatomic) BOOL hasArticleViewWatch;
@property (readonly, nonatomic) BOOL hasAudioEngage;
@property (readonly, nonatomic) BOOL hasAudioEngagementCompleted;
@property (readonly, nonatomic) BOOL hasBackgroundSubscriptionValidation;
@property (readonly, nonatomic) BOOL hasBundleIdMappingMiss;
@property (readonly, nonatomic) BOOL hasBundleSubscriberInfo;
@property (readonly, nonatomic) BOOL hasChannelMuteUnmute;
@property (readonly, nonatomic) BOOL hasComscoreEventSend;
@property (readonly, nonatomic) BOOL hasCoverArticleWidgetExposure;
@property (readonly, nonatomic) BOOL hasCoverArticleWidgetView;
@property (readonly, nonatomic) BOOL hasDiscoverMoreInterstitialExposure;
@property (readonly, nonatomic) BOOL hasEmailOptInInvite;
@property (readonly, nonatomic) BOOL hasEndOfArticleExposure;
@property (readonly, nonatomic) BOOL hasExternalAnalyticsEventSend;
@property (readonly, nonatomic) BOOL hasFeedCellExposure;
@property (readonly, nonatomic) BOOL hasFeedCellHostViewExposure;
@property (readonly, nonatomic) BOOL hasFeedEngagementMenuExposure;
@property (readonly, nonatomic) BOOL hasFeedLoad;
@property (readonly, nonatomic) BOOL hasFeedSubscribeUnsubscribe;
@property (readonly, nonatomic) BOOL hasFeedViewExposure;
@property (readonly, nonatomic) BOOL hasGroupViewExposure;
@property (readonly, nonatomic) BOOL hasInAppWebEmbedExposure;
@property (readonly, nonatomic) BOOL hasIssueDownload;
@property (readonly, nonatomic) BOOL hasIssueExposure;
@property (readonly, nonatomic) BOOL hasIssueTocView;
@property (readonly, nonatomic) BOOL hasLinkTap;
@property (readonly, nonatomic) BOOL hasLinkTapArticle;
@property (readonly, nonatomic) BOOL hasLocalNotificationReceived;
@property (readonly, nonatomic) BOOL hasLocalNotificationReturn;
@property (readonly, nonatomic) BOOL hasMediaEngage;
@property (readonly, nonatomic) BOOL hasMediaEngageComplete;
@property (readonly, nonatomic) BOOL hasMediaExposure;
@property (readonly, nonatomic) BOOL hasMediaView;
@property (readonly, nonatomic) BOOL hasNoUserAction;
@property (readonly, nonatomic) BOOL hasNotificationSettingsScreenView;
@property (readonly, nonatomic) BOOL hasNotificationSubscribeUnsubscribe;
@property (readonly, nonatomic) BOOL hasOptInButtonExposure;
@property (readonly, nonatomic) BOOL hasPaidSubscriptionConversionPointExposure;
@property (readonly, nonatomic) BOOL hasPaidSubscriptionResult;
@property (readonly, nonatomic) BOOL hasPaidSubscriptionSheetIapFail;
@property (readonly, nonatomic) BOOL hasPaidSubscriptionSheetView;
@property (readonly, nonatomic) BOOL hasPaywallButtonTap;
@property (readonly, nonatomic) BOOL hasPdfPageView;
@property (readonly, nonatomic) BOOL hasPullToRefresh;
@property (readonly, nonatomic) BOOL hasPurchaseOffersItem;
@property (readonly, nonatomic) BOOL hasReadingListAddRemove;
@property (readonly, nonatomic) BOOL hasReadingListShow;
@property (readonly, nonatomic) BOOL hasRecommendationBrickExposure;
@property (readonly, nonatomic) BOOL hasReportConcernSubmission;
@property (readonly, nonatomic) BOOL hasRestorePaidSubscription;
@property (readonly, nonatomic) BOOL hasSearchBegin;
@property (readonly, nonatomic) BOOL hasSearchExecute;
@property (readonly, nonatomic) BOOL hasSearchResultSelect;
@property (readonly, nonatomic) BOOL hasSearchViewExposure;
@property (readonly, nonatomic) BOOL hasShareInformationScreenView;
@property (readonly, nonatomic) BOOL hasShareResult;
@property (readonly, nonatomic) BOOL hasShareSheetExposure;
@property (readonly, nonatomic) BOOL hasShareSheetIapFail;
@property (readonly, nonatomic) BOOL hasSubscriptionDetectionScreenView;
@property (readonly, nonatomic) BOOL hasSuggestionsFeedback;
@property (readonly, nonatomic) BOOL hasTocCardDrag;
@property (readonly, nonatomic) BOOL hasTocCellExposure;
@property (readonly, nonatomic) BOOL hasTocExposure;
@property (readonly, nonatomic) BOOL hasTocHandleTap;
@property (readonly, nonatomic) BOOL hasTocReorder;
@property (readonly, nonatomic) BOOL hasTocToggleTap;
@property (readonly, nonatomic) BOOL hasTodayWidgetExposure;
@property (readonly, nonatomic) BOOL hasTodayWidgetHeadlineExposure;
@property (readonly, nonatomic) BOOL hasTodayWidgetSession;
@property (readonly, nonatomic) BOOL hasTopOfFeedModuleExposure;
@property (readonly, nonatomic) BOOL hasUrlMappingMiss;
@property (readonly, nonatomic) BOOL hasUserIgnoreFavoritesSuggestion;
@property (readonly, nonatomic) BOOL hasUserOnboardingBegin;
@property (readonly, nonatomic) BOOL hasUserOnboardingChannelPickerComplete;
@property (readonly, nonatomic) BOOL hasUserOnboardingResult;
@property (readonly, nonatomic) BOOL hasUserOnboardingResume;
@property (readonly, nonatomic) BOOL hasUserOnboardingScreenView;
@property (readonly, nonatomic) BOOL hasWebAccessScreenView;
@property (readonly, nonatomic) BOOL hasWidgetEngagement;
@property (retain, nonatomic) NTPBInAppWebEmbedExposure *inAppWebEmbedExposure; // ivar: _inAppWebEmbedExposure
@property (retain, nonatomic) NTPBIssueDownload *issueDownload; // ivar: _issueDownload
@property (retain, nonatomic) NTPBIssueExposure *issueExposure; // ivar: _issueExposure
@property (retain, nonatomic) NTPBIssueTocView *issueTocView; // ivar: _issueTocView
@property (retain, nonatomic) NTPBLinkTap *linkTap; // ivar: _linkTap
@property (retain, nonatomic) NTPBLinkTapArticle *linkTapArticle; // ivar: _linkTapArticle
@property (retain, nonatomic) NTPBLocalNotificationReceived *localNotificationReceived; // ivar: _localNotificationReceived
@property (retain, nonatomic) NTPBLocalNotificationReturn *localNotificationReturn; // ivar: _localNotificationReturn
@property (retain, nonatomic) NTPBMediaEngage *mediaEngage; // ivar: _mediaEngage
@property (retain, nonatomic) NTPBMediaEngageComplete *mediaEngageComplete; // ivar: _mediaEngageComplete
@property (retain, nonatomic) NTPBMediaExposure *mediaExposure; // ivar: _mediaExposure
@property (retain, nonatomic) NTPBMediaView *mediaView; // ivar: _mediaView
@property (retain, nonatomic) NTPBNoUserAction *noUserAction; // ivar: _noUserAction
@property (retain, nonatomic) NTPBNotificationSettingsScreenView *notificationSettingsScreenView; // ivar: _notificationSettingsScreenView
@property (retain, nonatomic) NTPBNotificationSubscribeUnsubscribe *notificationSubscribeUnsubscribe; // ivar: _notificationSubscribeUnsubscribe
@property (retain, nonatomic) NTPBOptInButtonExposure *optInButtonExposure; // ivar: _optInButtonExposure
@property (retain, nonatomic) NTPBPaidSubscriptionConversionPointExposure *paidSubscriptionConversionPointExposure; // ivar: _paidSubscriptionConversionPointExposure
@property (retain, nonatomic) NTPBPaidSubscriptionResult *paidSubscriptionResult; // ivar: _paidSubscriptionResult
@property (retain, nonatomic) NTPBPaidSubscriptionSheetIapFail *paidSubscriptionSheetIapFail; // ivar: _paidSubscriptionSheetIapFail
@property (retain, nonatomic) NTPBPaidSubscriptionSheetView *paidSubscriptionSheetView; // ivar: _paidSubscriptionSheetView
@property (retain, nonatomic) NTPBPaywallButtonTap *paywallButtonTap; // ivar: _paywallButtonTap
@property (retain, nonatomic) NTPBPDFPageView *pdfPageView; // ivar: _pdfPageView
@property (retain, nonatomic) NTPBPullToRefresh *pullToRefresh; // ivar: _pullToRefresh
@property (retain, nonatomic) NTPBPurchaseOffersItem *purchaseOffersItem; // ivar: _purchaseOffersItem
@property (retain, nonatomic) NTPBReadingListAddRemove *readingListAddRemove; // ivar: _readingListAddRemove
@property (retain, nonatomic) NTPBReadingListShow *readingListShow; // ivar: _readingListShow
@property (retain, nonatomic) NTPBRecommendationBrickExposure *recommendationBrickExposure; // ivar: _recommendationBrickExposure
@property (retain, nonatomic) NTPBReportConcernSubmission *reportConcernSubmission; // ivar: _reportConcernSubmission
@property (retain, nonatomic) NTPBRestorePaidSubscription *restorePaidSubscription; // ivar: _restorePaidSubscription
@property (retain, nonatomic) NTPBSearchBegin *searchBegin; // ivar: _searchBegin
@property (retain, nonatomic) NTPBSearchExecute *searchExecute; // ivar: _searchExecute
@property (retain, nonatomic) NTPBSearchResultSelect *searchResultSelect; // ivar: _searchResultSelect
@property (retain, nonatomic) NTPBSearchViewExposure *searchViewExposure; // ivar: _searchViewExposure
@property (retain, nonatomic) NTPBShareInformationScreenView *shareInformationScreenView; // ivar: _shareInformationScreenView
@property (retain, nonatomic) NTPBShareResult *shareResult; // ivar: _shareResult
@property (retain, nonatomic) NTPBShareSheetExposure *shareSheetExposure; // ivar: _shareSheetExposure
@property (retain, nonatomic) NTPBShareSheetIapFail *shareSheetIapFail; // ivar: _shareSheetIapFail
@property (retain, nonatomic) NTPBSubscriptionDetectionScreenView *subscriptionDetectionScreenView; // ivar: _subscriptionDetectionScreenView
@property (retain, nonatomic) NTPBSuggestionsFeedback *suggestionsFeedback; // ivar: _suggestionsFeedback
@property (retain, nonatomic) NTPBTocCardDrag *tocCardDrag; // ivar: _tocCardDrag
@property (retain, nonatomic) NTPBTocCellExposure *tocCellExposure; // ivar: _tocCellExposure
@property (retain, nonatomic) NTPBTocExposure *tocExposure; // ivar: _tocExposure
@property (retain, nonatomic) NTPBTocHandleTap *tocHandleTap; // ivar: _tocHandleTap
@property (retain, nonatomic) NTPBTocReorder *tocReorder; // ivar: _tocReorder
@property (retain, nonatomic) NTPBTocToggleTap *tocToggleTap; // ivar: _tocToggleTap
@property (retain, nonatomic) NTPBTodayWidgetExposure *todayWidgetExposure; // ivar: _todayWidgetExposure
@property (retain, nonatomic) NTPBTodayWidgetHeadlineExposure *todayWidgetHeadlineExposure; // ivar: _todayWidgetHeadlineExposure
@property (retain, nonatomic) NTPBTodayWidgetSession *todayWidgetSession; // ivar: _todayWidgetSession
@property (retain, nonatomic) NTPBTopOfFeedModuleExposure *topOfFeedModuleExposure; // ivar: _topOfFeedModuleExposure
@property (retain, nonatomic) NTPBUrlMappingMiss *urlMappingMiss; // ivar: _urlMappingMiss
@property (retain, nonatomic) NTPBUserIgnoreFavoritesSuggestion *userIgnoreFavoritesSuggestion; // ivar: _userIgnoreFavoritesSuggestion
@property (retain, nonatomic) NTPBUserOnboardingBegin *userOnboardingBegin; // ivar: _userOnboardingBegin
@property (retain, nonatomic) NTPBUserOnboardingChannelPickerComplete *userOnboardingChannelPickerComplete; // ivar: _userOnboardingChannelPickerComplete
@property (retain, nonatomic) NTPBUserOnboardingResult *userOnboardingResult; // ivar: _userOnboardingResult
@property (retain, nonatomic) NTPBUserOnboardingResume *userOnboardingResume; // ivar: _userOnboardingResume
@property (retain, nonatomic) NTPBUserOnboardingScreenView *userOnboardingScreenView; // ivar: _userOnboardingScreenView
@property (retain, nonatomic) NTPBWebAccessScreenView *webAccessScreenView; // ivar: _webAccessScreenView
@property (retain, nonatomic) NTPBWidgetEngagement *widgetEngagement; // ivar: _widgetEngagement


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif