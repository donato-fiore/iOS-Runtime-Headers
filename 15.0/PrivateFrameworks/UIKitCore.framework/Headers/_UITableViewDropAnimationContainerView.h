// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITABLEVIEWDROPANIMATIONCONTAINERVIEW_H
#define _UITABLEVIEWDROPANIMATIONCONTAINERVIEW_H

@class UITableViewContainerView, NSArray;



@interface _UITableViewDropAnimationContainerView : UITableViewContainerView

@property (nonatomic) CGPoint _tableViewContainerOffsetFromTargetCenter; // ivar: __tableViewContainerOffsetFromTargetCenter
@property (nonatomic) NSInteger activeDropAnimationCount; // ivar: _activeDropAnimationCount
@property (readonly, nonatomic) NSArray *cells;
@property (readonly, nonatomic) BOOL hasCompletedAllDropAnimations;
@property (nonatomic) CGFloat originalTargetCenterY; // ivar: _originalTargetCenterY


-(id)init;
-(void)beginDropAnimation;
-(void)endDropAnimation;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)updateOffsetFromTargetCenterIfNeeded;


@end


#endif