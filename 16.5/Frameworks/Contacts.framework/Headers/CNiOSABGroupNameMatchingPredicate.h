// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNIOSABGROUPNAMEMATCHINGPREDICATE_H
#define CNIOSABGROUPNAMEMATCHINGPREDICATE_H

@class NSString;
@protocol CNiOSGroupPredicate;


#import "CNPredicate.h"

@interface CNiOSABGroupNameMatchingPredicate : CNPredicate <CNiOSGroupPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)groupNameTokenizingCharacterSet;
+(id)tokenizeString:(id)arg0 ;
-(?)cn_copyGroupsInAddressBookerror;
-(BOOL)groupName:(id)arg0 matchesSearchTokens:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif