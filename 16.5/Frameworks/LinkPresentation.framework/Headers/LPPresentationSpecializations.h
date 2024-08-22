// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPPRESENTATIONSPECIALIZATIONS_H
#define LPPRESENTATIONSPECIALIZATIONS_H


#import <Foundation/Foundation.h>


@interface LPPresentationSpecializations : NSObject



+(BOOL)isAppStoreStoryURL:(id)arg0 ;
+(BOOL)isAppleFitnessURL:(id)arg0 ;
+(BOOL)isAppleHealthURL:(id)arg0 ;
+(BOOL)isAppleMapsCollectionURL:(id)arg0 ;
+(BOOL)isAppleMapsURL:(id)arg0 ;
+(BOOL)isAppleNewsURL:(id)arg0 ;
+(BOOL)isApplePhotosSharedLibraryInvitationURL:(id)arg0 ;
+(BOOL)isAppleTVURL:(id)arg0 ;
+(BOOL)isArticle:(id)arg0 ;
+(BOOL)isArticleWithActivityPub:(id)arg0 ;
+(BOOL)isGoogleSearchURL:(id)arg0 ;
+(BOOL)isGoogleURL:(id)arg0 ;
+(BOOL)isInstagramURL:(id)arg0 ;
+(BOOL)isKnownBlankImageURL:(id)arg0 ;
+(BOOL)isMicroblogPost:(id)arg0 ;
+(BOOL)isMuninURL:(id)arg0 ;
+(BOOL)isRedditPostURL:(id)arg0 ;
+(BOOL)isRedditStaticImage:(id)arg0 ;
+(BOOL)isSinaWeiboURL:(id)arg0 ;
+(BOOL)isStockSymbolURL:(id)arg0 ;
+(BOOL)isStocksNewsURL:(id)arg0 ;
+(BOOL)isTikTokURL:(id)arg0 ;
+(BOOL)isTweetURL:(id)arg0 ;
+(BOOL)isTwitterProfileImageURL:(id)arg0 ;
+(BOOL)isTwitterShortenerURL:(id)arg0 ;
+(BOOL)isTwitterSummaryCardMetadata:(id)arg0 ;
+(BOOL)isTwitterSummaryLargeImageCardMetadata:(id)arg0 ;
+(BOOL)isYouTubeEmbedURL:(id)arg0 ;
+(BOOL)isYouTubeURL:(id)arg0 ;
+(BOOL)isYouTubeVideoURL:(id)arg0 ;
+(BOOL)isiCloudPhotoShareURL:(id)arg0 ;
+(BOOL)isiCloudSharingURL:(id)arg0 ;
+(BOOL)isiCloudURL:(id)arg0 ;
+(BOOL)isiTunesStoreOrAdjacentURL:(id)arg0 ;
+(BOOL)isiTunesStoreURLThatUsesWebMetadata:(id)arg0 ;
+(BOOL)shouldLoadInsteadOfUsingExistingWebViewForURL:(id)arg0 ;
+(id)URLToOpenForURL:(id)arg0 ;
+(id)articleTitleFromTitle:(id)arg0 withURL:(id)arg1 ;
+(id)businessChatURLToOpenForURL:(id)arg0 ;
+(id)canonicalMetadataURLForURL:(id)arg0 ;
+(id)destinationForGoogleRedirectURL:(id)arg0 ;
+(id)nonDirectURLForImgurURL:(id)arg0 ;
+(id)nonMobileRedditURLForRedditURL:(id)arg0 ;
+(id)nonMobileTweetURLForTweetURL:(id)arg0 ;
+(id)nonMobileYouTubeURLForURL:(id)arg0 ;
+(id)redditJSONURLForRedditPostURL:(id)arg0 ;
+(id)searchQueryForURL:(id)arg0 ;
+(id)userAgentForURL:(id)arg0 ;
+(id)youTubeVideoComponentsForEmbedURL:(id)arg0 ;
+(id)youTubeVideoComponentsForVideoURL:(id)arg0 ;
+(id)youTubeVideoURLForEmbedURL:(id)arg0 ;


@end


#endif