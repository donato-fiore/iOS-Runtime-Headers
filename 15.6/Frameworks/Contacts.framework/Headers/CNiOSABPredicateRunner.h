// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNIOSABPREDICATERUNNER_H
#define CNIOSABPREDICATERUNNER_H


#import <Foundation/Foundation.h>


@interface CNiOSABPredicateRunner : NSObject



-(id)personPredicateWithNameLike:(id)arg0 inGroups:(id)arg1 sources:(id)arg2 addressBook:(*void)arg3 ;
-(id)personPredicateWithNameLike:(id)arg0 inSource:(id)arg1 addressBook:(*void)arg2 ;
-(void)searchPeopleWithPredicate:(id)arg0 sortOrder:(unsigned int)arg1 ranked:(BOOL)arg2 inAddressBook:(*void)arg3 withDelegate:(id)arg4 ;


@end


#endif