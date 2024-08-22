// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSPURCHASEREQUESTENCODER_H
#define AMSPURCHASEREQUESTENCODER_H

@protocol AMSBagProtocol, OS_dispatch_queue;


#import "AMSURLRequestEncoder.h"
#import "AMSPurchaseInfo.h"

@interface AMSPurchaseRequestEncoder : AMSURLRequestEncoder {
    id<AMSBagProtocol> *_bag;
}


@property (readonly, nonatomic) AMSPurchaseInfo *purchaseInfo; // ivar: _purchaseInfo
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *purchaseRequestQueue; // ivar: _purchaseRequestQueue


+(NSInteger)_anisetteTypeFromAccount:(id)arg0 ;
+(id)_parametersFromPurchaseInfo:(id)arg0 error:(*id)arg1 ;
+(void)configureRequest:(id)arg0 purchaseInfo:(id)arg1 bag:(id)arg2 error:(*id)arg3 ;
-(id)_bagURLKeys;
-(id)_bagURLKeysForPurchaseType:(NSInteger)arg0 prefix:(id)arg1 ;
-(id)_bagURLWithError:(*id)arg0 ;
-(id)_buyProductURLKeysForProductType:(id)arg0 prefix:(id)arg1 ;
-(id)bag;
-(id)encodeRequest;
-(id)initWithPurchaseInfo:(id)arg0 ;
-(id)initWithPurchaseInfo:(id)arg0 bag:(id)arg1 ;
-(void)setBag:(id)arg0 ;


@end


#endif