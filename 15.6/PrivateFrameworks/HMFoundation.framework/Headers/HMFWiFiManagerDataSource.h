// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFWIFIMANAGERDATASOURCE_H
#define HMFWIFIMANAGERDATASOURCE_H

@class NSLock, NSString;
@protocol HMFWiFiManagerDataSource, HMFWiFiManagerDataSourceDelegate, OS_dispatch_queue;


#import "HMFObject.h"

@interface HMFWiFiManagerDataSource : HMFObject <HMFWiFiManagerDataSource>



@property (readonly, getter=isAssertionActive) BOOL assertionActive;
@property (readonly) NSUInteger assertionOptions;
@property (readonly, nonatomic, getter=isCaptive) BOOL captive;
@property (nonatomic) int captiveCached; // ivar: _captiveCached
@property (retain, nonatomic) NSLock *captiveCachedLock; // ivar: _captiveCachedLock
@property (nonatomic) *__WiFiNetwork currentNetwork; // ivar: _currentNetwork
@property (readonly, copy, nonatomic) NSString *currentNetworkSSID;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMFWiFiManagerDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) *__SCDynamicStore scStore; // ivar: _scStore
@property (readonly) Class superclass;
@property (readonly, nonatomic) *__WiFiManagerClient wifiClientReference; // ivar: _wifiClientReference
@property (nonatomic) *__WiFiDeviceClient wifiDeviceReference; // ivar: _wifiDeviceReference
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (nonatomic, getter=isWoWAsserted, setter=setWoWAsserted:) BOOL wowAsserted;


+(id)MACAddressString;
-(id)initWithWorkQueue:(id)arg0 ;
-(void)_invalidateCaptiveState;
-(void)_registerForCaptiveStateChanges;
-(void)activateWithOptions:(NSUInteger)arg0 ;
-(void)deactivate;
-(void)dealloc;
-(void)handleWiFiLinkChangedWithEventDictionary:(id)arg0 ;
-(void)performBlockAfterWoWReassertionDelay:(id)arg0 ;
-(void)startWithWiFiDevice:(struct __WiFiDeviceClient *)arg0 ;


@end


#endif