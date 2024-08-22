// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNIOSABACCOUNTIDENTIFIERSPREDICATE_H
#define CNIOSABACCOUNTIDENTIFIERSPREDICATE_H

@class NSString, NSArray;
@protocol CNiOSAccountPredicate;


#import "CNPredicate.h"

@interface CNiOSABAccountIdentifiersPredicate : CNPredicate <CNiOSAccountPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *identifiers; // ivar: _identifiers
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(?)cn_copyAccountsInAddressBookerror;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifiers:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif