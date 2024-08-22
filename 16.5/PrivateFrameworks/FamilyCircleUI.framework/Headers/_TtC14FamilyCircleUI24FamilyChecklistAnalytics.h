// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14FAMILYCIRCLEUI24FAMILYCHECKLISTANALYTICS_H
#define _TTC14FAMILYCIRCLEUI24FAMILYCHECKLISTANALYTICS_H


#import <Foundation/Foundation.h>


@interface _TtC14FamilyCircleUI24FamilyChecklistAnalytics : NSObject



+(id)shared;
-(id)init;
-(void)sendChecklistChildSettingsToggleAnalyticsEvent;
-(void)sendChecklistCommLimitsToggleAnalyticsEvent;
-(void)sendChecklistIcloudPlusToggleAnalyticsEvent;
-(void)sendChecklistLocationSharingToggleAnalyticsEvent;
-(void)sendChildSettingsAnalyticsEvent;
-(void)sendChildSettingsOnOffToggleEvent;
-(void)sendCommLimitsAnalyticsEvent;
-(void)sendCommLimitsOnOffToggleEvent;
-(void)sendEmergencyContactsAnalyticsEvent;
-(void)sendEmergencyContactsOnOffToggleEvent;
-(void)sendEmergencyContactsToggleAnalyticsEvent;
-(void)sendIcloudPlusSharingAnalyticsEvent;
-(void)sendLocationSharingAnalyticsEvent;
-(void)sendLocationSharingOnOffToggleEvent;
-(void)sendRecoveryContactsAnalyticsEvent;
-(void)sendRecoveryContactsOnOffToggleEvent;
-(void)sendRecoveryContactsToggleAnalyticsEvent;
-(void)sendTotalChecklistViewsAnalyticsEvent;
-(void)sendicloudPlusOnOffToggleEvent;


@end


#endif