// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKPRODUCTSREQUEST_H
#define SKPRODUCTSREQUEST_H

@protocol SKProductsRequestDelegate;


#import "SKRequest.h"

@interface SKProductsRequest : SKRequest {
    id *_productsRequestInternal;
}


@property (weak, nonatomic) NSObject<SKProductsRequestDelegate> *delegate;


-(id)_newResponseForProducts:(id)arg0 invalidIdentifiers:(id)arg1 ;
-(id)init;
-(id)initWithProductIdentifiers:(id)arg0 ;
-(void)_start;
-(void)_startWithCompletionHandler:(id)arg0 ;


@end


#endif