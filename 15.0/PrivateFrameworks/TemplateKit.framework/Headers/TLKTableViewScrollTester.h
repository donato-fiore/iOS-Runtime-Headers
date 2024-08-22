// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLKTABLEVIEWSCROLLTESTER_H
#define TLKTABLEVIEWSCROLLTESTER_H

@class UIScrollView;

#import <Foundation/Foundation.h>


@interface TLKTableViewScrollTester : NSObject

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) BOOL directionUp; // ivar: _directionUp
@property (nonatomic) BOOL finishedFirstScroll; // ivar: _finishedFirstScroll
@property (copy, nonatomic) id *firstScroll; // ivar: _firstScroll
@property (nonatomic) CGFloat scrollTime; // ivar: _scrollTime
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (retain, nonatomic) UIScrollView *tableView; // ivar: _tableView


-(id)init;
-(void)finishFirstScrollIfNeeded;
-(void)fire:(id)arg0 ;
-(void)performScrollTestOnTableView:(id)arg0 completion:(id)arg1 ;
// -(void)performScrollTestOnTableView:(id)arg0 firstScroll:(id)arg1 completion:(unk)arg2  ;


@end


#endif