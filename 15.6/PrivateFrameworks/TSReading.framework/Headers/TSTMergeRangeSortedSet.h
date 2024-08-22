// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTMERGERANGESORTEDSET_H
#define TSTMERGERANGESORTEDSET_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface TSTMergeRangeSortedSet : NSObject {
    *void mSet;
    __tree_const_iterator<TSTMergeRangeElem, std::__tree_node<TSTMergeRangeElem, void *> *, long> mIter;
    NSObject<OS_dispatch_semaphore> *mSem;
}




-(BOOL)isCheckbox;
-(NSUInteger)count;
-(id)init;
-(struct ? )begin;
-(struct ? )iter;
-(struct CGSize )getSize;
-(struct UIEdgeInsets )getPaddingInsets;
-(void)addRange:(struct ? )arg0 andSize:(struct CGSize )arg1 andPaddingInsets:(struct UIEdgeInsets )arg2 andIsCheckbox:(BOOL)arg3 ;
-(void)dealloc;
-(void)reset;


@end


#endif