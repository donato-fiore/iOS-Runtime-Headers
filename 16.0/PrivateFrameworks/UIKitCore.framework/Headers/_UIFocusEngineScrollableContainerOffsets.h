// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSENGINESCROLLABLECONTAINEROFFSETS_H
#define _UIFOCUSENGINESCROLLABLECONTAINEROFFSETS_H

@protocol UIScrollViewDelegate;

#import <Foundation/Foundation.h>

#import "_UIFocusEnvironmentScrollableContainerTuple.h"

@interface _UIFocusEngineScrollableContainerOffsets : NSObject

@property (nonatomic) BOOL adjustsTargetsOnContentOffsetChanges; // ivar: _adjustsTargetsOnContentOffsetChanges
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) CGFloat convergenceRate; // ivar: _convergenceRate
@property (retain, nonatomic) _UIFocusEnvironmentScrollableContainerTuple *environmentScrollableContainer; // ivar: _environmentScrollableContainer
@property (nonatomic) CGPoint lastContentOffset; // ivar: _lastContentOffset
@property (nonatomic) CGPoint lastRoundedOffset; // ivar: _lastRoundedOffset
@property (nonatomic) CGPoint lastVelocity; // ivar: _lastVelocity
@property (retain, nonatomic) NSObject<UIScrollViewDelegate> *scrollDelegate; // ivar: _scrollDelegate
@property (nonatomic) CGPoint startContentOffset; // ivar: _startContentOffset
@property (nonatomic) CGPoint targetContentOffset; // ivar: _targetContentOffset




@end


#endif