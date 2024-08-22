// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNIOSABCONTAINERIOSLEGACYIDENTIFIERPREDICATE_H
#define CNIOSABCONTAINERIOSLEGACYIDENTIFIERPREDICATE_H

@class NSString;
@protocol CNiOSContainerPredicate;


#import "CNPredicate.h"

@interface CNiOSABContaineriOSLegacyIdentifierPredicate : CNPredicate <CNiOSContainerPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int iOSLegacyIdentifier; // ivar: _iOSLegacyIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(?)cn_copyContainersInAddressBookerror;
-(BOOL)includesDisabledContainers;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 ;
-(id)initWithiOSLegacyIdentifier:(int)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif