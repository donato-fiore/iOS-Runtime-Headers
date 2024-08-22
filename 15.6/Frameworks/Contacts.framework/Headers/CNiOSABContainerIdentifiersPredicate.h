// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNIOSABCONTAINERIDENTIFIERSPREDICATE_H
#define CNIOSABCONTAINERIDENTIFIERSPREDICATE_H

@class NSString, NSArray;
@protocol CNiOSContainerPredicate;


#import "CNPredicate.h"

@interface CNiOSABContainerIdentifiersPredicate : CNPredicate <CNiOSContainerPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *identifiers; // ivar: _identifiers
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(?)cn_copyContainersInAddressBookerror;
-(BOOL)includesDisabledContainers;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifiers:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif