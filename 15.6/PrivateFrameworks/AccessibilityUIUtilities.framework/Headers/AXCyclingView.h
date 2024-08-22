// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXCYCLINGVIEW_H
#define AXCYCLINGVIEW_H

@class UIView, NSArray;



@interface AXCyclingView : UIView

@property (nonatomic) NSUInteger cycleIndex; // ivar: _cycleIndex
@property (nonatomic) BOOL isMakingNextViewVisible; // ivar: _isMakingNextViewVisible
@property (nonatomic) BOOL shouldSkipMakingNextViewVisible; // ivar: _shouldSkipMakingNextViewVisible
@property (readonly, nonatomic) NSArray *viewsInCycle;


-(void)_makeNextViewVisible;
-(void)_updateForCycleIndex;
-(void)beginCycling;
-(void)didMoveToWindow;
-(void)endCycling;


@end


#endif