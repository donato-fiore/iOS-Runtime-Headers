// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNIOSABCONTAINERSFORACCOUNTEXTERNALIDENTIFIERPREDICATE_H
#define CNIOSABCONTAINERSFORACCOUNTEXTERNALIDENTIFIERPREDICATE_H

@class NSString;
@protocol CNiOSContainerPredicate;


#import "CNPredicate.h"

@interface CNiOSABContainersForAccountExternalIdentifierPredicate : CNPredicate <CNiOSContainerPredicate>



@property (readonly, copy, nonatomic) NSString *accountExternalIdentifier; // ivar: _accountExternalIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(?)cn_copyContainersInAddressBookerror;
-(BOOL)includesDisabledContainers;
-(id)initWithAccountExternalIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif