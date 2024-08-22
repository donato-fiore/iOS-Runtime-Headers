// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTCATCHUPOPERATIONFORYOUREQUEST_H
#define NTCATCHUPOPERATIONFORYOUREQUEST_H

@class NSSet, NSString;
@protocol NSCopying, FCBundleSubscriptionProviderType;

#import <Foundation/Foundation.h>


@interface NTCatchUpOperationForYouRequest : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSObject<FCBundleSubscriptionProviderType> *bundleSubscriptionProvider; // ivar: _bundleSubscriptionProvider
@property (readonly, nonatomic) NSInteger cutoffTime; // ivar: _cutoffTime
@property (readonly, nonatomic) NSInteger fetchingBin; // ivar: _fetchingBin
@property (readonly, nonatomic) NSUInteger headlinesPerFeedFetchCount; // ivar: _headlinesPerFeedFetchCount
@property (readonly, copy, nonatomic) NSSet *hiddenFeedIDs; // ivar: _hiddenFeedIDs
@property (readonly, nonatomic) CGFloat minimumUpdateInterval; // ivar: _minimumUpdateInterval
@property (readonly, copy, nonatomic) NSSet *mutedTagIDs; // ivar: _mutedTagIDs
@property (readonly, copy, nonatomic) NSString *paidBundleFeedID; // ivar: _paidBundleFeedID
@property (readonly, copy, nonatomic) NSSet *purchasedTagIDs; // ivar: _purchasedTagIDs
@property (readonly, copy, nonatomic) NSSet *subscribedTagIDs; // ivar: _subscribedTagIDs
@property (readonly, copy, nonatomic) NSString *throttlingIdentifier; // ivar: _throttlingIdentifier
@property (readonly, copy, nonatomic) NSString *topStoriesChannelID; // ivar: _topStoriesChannelID


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithForYouTodaySectionSpecificConfig:(id)arg0 appConfiguration:(id)arg1 topStoriesChannelID:(id)arg2 hiddenFeedIDs:(id)arg3 paidBundleFeedID:(id)arg4 mutedTagIDs:(id)arg5 purchasedTagIDs:(id)arg6 subscribedTagIDs:(id)arg7 bundleSubscriptionProvider:(id)arg8 throttlingIdentifier:(id)arg9 ;


@end


#endif