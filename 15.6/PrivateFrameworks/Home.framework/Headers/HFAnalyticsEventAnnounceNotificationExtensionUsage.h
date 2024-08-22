// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFANALYTICSEVENTANNOUNCENOTIFICATIONEXTENSIONUSAGE_H
#define HFANALYTICSEVENTANNOUNCENOTIFICATIONEXTENSIONUSAGE_H

@class NSNumber;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsEventAnnounceNotificationExtensionUsage : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *notificationUsageDuration; // ivar: _notificationUsageDuration


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif