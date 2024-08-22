// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNIOSABCONTAINEROFCONTACTPREDICATE_H
#define CNIOSABCONTAINEROFCONTACTPREDICATE_H

@class NSString;
@protocol CNiOSContainerPredicate;


#import "CNPredicate.h"

@interface CNiOSABContainerOfContactPredicate : CNPredicate <CNiOSContainerPredicate>



@property (readonly, copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(?)cn_copyContainersInAddressBookerror;
-(BOOL)includesDisabledContainers;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContactIdentifier:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif