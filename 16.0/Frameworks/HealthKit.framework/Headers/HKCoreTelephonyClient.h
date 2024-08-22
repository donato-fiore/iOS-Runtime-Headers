// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCORETELEPHONYCLIENT_H
#define HKCORETELEPHONYCLIENT_H

@class CoreTelephonyClient, NSString;
@protocol CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate, OS_dispatch_queue, HKCoreTelephonyClientDelegate;

#import <Foundation/Foundation.h>


@interface HKCoreTelephonyClient : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_client;
    NSString *_cachedCountryCode;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKCoreTelephonyClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)activeSubscriptionsDidChange;
-(void)dealloc;
-(void)fetchMobileCountryCodeFromCellularWithCompletion:(id)arg0 ;
-(void)invalidateCachedCountryCode;
-(void)onForeground:(id)arg0 ;
-(void)plmnChanged:(id)arg0 plmn:(id)arg1 ;
-(void)simLessSubscriptionsDidChange;
-(void)subscriptionInfoDidChange;


@end


#endif