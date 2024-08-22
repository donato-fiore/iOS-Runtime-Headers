// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNIOSABPREFERREDNAMEINCONTAINERSANDGROUPSPREDICATE_H
#define CNIOSABPREFERREDNAMEINCONTAINERSANDGROUPSPREDICATE_H

@class NSArray, NSString;
@protocol CNiOSContactPredicate;


#import "CNPredicate.h"

@interface CNiOSABPreferredNameInContainersAndGroupsPredicate : CNPredicate <CNiOSContactPredicate>



@property (readonly, copy, nonatomic) NSArray *containerIdentifiers; // ivar: _containerIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *groupIdentifiers; // ivar: _groupIdentifiers
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)cn_supportsEncodedFetching;
-(BOOL)cn_supportsNativeBatchFetch;
-(BOOL)cn_supportsNativeSorting;
-(id)cn_ABQSLPredicateForAddressBook:(*void)arg0 fetchRequest:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContainerIdentifiers:(id)arg0 groupIdentifiers:(id)arg1 ;
-(struct __CFArray *)cn_copyPeopleInAddressBook:(*void)arg0 fetchRequest:(id)arg1 matchInfos:(*id)arg2 environment:(id)arg3 error:(struct __CFError **)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif