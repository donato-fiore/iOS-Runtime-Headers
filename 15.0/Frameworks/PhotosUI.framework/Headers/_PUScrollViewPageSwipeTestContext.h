// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PUSCROLLVIEWPAGESWIPETESTCONTEXT_H
#define _PUSCROLLVIEWPAGESWIPETESTCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _PUScrollViewPageSwipeTestContext : NSObject

@property (nonatomic) NSInteger currentDirection; // ivar: _currentDirection
@property (nonatomic) NSInteger currentIteration; // ivar: _currentIteration
@property (nonatomic) NSInteger currentPage; // ivar: _currentPage
@property (nonatomic) CGFloat currentPageSwipeProgress; // ivar: _currentPageSwipeProgress
@property (nonatomic) NSInteger currentState; // ivar: _currentState
@property (nonatomic) NSInteger numberOfIterations; // ivar: _numberOfIterations
@property (nonatomic) NSInteger numberOfPages; // ivar: _numberOfPages
@property (nonatomic) CGPoint originContentOffset; // ivar: _originContentOffset
@property (nonatomic) NSUInteger scrollAxis; // ivar: _scrollAxis
@property (copy, nonatomic) NSString *testName; // ivar: _testName


-(id)init;


@end


#endif