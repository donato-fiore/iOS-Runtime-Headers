// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCPAIDBUNDLEVIAOFFERCONFIG_H
#define FCPAIDBUNDLEVIAOFFERCONFIG_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface FCPaidBundleViaOfferConfig : NSObject

@property (readonly, nonatomic) BOOL appLaunchUpsellEnabled; // ivar: _appLaunchUpsellEnabled
@property (readonly, nonatomic) BOOL iconBadgeEnabled; // ivar: _iconBadgeEnabled
@property (nonatomic) NSInteger iconBadgeMaxNumberOfPresentations; // ivar: _iconBadgeMaxNumberOfPresentations
@property (readonly, nonatomic) BOOL iconBadgeMercuryEnabled; // ivar: _iconBadgeMercuryEnabled
@property (nonatomic) NSInteger iconBadgeQuiescenceInterval; // ivar: _iconBadgeQuiescenceInterval
@property (copy, nonatomic) NSString *localNotificationBody; // ivar: _localNotificationBody
@property (nonatomic) NSInteger localNotificationDelay; // ivar: _localNotificationDelay
@property (readonly, nonatomic) BOOL localNotificationEnabled; // ivar: _localNotificationEnabled
@property (nonatomic) NSInteger localNotificationMaxNumberOfPresentations; // ivar: _localNotificationMaxNumberOfPresentations
@property (nonatomic) NSInteger localNotificationQuiescenceInterval; // ivar: _localNotificationQuiescenceInterval
@property (copy, nonatomic) NSString *localNotificationSubtitle; // ivar: _localNotificationSubtitle
@property (copy, nonatomic) NSString *localNotificationTitle; // ivar: _localNotificationTitle
@property (copy, nonatomic) NSString *localNotificationURL; // ivar: _localNotificationURL
@property (readonly, nonatomic) BOOL mastheadBannerEnabled; // ivar: _mastheadBannerEnabled
@property (readonly, nonatomic) BOOL paywallsEnabled; // ivar: _paywallsEnabled
@property (readonly, nonatomic) BOOL subscriptionsDeeplinkEnabled; // ivar: _subscriptionsDeeplinkEnabled
@property (readonly, nonatomic) NSInteger upsellBestOfferRefreshQuiescenceInterval; // ivar: _upsellBestOfferRefreshQuiescenceInterval
@property (readonly, nonatomic) BOOL upsellEnabled; // ivar: _upsellEnabled
@property (nonatomic) NSInteger upsellMaxNumberOfPresentations; // ivar: _upsellMaxNumberOfPresentations
@property (nonatomic) NSInteger upsellQuiescenceInterval; // ivar: _upsellQuiescenceInterval
@property (retain, nonatomic) NSArray *vendorAdHocOfferIds; // ivar: _vendorAdHocOfferIds


-(id)initWithConfigDictionary:(id)arg0 ;


@end


#endif