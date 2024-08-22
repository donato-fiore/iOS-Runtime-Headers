// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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


+(BOOL)isRedirectBagURLOverrideEnabled;
+(NSInteger)_anisetteTypeFromAccount:(id)arg0 ;
+(id)_bagURLKeysForPurchaseType:(NSInteger)arg0 withProductType:(id)arg1 purchase:(id)arg2 prefix:(id)arg3 ;
+(id)_bagURLKeysFromPurchaseInfo:(id)arg0 ;
+(id)_buyProductURLKeysForProductType:(id)arg0 prefix:(id)arg1 ;
+(id)_parametersFromPurchaseInfo:(id)arg0 error:(*id)arg1 ;
+(id)bagURLFromPurchaseInfo:(id)arg0 bag:(id)arg1 error:(*id)arg2 ;
+(void)configureRequest:(id)arg0 purchaseInfo:(id)arg1 bag:(id)arg2 error:(*id)arg3 ;
-(id)bag;
-(id)encodeRequest;
-(id)initWithPurchaseInfo:(id)arg0 ;
-(id)initWithPurchaseInfo:(id)arg0 bag:(id)arg1 ;
-(void)setBag:(id)arg0 ;


@end


#endif