// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKUIPEARLPILLCONTAINERVIEW_H
#define BKUIPEARLPILLCONTAINERVIEW_H

@class UIView, NSMutableArray, LAUICheckmarkLayer;



@interface BKUIPearlPillContainerView : UIView {
    NSMutableArray *_pillViews;
    LAUICheckmarkLayer *_successAnimation;
    NSInteger _numberOfVisiblePillViews;
    NSInteger _clockwise;
    NSInteger _counterwise;
    NSInteger _lastAngle;
    BOOL _hasPillStateStash;
    NSUInteger _stashedPillStates;
}


@property (nonatomic) CGPoint enrollViewCenter; // ivar: _enrollViewCenter
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius
@property (nonatomic) int state; // ivar: _state


-(BOOL)fillPillsAroundAngle:(CGFloat)arg0 ;
-(BOOL)fillPillsAroundAngle:(CGFloat)arg0 forTutorial:(BOOL)arg1 ;
-(BOOL)unstashPillStatesIfNeededAnimated:(BOOL)arg0 ;
-(CGFloat)percentOfPillsCompleted;
-(NSInteger)_indexForPillAtAngle:(CGFloat)arg0 ;
-(NSUInteger)_numberOfVisiblePillViews;
-(id)init;
-(id)unfilledDirections;
-(void)_animateToFinishedCompletion:(id)arg0 ;
-(void)animateToState:(int)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)resetPillsAnimated:(BOOL)arg0 ;
-(void)setAllPillState:(NSUInteger)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)stashPillStates;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unstashPillStatesAnimated:(BOOL)arg0 ;


@end


#endif