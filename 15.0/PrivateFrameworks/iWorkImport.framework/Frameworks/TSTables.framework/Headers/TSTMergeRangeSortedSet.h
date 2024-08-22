// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTMERGERANGESORTEDSET_H
#define TSTMERGERANGESORTEDSET_H


#import <Foundation/Foundation.h>


@interface TSTMergeRangeSortedSet : NSObject {
    set<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::allocator<TSTMergeRangeElem>> _set;
    os_unfair_lock_s _lock;
}




-(id)init;
-(void)addRange:(struct TSUCellRect )arg0 height:(CGFloat)arg1 paddingInsets:(struct UIEdgeInsets )arg2 isCheckbox:(BOOL)arg3 ;
-(void)enumerateMergeRangesUsingBlock:(id)arg0 ;


@end


#endif