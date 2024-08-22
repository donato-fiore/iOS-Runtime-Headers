// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNIOSABCONTAINERSFORACCOUNTPREDICATE_H
#define CNIOSABCONTAINERSFORACCOUNTPREDICATE_H

@class NSString;
@protocol CNiOSContainerPredicate;


#import "CNPredicate.h"

@interface CNiOSABContainersForAccountPredicate : CNPredicate <CNiOSContainerPredicate>



@property (readonly, copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL includesDisabledContainers; // ivar: _includesDisabledContainers
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(?)cn_copyContainersInAddressBookerror;
-(id)initWithAccountIdentifier:(id)arg0 includingDisabledContainers:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif