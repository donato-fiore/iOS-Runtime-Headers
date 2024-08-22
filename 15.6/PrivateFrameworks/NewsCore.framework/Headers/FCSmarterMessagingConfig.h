// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCSMARTERMESSAGINGCONFIG_H
#define FCSMARTERMESSAGINGCONFIG_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface FCSmarterMessagingConfig : NSObject

@property (readonly, copy, nonatomic) NSDictionary *engagementUpsellConfig; // ivar: _engagementUpsellConfig
@property (readonly, nonatomic) NSInteger highChurnPropensitySegmentSetId; // ivar: _highChurnPropensitySegmentSetId
@property (readonly, nonatomic) NSInteger lowChurnPropensitySegmentSetId; // ivar: _lowChurnPropensitySegmentSetId
@property (readonly, nonatomic) NSInteger maxEnableNotificationBubbleTipPresentations; // ivar: _maxEnableNotificationBubbleTipPresentations
@property (readonly, nonatomic) NSInteger mediumChurnPropensitySegmentSetId; // ivar: _mediumChurnPropensitySegmentSetId
@property (readonly, nonatomic) NSInteger notificationBubbleTipPresentationsQuiescenceInterval; // ivar: _notificationBubbleTipPresentationsQuiescenceInterval
@property (readonly, copy, nonatomic) NSArray *placementsBlocklist; // ivar: _placementsBlocklist
@property (readonly, copy, nonatomic) NSArray *segmentSetIdsAllowlist; // ivar: _segmentSetIdsAllowlist
@property (readonly, nonatomic) BOOL todayFeedMastheadBannerEnabledForSubscribers; // ivar: _todayFeedMastheadBannerEnabledForSubscribers


-(id)initWithDictionary:(id)arg0 ;


@end


#endif