// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSARTICLECONTEXT_H
#define TSARTICLECONTEXT_H

@class NSString, NSURL, NSDate;

#import <Foundation/Foundation.h>

#import "TSAnalyticsReferral.h"

@interface TSArticleContext : NSObject {
    ? url;
    ? title;
    ? sourceApplication;
    ? previousArticleID;
    ? previousArticleVersion;
    ? adPreviewSessionID;
    ? adPreviewID;
    ? adQToken;
    ? userActionDate;
    ? notificationID;
    ? notificationSenderChannelID;
}


@property (nonatomic, readonly) NSString *adPreviewID;
@property (nonatomic, readonly) NSString *adPreviewSessionID;
@property (nonatomic, readonly) NSString *adQToken;
@property (nonatomic, readonly) NSInteger maximumAdRequestsForCurrentAdPreviewID; // ivar: maximumAdRequestsForCurrentAdPreviewID
@property (nonatomic, readonly) NSString *notificationID;
@property (nonatomic, readonly) NSString *notificationSenderChannelID;
@property (nonatomic, readonly) NSInteger presentationReason; // ivar: presentationReason
@property (nonatomic, readonly) NSString *previousArticleID;
@property (nonatomic, readonly) NSString *previousArticleVersion;
@property (nonatomic, retain) TSAnalyticsReferral *referral; // ivar: referral
@property (nonatomic, readonly) BOOL shouldAutoPlayVideo; // ivar: shouldAutoPlayVideo
@property (nonatomic, readonly) NSString *sourceApplication;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSDate *userActionDate;


-(id)init;
-(id)initWithUrl:(id)arg0 title:(id)arg1 sourceApplication:(id)arg2 previousArticleID:(id)arg3 previousArticleVersion:(id)arg4 adPreviewSessionID:(id)arg5 adPreviewID:(id)arg6 adQToken:(id)arg7 maximumAdRequestsForCurrentAdPreviewID:(NSInteger)arg8 userActionDate:(id)arg9 presentationReason:(NSInteger)arg10 notificationID:(id)arg11 notificationSenderChannelID:(id)arg12 referral:(id)arg13 shouldAutoPlayVideo:(BOOL)arg14 ;


@end


#endif