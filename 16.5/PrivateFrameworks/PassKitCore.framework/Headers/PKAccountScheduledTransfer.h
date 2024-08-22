// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTSCHEDULEDTRANSFER_H
#define PKACCOUNTSCHEDULEDTRANSFER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"
#import "PKAccountTransferExternalAccount.h"

@interface PKAccountScheduledTransfer : NSObject <NSSecureCoding>



@property (retain, nonatomic) PKCurrencyAmount *currencyAmount; // ivar: _currencyAmount
@property (retain, nonatomic) PKAccountTransferExternalAccount *externalAccount; // ivar: _externalAccount
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)hashComponent;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrencyAmount:(id)arg0 type:(NSUInteger)arg1 externalAccount:(id)arg2 ;
-(id)jsonDictionaryRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif