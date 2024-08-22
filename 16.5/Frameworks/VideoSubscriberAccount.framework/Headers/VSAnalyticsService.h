// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSANALYTICSSERVICE_H
#define VSANALYTICSSERVICE_H

@class AMSBag, NSString, NSMutableArray, MTMetricsKit;
@protocol VSManagedProfileConnectionObserver, MTBaseEventDataProviderDelegate, VSAnalyticsServiceProtocol, OS_dispatch_queue;


#import "VSServiceListener.h"
#import "VSPreferences.h"

@interface VSAnalyticsService : VSServiceListener <VSManagedProfileConnectionObserver, MTBaseEventDataProviderDelegate, VSAnalyticsServiceProtocol>



@property (retain, nonatomic) AMSBag *bag; // ivar: _bag
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL didBuddyComplete; // ivar: _didBuddyComplete
@property (retain, nonatomic) NSMutableArray *eventCache; // ivar: _eventCache
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // ivar: _eventQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MTMetricsKit *mainMetricsKit; // ivar: _mainMetricsKit
@property BOOL optedIn; // ivar: _optedIn
@property (retain, nonatomic) VSPreferences *preferences; // ivar: _preferences
@property (readonly) Class superclass;


-(id)capacityData:(id)arg0 ;
-(id)capacityDataAvailable:(id)arg0 ;
-(id)capacityDisk:(id)arg0 ;
-(id)capacitySystem:(id)arg0 ;
-(id)capacitySystemAvailable:(id)arg0 ;
-(id)clientId:(id)arg0 ;
-(id)connection:(id)arg0 ;
-(id)dsId:(id)arg0 ;
-(id)hardwareModel:(id)arg0 ;
-(id)init;
-(id)isSignedIn:(id)arg0 ;
-(id)pageUrl:(id)arg0 ;
-(id)pixelRatio:(id)arg0 ;
-(id)resourceRevNum:(id)arg0 ;
-(id)screenHeight:(id)arg0 ;
-(id)screenWidth:(id)arg0 ;
-(id)windowInnerHeight:(id)arg0 ;
-(id)windowInnerWidth:(id)arg0 ;
-(id)windowOuterHeight:(id)arg0 ;
-(id)windowOuterWidth:(id)arg0 ;
-(id)xpPostFrequency:(id)arg0 ;
-(id)xpSendMethod:(id)arg0 ;
-(void)onBuddyComplete;
-(void)profileConnectionSettingsChanged:(id)arg0 ;
-(void)publishMetricsKitEventWithData:(id)arg0 ;
-(void)recordFederatedPunchoutEventWithError:(id)arg0 metadata:(id)arg1 ;
-(void)recordMetricsCenterClickEventWithPage:(id)arg0 pageType:(id)arg1 data:(id)arg2 ;
-(void)recordMetricsCenterEnterEventWithPage:(id)arg0 pageType:(id)arg1 data:(id)arg2 ;
-(void)recordMetricsCenterExitEventWithPage:(id)arg0 pageType:(id)arg1 data:(id)arg2 ;
-(void)recordMetricsCenterFlexibleEventWithName:(id)arg0 data:(id)arg1 ;
-(void)recordNowPlayingBrokenEventWithBundleID:(id)arg0 ;


@end


#endif