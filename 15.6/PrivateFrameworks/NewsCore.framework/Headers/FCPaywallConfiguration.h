// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCPAYWALLCONFIGURATION_H
#define FCPAYWALLCONFIGURATION_H

@class NSString, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "FCPaywallTopOffsetConfiguration.h"
#import "FCSubscriptionButtonConfiguration.h"
#import "FCPaywallVisualSpecConfiguration.h"

@interface FCPaywallConfiguration : NSObject <NSCopying>



@property (copy, nonatomic) NSString *descriptionNonTrial; // ivar: _descriptionNonTrial
@property (copy, nonatomic) NSString *descriptionTrial; // ivar: _descriptionTrial
@property (readonly, nonatomic) BOOL externalOverridesEnabled; // ivar: _externalOverridesEnabled
@property (copy, nonatomic) NSString *learnMoreTitle; // ivar: _learnMoreTitle
@property (copy, nonatomic) NSURL *learnMoreURL; // ivar: _learnMoreURL
@property (nonatomic) NSUInteger offersLinkTargetType; // ivar: _offersLinkTargetType
@property (copy, nonatomic) NSString *offersLinkTitle; // ivar: _offersLinkTitle
@property (copy, nonatomic) NSURL *offersLinkURL; // ivar: _offersLinkURL
@property (readonly, nonatomic) FCPaywallTopOffsetConfiguration *paywallTopOffsetConfig; // ivar: _paywallTopOffsetConfig
@property (nonatomic) NSUInteger paywallType; // ivar: _paywallType
@property (retain, nonatomic) FCSubscriptionButtonConfiguration *subscriptionButtonConfig; // ivar: _subscriptionButtonConfig
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) FCPaywallVisualSpecConfiguration *visualSpecConfig; // ivar: _visualSpecConfig


+(id)defaultArticleHardPaywallWithLandingPageArticleID:(id)arg0 ;
+(id)defaultArticleSharedHardPaywallWithLandingPageArticleID:(id)arg0 ;
+(id)defaultArticleSharedSoftPaywallWithLandingPageArticleID:(id)arg0 ;
+(id)defaultArticleSoftPaywallWithLandingPageArticleID:(id)arg0 ;
+(id)defaultAudioArticleHardPaywallWithLandingPageArticleID:(id)arg0 ;
+(id)defaultAudioArticleSharedHardPaywallWithLandingPageArticleID:(id)arg0 ;
+(id)defaultAudioArticleSharedSoftPaywallWithLandingPageArticleID:(id)arg0 ;
+(id)defaultAudioArticleSoftPaywallWithLandingPageArticleID:(id)arg0 ;
+(id)defaultAudioFeedSoftPaywallLargePaywallWithLandingPageArticleID:(id)arg0 ;
+(id)defaultAudioFeedSoftPaywallSmallPaywallWithLandingPageArticleID:(id)arg0 ;
+(id)defaultAudioPaywallDescription;
+(id)defaultAudioPaywallTitle;
+(id)defaultChannelSoftPaywallWithLandingPageArticleID:(id)arg0 ;
+(id)defaultDeferredPaywallTopOffsetConfiguration;
+(id)defaultMagazineFeedSoftPaywallLargePaywallWithLandingPageArticleID:(id)arg0 ;
+(id)defaultMagazineFeedSoftPaywallMediumPaywallWithLandingPageArticleID:(id)arg0 ;
+(id)defaultMagazineFeedSoftPaywallSmallPaywallWithLandingPageArticleID:(id)arg0 ;
+(id)defaultMagazineFeedVideoSoftPaywallLargePaywallWithLandingPageArticleID:(id)arg0 ;
+(id)defaultMagazineFeedVideoSoftPaywallSmallPaywallWithLandingPageArticleID:(id)arg0 ;
+(id)defaultPDFHardPaywallWithLandingPageArticleID:(id)arg0 ;
+(id)defaultPaywallDescription;
+(id)defaultPaywallTitle;
+(id)defaultPaywallTopOffsetConfiguration;
+(id)defaultSmallPaywallTitle;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithPaywallType:(NSUInteger)arg0 title:(id)arg1 descriptionTrial:(id)arg2 descriptionNonTrial:(id)arg3 learnMoreTitle:(id)arg4 learnMoreURL:(id)arg5 offersLinkTitle:(id)arg6 offersLinkURL:(id)arg7 offersLinkTargetType:(NSUInteger)arg8 externalOverridesEnabled:(BOOL)arg9 subscriptionButtonConfig:(id)arg10 visualSpecConfig:(id)arg11 paywallTopOffsetConfig:(id)arg12 ;


@end


#endif