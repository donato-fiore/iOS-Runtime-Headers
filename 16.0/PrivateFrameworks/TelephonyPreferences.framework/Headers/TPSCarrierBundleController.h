// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSCARRIERBUNDLECONTROLLER_H
#define TPSCARRIERBUNDLECONTROLLER_H



#import "TPSTelephonyController.h"

@interface TPSCarrierBundleController : TPSTelephonyController



-(id)localizedCarrierNameForSubscriptionContext:(id)arg0 ;
-(id)localizedStringForKey:(id)arg0 subscriptionContext:(id)arg1 ;
-(id)localizedStringForKey:(id)arg0 subscriptionContext:(id)arg1 error:(*id)arg2 ;
-(id)objectForKey:(id)arg0 subscriptionContext:(id)arg1 ;
-(id)objectForKey:(id)arg0 subscriptionContext:(id)arg1 error:(*id)arg2 ;
-(void)carrierBundleChange:(id)arg0 ;
-(void)operatorBundleChange:(id)arg0 ;


@end


#endif