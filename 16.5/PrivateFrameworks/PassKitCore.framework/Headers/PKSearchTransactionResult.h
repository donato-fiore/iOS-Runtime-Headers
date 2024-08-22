// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSEARCHTRANSACTIONRESULT_H
#define PKSEARCHTRANSACTIONRESULT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPaymentTransaction.h"

@interface PKSearchTransactionResult : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *passUniqueIdentifier; // ivar: _passUniqueIdentifier
@property (retain, nonatomic) PKPaymentTransaction *transaction; // ivar: _transaction


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif