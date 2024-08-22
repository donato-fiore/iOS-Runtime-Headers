// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIAGEVERIFICATIONCORE_H
#define AMSUIAGEVERIFICATIONCORE_H


#import <Foundation/Foundation.h>


@interface AMSUIAgeVerificationCore : NSObject



+(id)_messageForResult:(id)arg0 withBag:(id)arg1 expiration:(id)arg2 dateFormatter:(id)arg3 bundle:(id)arg4 ;
+(id)_promiseResultForCancelWithVerificationResult:(id)arg0 ;
+(id)_timestampOfExpiryFrom:(id)arg0 ;
+(id)_titleForResult:(id)arg0 withBag:(id)arg1 bundle:(id)arg2 ;


@end


#endif