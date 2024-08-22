// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNIOSABGROUPIOSLEGACYIDENTIFIERPREDICATE_H
#define CNIOSABGROUPIOSLEGACYIDENTIFIERPREDICATE_H

@class NSString;
@protocol CNiOSGroupPredicate;


#import "CNPredicate.h"

@interface CNiOSABGroupiOSLegacyIdentifierPredicate : CNPredicate <CNiOSGroupPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int iOSLegacyIdentifier; // ivar: _iOSLegacyIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(?)cn_copyGroupsInAddressBookerror;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithiOSLegacyIdentifier:(int)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif