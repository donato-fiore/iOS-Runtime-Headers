// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNIOSABFULLTEXTSEARCHCONTACTPREDICATE_H
#define CNIOSABFULLTEXTSEARCHCONTACTPREDICATE_H

@class NSString;
@protocol CNiOSContactPredicate, CNiOSContactAsyncPredicate;


#import "CNFullTextSearchContactPredicate.h"

@interface CNiOSABFullTextSearchContactPredicate : CNFullTextSearchContactPredicate <CNiOSContactPredicate, CNiOSContactAsyncPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)cn_supportsEncodedFetching;
-(BOOL)cn_supportsNativeBatchFetch;
-(BOOL)cn_supportsNativeSorting;
-(id)_predicatesWithAddressBook:(*void)arg0 environment:(id)arg1 ;
-(id)cn_copyPeopleInAddressBook:(*void)arg0 fetchRequest:(id)arg1 matchInfos:(*id)arg2 environment:(id)arg3 nserror:(*id)arg4 ;
-(id)cn_cursorForEncodedPeopleFromAddressBook:(*void)arg0 fetchRequest:(id)arg1 environment:(id)arg2 error:(*id)arg3 ;
// -(id)cn_fetchPeopleInAddressBook:(*void)arg0 fetchRequest:(id)arg1 progressiveResults:(id)arg2 completion:(unk)arg3 environment:(id)arg4  ;
-(id)initWithSearchString:(id)arg0 containerIdentifiers:(id)arg1 groupIdentifiers:(id)arg2 ;
-(struct __CFArray *)cn_copyPeopleInAddressBook:(*void)arg0 fetchRequest:(id)arg1 matchInfos:(*id)arg2 environment:(id)arg3 error:(struct __CFError **)arg4 ;


@end


#endif