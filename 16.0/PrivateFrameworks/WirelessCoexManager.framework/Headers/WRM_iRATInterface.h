// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WRM_IRATINTERFACE_H
#define WRM_IRATINTERFACE_H

@class NSMutableArray;


#import "WRMClientInterface.h"

@interface WRM_iRATInterface : WRMClientInterface {
    NSMutableArray *mAppLists;
    BOOL mClientSupportsMultipleAppTypes;
    id *mObserver;
    id *mOppModeObserver;
    id *mProximitySubscribeLinkRecommendationHandler;
    id *mProximityGetLinkRecommendationHandler;
    id *mGetLinkRecommendationMetricsHandler;
    id *mOppBtLQMObserver;
    id *mLowPowerModePeriodicWakeUpCb;
    BOOL mLinkPreferenceSubscriptionEnabled;
    BOOL mTelephoneAssertionEnabled;
    BOOL mTelephonyStateEnabled;
    BOOL mLocationAssertionEnabled;
    BOOL mProximitySubscribeLinkRecommendationEnabled;
    BOOL mProximityGetLinkRecommendationEnabled;
    BOOL mGetLinkRecommendationMetricsHandlerEnabled;
    int mLocationState;
    NSMutableArray *mProximityLinkRecommendationList;
    BOOL mBBAssertionBGAppActive;
}




-(id)init;
-(int)getStatusUpdateMessageType:(int)arg0 ;
-(int)getSubscribeMessageType:(int)arg0 ;
-(void)_expediteBBAssertionBGAppActive_sync:(BOOL)arg0 handler:(id)arg1 ;
-(void)addAppType:(id)arg0 ;
-(void)addProximityLinkRecommendationType:(id)arg0 ;
-(void)assertCommCenterBaseBand:(int)arg0 ;
-(void)assertCommCenterBaseBandMode:(int)arg0 ;
-(void)expediteBBAssertionBGAppActive:(BOOL)arg0 handler:(id)arg1 ;
-(void)expediteCellularForReason:(BOOL)arg0 reason:(id)arg1 ;
-(void)getLinkRecommendationMetrics:(id)arg0 ;
// -(void)getMLPredictedThroughput:(id)arg0 options:(unk)arg1  ;
-(void)getProximityLinkRecommendation:(BOOL)arg0 recommendation:(id)arg1 ;
// -(void)getStreamingInfo:(id)arg0 linkType:(unk)arg1  ;
-(void)handleNotification:(id)arg0 ;
-(void)processBTLQMNotification:(id)arg0 ;
-(void)processLowPowerModePeriodicWakeUpNotification;
-(void)processMetricsNotificationReport:(id)arg0 ;
-(void)processNotificationList:(id)arg0 ;
-(void)processNotificationListForTerminus:(id)arg0 ;
-(void)processOperatingModeNotification:(id)arg0 ;
-(void)reConnect;
-(void)registerClient:(int)arg0 queue:(id)arg1 ;
-(void)removeAppType:(id)arg0 ;
-(void)removeProximityLinkRecommendationType:(id)arg0 ;
-(void)setTelephonyEnabled:(BOOL)arg0 ;
-(void)statusUpdateAppLinkPreference:(int)arg0 status:(BOOL)arg1 ;
-(void)statusUpdateAppType:(int)arg0 linkType:(int)arg1 serviceStatus:(BOOL)arg2 ;
-(void)subscribeAppType:(struct ? )arg0 observer:(id)arg1 ;
-(void)subscribeBtLqmScoreNotification:(id)arg0 ;
-(void)subscribeDataLinkRecommendation:(id)arg0 ;
-(void)subscribeLowPowerModePeriodicWakeupNotification:(id)arg0 ;
-(void)subscribeMultipleAppTypes:(id)arg0 observer:(id)arg1 ;
-(void)subscribeOperatingModeChangeNotification:(id)arg0 ;
-(void)subscribeProximityLinkRecommendation:(id)arg0 ;
-(void)subscribeStandaloneLinkRecommendation:(id)arg0 ;
-(void)unregisterClient;


@end


#endif