// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITABLEVIEWPREFETCHCONTEXT_H
#define _UITABLEVIEWPREFETCHCONTEXT_H

@class NSMutableIndexSet;

#import <Foundation/Foundation.h>


@interface _UITableViewPrefetchContext : NSObject {
    BOOL _prefetchScheduled;
    id *_requestHandler;
    id *_cancelHandler;
    id *_cellHandler;
    id *_cellPruningHandler;
    NSMutableIndexSet *_outstandingRequests;
    NSInteger _maxIndex;
    CGFloat _lastContentOffset;
    NSInteger _prefetchItemCount;
    NSInteger _refreshPrefetchThresholdCount;
    NSInteger _cancelThresholdCount;
    _NSRange _lastVisibleIndexRange;
}




-(id)computedPrefetchIndexSet;
-(id)description;
-(int)_effectiveRefreshDirectionForProposedVisibleIndexRange:(struct _NSRange )arg0 withContentOffset:(CGFloat)arg1 ;
-(struct _NSRange )_offsetAndValidateRange:(struct _NSRange )arg0 firstIndexOffset:(NSInteger)arg1 lastIndexOffset:(NSInteger)arg2 ;
-(struct _NSRange )_validatedRangeWithLocation:(NSInteger)arg0 length:(NSInteger)arg1 ;


@end


#endif