// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPCREDENTIALLISTITEM_H
#define PKPAYMENTSETUPCREDENTIALLISTITEM_H

@class PKPaymentCredential, UIImage, PKPaymentPass;
@protocol NSCopying;


#import "PKPaymentSetupListItem.h"

@interface PKPaymentSetupCredentialListItem : PKPaymentSetupListItem <NSCopying>



@property (retain, nonatomic) PKPaymentCredential *credential; // ivar: _credential
@property (nonatomic) BOOL isFetchingPassSnapshot; // ivar: _isFetchingPassSnapshot
@property (nonatomic) BOOL isRefund; // ivar: _isRefund
@property (nonatomic) BOOL isUnavailable; // ivar: _isUnavailable
@property (nonatomic) NSUInteger lastCheckedCredentialHash; // ivar: _lastCheckedCredentialHash
@property (retain, nonatomic) UIImage *passSnapshot; // ivar: _passSnapshot
@property (readonly, nonatomic) PKPaymentPass *paymentPass;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCredential:(id)arg0 ;


@end


#endif