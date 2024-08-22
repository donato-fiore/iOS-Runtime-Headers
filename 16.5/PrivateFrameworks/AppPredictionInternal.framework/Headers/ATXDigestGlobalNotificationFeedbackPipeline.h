// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXDIGESTGLOBALNOTIFICATIONFEEDBACKPIPELINE_H
#define ATXDIGESTGLOBALNOTIFICATIONFEEDBACKPIPELINE_H

@class NSString;
@protocol ATXNotificationDigestFeedbackProtocol, ATXNotificationQuantityProviderProtocol;

#import <Foundation/Foundation.h>

#import "ATXNotificationDigestRankingConstants.h"

@interface ATXDigestGlobalNotificationFeedbackPipeline : NSObject {
    id<ATXNotificationDigestFeedbackProtocol> *_feedbackStore;
    id<ATXNotificationQuantityProviderProtocol> *_notificationQuantityProvider;
    NSString *_lastRunTimestampUserDefaultsKey;
    ATXNotificationDigestRankingConstants *_c;
}




-(id)init;
-(id)initWithFeedbackStore:(id)arg0 notificationQuantityProvider:(id)arg1 lastRunTimestampKey:(id)arg2 constants:(id)arg3 ;
-(void)logGlobalNotificationStatisticsToDigestFeedbackWithXPCActivity:(id)arg0 ;


@end


#endif