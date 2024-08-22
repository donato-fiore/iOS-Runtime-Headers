// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFCORETELEPHONYSUBSCRIPTIONCHANGELISTENER_H
#define _MFCORETELEPHONYSUBSCRIPTIONCHANGELISTENER_H

@class CoreTelephonyClient, NSString;
@protocol CoreTelephonyClientCarrierBundleDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _MFCoreTelephonySubscriptionChangeListener : NSObject <CoreTelephonyClientCarrierBundleDelegate>

 {
    NSObject<OS_dispatch_queue> *_telephonyQueue;
    CoreTelephonyClient *_client;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)carrierBundleChange:(id)arg0 ;


@end


#endif