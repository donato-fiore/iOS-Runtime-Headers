// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNIOSABGROUPSINGROUPPREDICATE_H
#define CNIOSABGROUPSINGROUPPREDICATE_H

@class NSString;
@protocol CNiOSGroupPredicate;


#import "CNPredicate.h"

@interface CNiOSABGroupsInGroupPredicate : CNPredicate <CNiOSGroupPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *parentGroupIdentifier; // ivar: _parentGroupIdentifier
@property (readonly) Class superclass;


-(?)cn_copyGroupsInAddressBookerror;
-(id)initWithParentGroupIdentifier:(id)arg0 ;


@end


#endif