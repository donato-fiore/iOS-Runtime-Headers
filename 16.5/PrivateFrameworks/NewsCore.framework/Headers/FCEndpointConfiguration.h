// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCENDPOINTCONFIGURATION_H
#define FCENDPOINTCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCEndpointConfiguration : NSObject

@property (readonly, nonatomic) NSString *appAnalyticsAppHealthBaseURLString; // ivar: _appAnalyticsAppHealthBaseURLString
@property (readonly, nonatomic) NSString *appAnalyticsBaseURLString; // ivar: _appAnalyticsBaseURLString
@property (readonly, nonatomic) NSString *appAnalyticsNotificationReceiptBaseURLString; // ivar: _appAnalyticsNotificationReceiptBaseURLString
@property (readonly, nonatomic) NSString *appAnalyticsSportsEventsBaseURLString; // ivar: _appAnalyticsSportsEventsBaseURLString
@property (readonly, nonatomic) NSString *authTokenAPIBaseURLString; // ivar: _authTokenAPIBaseURLString
@property (readonly, nonatomic) NSString *ckMultiFetchBaseURLString; // ivar: _ckMultiFetchBaseURLString
@property (readonly, nonatomic) NSString *ckOrderFeedBaseURLString; // ivar: _ckOrderFeedBaseURLString
@property (readonly, nonatomic) NSString *ckRecordFetchBaseURLString; // ivar: _ckRecordFetchBaseURLString
@property (readonly, nonatomic) NSString *clientAPIBaseURLString; // ivar: _clientAPIBaseURLString
@property (readonly, nonatomic) NSString *fairPlayBaseURLString; // ivar: _fairPlayBaseURLString
@property (readonly, nonatomic) NSString *fineGrainedNewsletterSubscriptionBaseURLString; // ivar: _fineGrainedNewsletterSubscriptionBaseURLString
@property (readonly, nonatomic) NSString *newsletterAPIBaseURLString; // ivar: _newsletterAPIBaseURLString
@property (readonly, nonatomic) NSString *notificationsBaseURLString; // ivar: _notificationsBaseURLString
@property (readonly, nonatomic) NSString *remoteDataSourceBaseURLString; // ivar: _remoteDataSourceBaseURLString
@property (readonly, nonatomic) NSString *searchAPIBaseURLString; // ivar: _searchAPIBaseURLString
@property (readonly, nonatomic) NSString *sportsDataVisualizationAPIBaseURLString; // ivar: _sportsDataVisualizationAPIBaseURLString
@property (readonly, nonatomic) NSString *staticAssetBaseURLString; // ivar: _staticAssetBaseURLString


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithClientAPIBaseURLString:(id)arg0 notificationsBaseURLString:(id)arg1 ;
-(id)initWithClientAPIBaseURLString:(id)arg0 notificationsBaseURLString:(id)arg1 staticAssetBaseURLString:(id)arg2 remoteDataSourceBaseURLString:(id)arg3 ;
-(id)initWithClientAPIBaseURLString:(id)arg0 notificationsBaseURLString:(id)arg1 staticAssetBaseURLString:(id)arg2 remoteDataSourceBaseURLString:(id)arg3 newsletterAPIBaseURLString:(id)arg4 ;
-(id)initWithClientAPIBaseURLString:(id)arg0 notificationsBaseURLString:(id)arg1 staticAssetBaseURLString:(id)arg2 remoteDataSourceBaseURLString:(id)arg3 newsletterAPIBaseURLString:(id)arg4 appAnalyticsBaseURLString:(id)arg5 ;
-(id)initWithClientAPIBaseURLString:(id)arg0 notificationsBaseURLString:(id)arg1 staticAssetBaseURLString:(id)arg2 remoteDataSourceBaseURLString:(id)arg3 newsletterAPIBaseURLString:(id)arg4 appAnalyticsBaseURLString:(id)arg5 fairPlayBaseURLString:(id)arg6 ;
-(id)initWithClientAPIBaseURLString:(id)arg0 notificationsBaseURLString:(id)arg1 staticAssetBaseURLString:(id)arg2 remoteDataSourceBaseURLString:(id)arg3 newsletterAPIBaseURLString:(id)arg4 appAnalyticsBaseURLString:(id)arg5 fairPlayBaseURLString:(id)arg6 searchAPIBaseURLString:(id)arg7 ;
-(id)initWithClientAPIBaseURLString:(id)arg0 notificationsBaseURLString:(id)arg1 staticAssetBaseURLString:(id)arg2 remoteDataSourceBaseURLString:(id)arg3 newsletterAPIBaseURLString:(id)arg4 appAnalyticsBaseURLString:(id)arg5 fairPlayBaseURLString:(id)arg6 searchAPIBaseURLString:(id)arg7 appAnalyticsNotificationReceiptBaseURLString:(id)arg8 ;
-(id)initWithClientAPIBaseURLString:(id)arg0 notificationsBaseURLString:(id)arg1 staticAssetBaseURLString:(id)arg2 remoteDataSourceBaseURLString:(id)arg3 newsletterAPIBaseURLString:(id)arg4 appAnalyticsBaseURLString:(id)arg5 fairPlayBaseURLString:(id)arg6 searchAPIBaseURLString:(id)arg7 appAnalyticsNotificationReceiptBaseURLString:(id)arg8 authTokenAPIBaseURLString:(id)arg9 ;
-(id)initWithClientAPIBaseURLString:(id)arg0 notificationsBaseURLString:(id)arg1 staticAssetBaseURLString:(id)arg2 remoteDataSourceBaseURLString:(id)arg3 newsletterAPIBaseURLString:(id)arg4 appAnalyticsBaseURLString:(id)arg5 fairPlayBaseURLString:(id)arg6 searchAPIBaseURLString:(id)arg7 appAnalyticsNotificationReceiptBaseURLString:(id)arg8 authTokenAPIBaseURLString:(id)arg9 sportsDataVisualizationAPIBaseURLString:(id)arg10 fineGrainedNewsletterSubscriptionBaseURLString:(id)arg11 ;
-(id)initWithClientAPIBaseURLString:(id)arg0 notificationsBaseURLString:(id)arg1 staticAssetBaseURLString:(id)arg2 remoteDataSourceBaseURLString:(id)arg3 newsletterAPIBaseURLString:(id)arg4 appAnalyticsBaseURLString:(id)arg5 fairPlayBaseURLString:(id)arg6 searchAPIBaseURLString:(id)arg7 appAnalyticsNotificationReceiptBaseURLString:(id)arg8 authTokenAPIBaseURLString:(id)arg9 sportsDataVisualizationAPIBaseURLString:(id)arg10 fineGrainedNewsletterSubscriptionBaseURLString:(id)arg11 appAnalyticsSportsEventsBaseURLString:(id)arg12 appAnalyticsAppHealthBaseURLString:(id)arg13 ckOrderFeedBaseURLString:(id)arg14 ckMultiFetchBaseURLString:(id)arg15 ckRecordFetchBaseURLString:(id)arg16 ;


@end


#endif