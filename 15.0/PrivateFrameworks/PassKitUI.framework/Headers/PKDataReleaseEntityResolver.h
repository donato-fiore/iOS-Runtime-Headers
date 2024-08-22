// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDATARELEASEENTITYRESOLVER_H
#define PKDATARELEASEENTITYRESOLVER_H

@class PKPaymentService;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKDataReleaseEntityResolver : NSObject {
    PKPaymentService *_paymentService;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)init;
-(void)_merchantForIdentifier:(id)arg0 withCurrentMerchant:(id)arg1 fromMobileAssetLocalOnly:(BOOL)arg2 completion:(id)arg3 ;
-(void)resolveEntityForRequest:(id)arg0 completion:(id)arg1 ;
-(void)resolveEntityForRpIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif