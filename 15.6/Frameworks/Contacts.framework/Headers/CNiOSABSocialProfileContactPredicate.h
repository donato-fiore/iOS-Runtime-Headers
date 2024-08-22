// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(id)cn_copyPeopleInAddressBook:(*void)arg0 fetchRequest:(id)arg1 matchInfos:(*id)arg2 environment:(id)arg3 nserror:(*id)arg4 ;
-(id)cn_cursorForEncodedPeopleFromAddressBook:(*void)arg0 fetchRequest:(id)arg1 environment:(id)arg2 error:(*id)arg3 ;
-(struct __CFArray *)cn_copyPeopleInAddressBook:(*void)arg0 fetchRequest:(id)arg1 matchInfos:(*id)arg2 environment:(id)arg3 error:(struct __CFError **)arg4 ;


@end


#endif