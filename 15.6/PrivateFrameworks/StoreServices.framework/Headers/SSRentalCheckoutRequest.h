// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSRENTALCHECKOUTREQUEST_H
#define SSRENTALCHECKOUTREQUEST_H

@class NSNumber, NSArray, NSString;
@protocol SSXPCCoding;


#import "SSRequest.h"

@interface SSRentalCheckoutRequest : SSRequest <SSXPCCoding>

 {
    NSNumber *_accountIdentifier;
    NSInteger _downloadIdentifier;
    NSNumber *_rentalKeyIdentifier;
    NSArray *_sinfs;
}


@property (readonly) NSNumber *accountIdentifier;
@property NSUInteger checkoutType; // ivar: _checkoutType
@property (nonatomic, getter=shouldCheckoutWithPlay) BOOL checkoutWithPlay; // ivar: _checkoutWithPlay
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSInteger downloadIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) NSNumber *rentalKeyIdentifier;
@property (nonatomic) BOOL shouldValidateRentalInfo; // ivar: _shouldValidateRentalInfo
@property (readonly) NSArray *sinfs;
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)init;
-(id)initWithAccountIdentifier:(id)arg0 rentalKeyIdentifier:(id)arg1 ;
-(id)initWithDownloadIdentifier:(NSInteger)arg0 ;
-(id)initWithSinfs:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;
-(void)startWithCompletionBlock:(id)arg0 ;
-(void)startWithConnectionResponseBlock:(id)arg0 ;


@end


#endif