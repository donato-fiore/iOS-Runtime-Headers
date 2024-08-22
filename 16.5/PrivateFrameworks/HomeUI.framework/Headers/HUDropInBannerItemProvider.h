// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUDROPINBANNERITEMPROVIDER_H
#define HUDROPINBANNERITEMPROVIDER_H

@class HFItemProvider, NSMutableDictionary, NSMutableSet, NSString, NSArray, DIDropInCenter, HMHome, HMAudioAnalysisLastKnownEventSubscriber;
@protocol DIDropInCenterDelegate, DIDeviceManagerDelegate, DIDeviceDelegate, HMAudioAnalysisLastKnownEventSubscriberDelegate, HFExecutionEnvironmentObserver, HUDropInBannerItemProviderDelegate;



@interface HUDropInBannerItemProvider : HFItemProvider <DIDropInCenterDelegate, DIDeviceManagerDelegate, DIDeviceDelegate, HMAudioAnalysisLastKnownEventSubscriberDelegate, HFExecutionEnvironmentObserver>



@property (retain, nonatomic) NSMutableDictionary *accessoryIdentifierToEventBulletinsMapping; // ivar: _accessoryIdentifierToEventBulletinsMapping
@property (retain, nonatomic) NSMutableSet *bannerItems; // ivar: _bannerItems
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUDropInBannerItemProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *devices; // ivar: _devices
@property (retain, nonatomic) DIDropInCenter *dropInCenter; // ivar: _dropInCenter
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HMAudioAnalysisLastKnownEventSubscriber *lastKnownEventSubscriber; // ivar: _lastKnownEventSubscriber
@property (readonly) Class superclass;


-(id)init;
-(id)initWithHome:(id)arg0 delegate:(id)arg1 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;
-(void)_notifyDelegate;
-(void)_setupDropInDelegatesIfNeeded;
-(void)device:(id)arg0 didUpdateState:(NSInteger)arg1 ;
-(void)executionEnvironmentDidBecomeActive:(id)arg0 ;
-(void)manager:(id)arg0 didAddDevice:(id)arg1 ;
-(void)manager:(id)arg0 didRemoveDevice:(id)arg1 ;
-(void)managerDidUpdateDevices:(id)arg0 ;
-(void)serverDisconnectedForDropInCenter:(id)arg0 ;
-(void)subscriber:(id)arg0 didUpdateBulletins:(id)arg1 ;


@end


#endif