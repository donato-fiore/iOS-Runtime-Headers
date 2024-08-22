// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADAPPTRACKINGSERVICE_H
#define ADAPPTRACKINGSERVICE_H

@class ADSingleton, NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, ADAppTracking_XPC;



@interface ADAppTrackingService : ADSingleton <NSXPCListenerDelegate, ADAppTracking_XPC>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSXPCListener *listener; // ivar: _listener
@property (nonatomic) BOOL requestInFlight; // ivar: _requestInFlight
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)deviceRegionEnabledPerStorefront:(id)arg0 ;
-(void)getAccountLevelSwitchDisabledReasonWithHandler:(id)arg0 ;
-(void)iTunesAccountStorefront:(id)arg0 ;
-(void)latestPersonalizedAdsConsentVersion:(id)arg0 ;
-(void)localAdServicesEnabled:(id)arg0 ;
-(void)reconcileDataForRecord:(id)arg0 ;
-(void)sendPersonalizedAdsAndReconcileDataForRecord:(id)arg0 ;
-(void)setPersonalizedAds:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)shouldAppStoreDisplayAdvertisingScreen:(id)arg0 ;
-(void)shouldDisplayPersonalizedAdsUI:(id)arg0 ;


@end


#endif