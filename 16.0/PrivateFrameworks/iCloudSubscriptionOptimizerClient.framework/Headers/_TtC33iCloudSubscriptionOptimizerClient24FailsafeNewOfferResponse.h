// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC33ICLOUDSUBSCRIPTIONOPTIMIZERCLIENT24FAILSAFENEWOFFERRESPONSE_H
#define _TTC33ICLOUDSUBSCRIPTIONOPTIMIZERCLIENT24FAILSAFENEWOFFERRESPONSE_H

@class NSString;


#import "ISONewOfferResponse.h"

@interface _TtC33iCloudSubscriptionOptimizerClient24FailsafeNewOfferResponse : ISONewOfferResponse

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;


-(BOOL)shouldDisplayOfferNow;
-(id)error;
-(id)init;
-(id)toContext;


@end


#endif