// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNIOSABSOCIALPROFILECONTACTPREDICATE_H
#define CNIOSABSOCIALPROFILECONTACTPREDICATE_H

@class NSString;
@protocol CNiOSContactPredicate;


#import "CNSocialProfileContactPredicate.h"

@interface CNiOSABSocialProfileContactPredicate : CNSocialProfileContactPredicate <CNiOSContactPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)cn_supportsEncodedFetching;
-(BOOL)cn_supportsNativeBatchFetch;
-(BOOL)cn_supportsNativeSorting;
-(BOOL)isEqual:(id)arg0 ;
-(id)cn_ABQSLPredicateForAddressBook:(*void)arg0 fetchRequest:(id)arg1 error:(*id)arg2 ;
-(id)cn_copyPeopleInAddressBook:(*void)arg0 fetchRequest:(id)arg1 matchInfos:(*id)arg2 environment:(id)arg3 nserror:(*id)arg4 ;
-(struct __CFArray *)cn_copyPeopleInAddressBook:(*void)arg0 fetchRequest:(id)arg1 matchInfos:(*id)arg2 environment:(id)arg3 error:(struct __CFError **)arg4 ;


@end


#endif