// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNIOSABGROUPSWITHMEMBERSPREDICATE_H
#define CNIOSABGROUPSWITHMEMBERSPREDICATE_H

@class NSString, NSArray;
@protocol CNiOSGroupPredicate;


#import "CNPredicate.h"

@interface CNiOSABGroupsWithMembersPredicate : CNPredicate <CNiOSGroupPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL includeAllParentGroups; // ivar: _includeAllParentGroups
@property (readonly, copy, nonatomic) NSArray *recordIdentifiers; // ivar: _recordIdentifiers
@property (readonly, nonatomic) unsigned int recordType; // ivar: _recordType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(?)cn_copyGroupsInAddressBookerror;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 includeAllParentGroups:(BOOL)arg1 ;
-(id)initWithGroup:(id)arg0 includeAllParentGroups:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif