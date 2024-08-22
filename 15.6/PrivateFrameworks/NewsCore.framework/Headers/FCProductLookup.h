// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCPRODUCTLOOKUP_H
#define FCPRODUCTLOOKUP_H

@class NSString, NSNumber, SKProductsRequest, SKProduct, NSError;
@protocol SKProductsRequestDelegate, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface FCProductLookup : NSObject <SKProductsRequestDelegate>

 {
    NSString *_offerName;
    NSNumber *_appAdamID;
    NSNumber *_storeExternalVersionID;
    NSString *_bundleID;
    NSObject<OS_dispatch_group> *_productRequestGroup;
    SKProductsRequest *_request;
    SKProduct *_product;
    NSError *_productLookupError;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)productsRequest:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)requestDidFinish:(id)arg0 ;


@end


#endif