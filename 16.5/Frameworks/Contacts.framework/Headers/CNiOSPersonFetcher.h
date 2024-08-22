// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNIOSPERSONFETCHER_H
#define CNIOSPERSONFETCHER_H


#import <Foundation/Foundation.h>

#import "CNContactsEnvironment.h"
#import "CNiOSPersonFetchRequest.h"

@interface CNiOSPersonFetcher : NSObject

@property (readonly, nonatomic) *void addressBook; // ivar: _addressBook
@property (readonly, nonatomic) CNContactsEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) CNiOSPersonFetchRequest *fetchRequest; // ivar: _fetchRequest


+(id)peopleForFetchRequest:(id)arg0 matchInfos:(*id)arg1 inAddressBook:(*void)arg2 environment:(id)arg3 error:(*id)arg4 ;
-(BOOL)shouldSortInMemory;
// -(id)executeFetchRequestWithProgressiveResults:(id)arg0 completion:(unk)arg1  ;
-(id)fetchPeopleReturningMatchInfos:(*id)arg0 error:(*id)arg1 ;
-(id)fetchPeopleUsingNativeSortReturningMatchInfos:(*id)arg0 error:(*id)arg1 ;
-(id)initWithAddressBook:(*void)arg0 fetchRequest:(id)arg1 environment:(id)arg2 ;
-(id)sortPeople:(id)arg0 ;
-(void)dealloc;


@end


#endif