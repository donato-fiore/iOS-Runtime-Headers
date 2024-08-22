// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSECONSISTENCYCHECKPASSCREDENTIAL_H
#define PKSECONSISTENCYCHECKPASSCREDENTIAL_H


#import <Foundation/Foundation.h>

#import "PKSECredentialAddress.h"
#import "PKPaymentApplication.h"
#import "PKAppletSubcredential.h"

@interface PKSEConsistencyCheckPassCredential : NSObject {
    id *_underlyingpassCredential;
}


@property (readonly, nonatomic) PKSECredentialAddress *address; // ivar: _address
@property (readonly, nonatomic) BOOL containsSubkeys; // ivar: _containsSubkeys
@property (readonly, nonatomic) PKPaymentApplication *paymentApplication;
@property (readonly, nonatomic) NSUInteger paymentMethod; // ivar: _paymentMethod
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) PKAppletSubcredential *subcredential;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)description;
-(id)init;
-(id)initWithPassCredential:(id)arg0 address:(id)arg1 paymentMethod:(NSUInteger)arg2 ;


@end


#endif