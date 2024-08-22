// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKVALUEADDEDSERVICEWEBSERVICE_H
#define PKVALUEADDEDSERVICEWEBSERVICE_H

@class NSURLSession, NSString, NSDictionary;
@protocol NSURLConnectionDataDelegate;

#import <Foundation/Foundation.h>

#import "PKValueAddedServiceTransaction.h"
#import "PKPass.h"

@interface PKValueAddedServiceWebService : NSObject <NSURLConnectionDataDelegate>

 {
    PKValueAddedServiceTransaction *_valueAddedTransaction;
    NSURLSession *_urlSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *merchantPayload; // ivar: _merchantPayload
@property (readonly, nonatomic) PKPass *pass; // ivar: _pass
@property (readonly) Class superclass;


-(id)initWithValueAddedServiceTransaction:(id)arg0 ;
-(void)downloadMerchantPayloadWithCompletion:(id)arg0 ;
-(void)downloadPassWithCompletion:(id)arg0 ;


@end


#endif