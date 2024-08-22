// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STKCARRIERSUBSCRIPTIONMONITOR_H
#define STKCARRIERSUBSCRIPTIONMONITOR_H

@class NSMutableDictionary, CoreTelephonyClient, NSString;
@protocol CoreTelephonyClientCarrierBundleDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface STKCarrierSubscriptionMonitor : NSObject <CoreTelephonyClientCarrierBundleDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_subscriptionInfo;
    NSMutableDictionary *_subscriptionContext;
    CoreTelephonyClient *_telephonyClient;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)subscriptionContextForSlot:(NSInteger)arg0 ;
-(id)subscriptionInfoForSlot:(NSInteger)arg0 ;
-(void)carrierBundleChange:(id)arg0 ;
-(void)subscriptionInfoDidChange;


@end


#endif