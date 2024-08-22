// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNIOSFETCHEXECUTION_H
#define CNIOSFETCHEXECUTION_H


#import <Foundation/Foundation.h>


@interface CNiOSFetchExecution : NSObject



+(id)contactsMatchingPredicates:(id)arg0 sortOrdering:(unsigned int)arg1 matchInfos:(*id)arg2 options:(NSUInteger)arg3 addressBook:(*void)arg4 environment:(id)arg5 error:(*id)arg6 ;
// +(id)contactsMatchingPredicates:(id)arg0 sortOrdering:(unsigned int)arg1 options:(NSUInteger)arg2 addressBook:(*void)arg3 progressiveResults:(id)arg4 completion:(unk)arg5 environment:(id)arg6  ;
+(void)_extractContacts:(*id)arg0 matchInfo:(*id)arg1 fromBlockResults:(id)arg2 containsNestedResults:(BOOL)arg3 ;


@end


#endif