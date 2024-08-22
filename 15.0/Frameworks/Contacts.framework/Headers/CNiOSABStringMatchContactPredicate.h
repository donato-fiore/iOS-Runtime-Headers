// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNIOSABSTRINGMATCHCONTACTPREDICATE_H
#define CNIOSABSTRINGMATCHCONTACTPREDICATE_H

@class NSString;
@protocol CNiOSContactPredicate;


#import "CNPredicate.h"

@interface CNiOSABStringMatchContactPredicate : CNPredicate <CNiOSContactPredicate>



@property (readonly, copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)cn_supportsEncodedFetching;
-(BOOL)cn_supportsNativeBatchFetch;
-(BOOL)cn_supportsNativeSorting;
-(id)cn_cursorForEncodedPeopleFromAddressBook:(*void)arg0 fetchRequest:(id)arg1 environment:(id)arg2 error:(*id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSearchString:(id)arg0 accountIdentifier:(id)arg1 containerIdentifier:(id)arg2 groupIdentifier:(id)arg3 ;
-(struct __CFArray *)cn_copyPeopleInAddressBook:(*void)arg0 fetchRequest:(id)arg1 matchInfos:(*id)arg2 environment:(id)arg3 error:(struct __CFError **)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif