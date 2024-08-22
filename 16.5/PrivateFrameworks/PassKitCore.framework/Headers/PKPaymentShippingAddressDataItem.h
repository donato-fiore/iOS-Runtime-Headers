// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSHIPPINGADDRESSDATAITEM_H
#define PKPAYMENTSHIPPINGADDRESSDATAITEM_H

@class NSAttributedString, CNContact, NSString;


#import "PKPaymentDataItem.h"

@interface PKPaymentShippingAddressDataItem : PKPaymentDataItem

@property (readonly, nonatomic) NSAttributedString *formattedAddressString;
@property (readonly, nonatomic) BOOL isShippingEditable;
@property (readonly, nonatomic) CNContact *shippingAddress;
@property (readonly, nonatomic) NSString *shippingType;


+(NSInteger)dataType;
-(BOOL)hasShippingAddress;
-(BOOL)isClientError:(id)arg0 ;
-(BOOL)isShippingServiceableWithError:(*id)arg0 ;
-(BOOL)isValidWithError:(*id)arg0 ;
-(NSInteger)context;
-(NSUInteger)rawShippingType;
-(id)_shippingName;
-(id)createIncompleteShippingAddressError;
-(id)createRequiredShippingAddressError;
-(id)createShippingAddressErrorFromError:(id)arg0 ;
-(id)createShippingAddressErrorWithDescription:(id)arg0 failureReason:(id)arg1 ;
-(id)createUnavailableShippingAddressError;
-(id)errors;
-(id)firstModelError;
-(id)incompleteShippingAddressErrorDescription;
-(id)incompleteShippingAddressErrorFailureReason;
-(id)paymentContactFormatErrors;
-(id)requiredShippingAddressErrorDescription;
-(id)requiredShippingAddressErrorFailureReason;
-(id)unavailableShippingAddressErrorDescription;
-(id)unavailableShippingAddressErrorFailureReason;
-(id)validate;


@end


#endif