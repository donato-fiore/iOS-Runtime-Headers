// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNIOSABGROUPSINCONTAINERPREDICATE_H
#define CNIOSABGROUPSINCONTAINERPREDICATE_H

@class NSString;
@protocol CNiOSGroupPredicate;


#import "CNPredicate.h"

@interface CNiOSABGroupsInContainerPredicate : CNPredicate <CNiOSGroupPredicate>



@property (readonly, copy, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(?)cn_copyGroupsInAddressBookerror;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContainerIdentifier:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif