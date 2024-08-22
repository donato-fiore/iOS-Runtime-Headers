// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSENGINESCROLLABLECONTAINEROFFSETS_H
#define _UIFOCUSENGINESCROLLABLECONTAINEROFFSETS_H

@protocol UIScrollViewDelegate, UIFocusItemScrollableContainer;

#import <Foundation/Foundation.h>


@interface _UIFocusEngineScrollableContainerOffsets : NSObject

@property (nonatomic) BOOL adjustsTargetsOnContentOffsetChanges; // ivar: _adjustsTargetsOnContentOffsetChanges
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) CGFloat convergenceRate; // ivar: _convergenceRate
@property (nonatomic) CGPoint lastContentOffset; // ivar: _lastContentOffset
@property (nonatomic) CGPoint lastRoundedOffset; // ivar: _lastRoundedOffset
@property (nonatomic) CGPoint lastVelocity; // ivar: _lastVelocity
@property (retain, nonatomic) NSObject<UIScrollViewDelegate> *scrollDelegate; // ivar: _scrollDelegate
@property (retain, nonatomic) NSObject<UIFocusItemScrollableContainer> *scrollableContainer; // ivar: _scrollableContainer
@property (nonatomic) CGPoint targetContentOffset; // ivar: _targetContentOffset




@end


#endif