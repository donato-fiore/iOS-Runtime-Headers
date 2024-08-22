// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSANALYTICSREFERRAL_H
#define TSANALYTICSREFERRAL_H

@class NSString, NTPBWidgetEngagement;

#import <Foundation/Foundation.h>


@interface TSAnalyticsReferral : NSObject {
    ? userActivityType;
    ? creativeID;
    ? campaignID;
    ? campaignType;
    ? referringApplication;
    ? referringURL;
    ? widgetModeGroupID;
}


@property (nonatomic, readonly) BOOL appOpenedByUserActivity; // ivar: appOpenedByUserActivity
@property (nonatomic, readonly) int appSessionStartMethod; // ivar: appSessionStartMethod
@property (nonatomic, readonly) int appSessionStartNotificationType; // ivar: appSessionStartNotificationType
@property (nonatomic, readonly) NSString *campaignID;
@property (nonatomic, readonly) NSString *campaignType;
@property (nonatomic, readonly) NSString *creativeID;
@property (nonatomic, readonly) NSString *referringApplication;
@property (nonatomic, readonly) NSString *referringURL;
@property (nonatomic, readonly) NSString *userActivityType;
@property (nonatomic, readonly) NTPBWidgetEngagement *widgetEngagement; // ivar: widgetEngagement
@property (nonatomic, readonly) NSString *widgetModeGroupID;


-(id)init;
-(id)initWithUserActivityType:(id)arg0 creativeID:(id)arg1 campaignID:(id)arg2 campaignType:(id)arg3 referringApplication:(id)arg4 referringURL:(id)arg5 widgetModeGroupID:(id)arg6 widgetEngagement:(id)arg7 appOpenedByUserActivity:(BOOL)arg8 appSessionStartMethod:(int)arg9 appSessionStartNotificationType:(int)arg10 ;


@end


#endif