// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDINTERACTIONSTORESHIM_H
#define GDINTERACTIONSTORESHIM_H


#import <Foundation/Foundation.h>


@interface GDInteractionStoreShim : NSObject



+(id)interactionFromCDInteraction:(id)arg0 ;
+(id)interactionHistoryEnumerator;
+(id)interactionHistoryEnumeratorFromStore:(id)arg0 ;
+(id)interactionHistoryEnumeratorFromStore:(id)arg0 predicate:(id)arg1 sortDescriptor:(id)arg2 ;
+(id)interactionHistoryEnumeratorWithPredicate:(id)arg0 sortDescriptor:(id)arg1 ;
+(id)interactionHistoryFromStore:(id)arg0 ;


@end


#endif