// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFLOATINGCARDGESTURECOORDINATOR_H
#define PXFLOATINGCARDGESTURECOORDINATOR_H

@class NSString, UIPanGestureRecognizer;
@protocol UIGestureRecognizerDelegate, PXFloatingCardGestureCoordinatorDelegate, PXFloatingCardLayout;

#import <Foundation/Foundation.h>

#import "PXFloatingCardAnimationManager.h"
#import "PXFloatingCardViewController.h"

@interface PXFloatingCardGestureCoordinator : NSObject <UIGestureRecognizerDelegate>



@property (retain, nonatomic) PXFloatingCardAnimationManager *animationManager; // ivar: _animationManager
@property (nonatomic) CGFloat bottomRubberBandRange; // ivar: _bottomRubberBandRange
@property (weak, nonatomic) PXFloatingCardViewController *cardViewController; // ivar: _cardViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXFloatingCardGestureCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIPanGestureRecognizer *heightGestureRecognizer; // ivar: _heightGestureRecognizer
@property (nonatomic) BOOL isDragging; // ivar: _isDragging
@property (weak, nonatomic) NSObject<PXFloatingCardLayout> *layout; // ivar: _layout
@property (retain, nonatomic) UIPanGestureRecognizer *positionGestureRecognizer; // ivar: _positionGestureRecognizer
@property (nonatomic) CGPoint previousPanTranslation; // ivar: _previousPanTranslation
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topRubberBandRange; // ivar: _topRubberBandRange


-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(CGFloat)applyRubberBandToValue:(CGFloat)arg0 withRange:(CGFloat)arg1 ;
-(CGFloat)closestHeightForProjectedHeight:(CGFloat)arg0 ;
-(CGFloat)heightForRubberBandHeight:(CGFloat)arg0 ;
-(CGFloat)maximumHeight;
-(CGFloat)minimumHeight;
-(CGFloat)projectionWithVelocity:(CGFloat)arg0 decelerationRate:(CGFloat)arg1 ;
-(CGFloat)rubberBandHeightForHeight:(CGFloat)arg0 ;
-(CGFloat)unapplyRubberBandToValue:(CGFloat)arg0 withRange:(CGFloat)arg1 ;
-(NSUInteger)closestPositionToProjectedCenter:(struct CGPoint )arg0 ;
-(id)initWithCardViewController:(id)arg0 layout:(id)arg1 ;
-(struct CGPoint )centerPointForPosition:(NSUInteger)arg0 ;
-(void)_addGestureRecognizers;
-(void)_handlePositionGestureEnded:(struct CGPoint )arg0 ;
-(void)_removeGestureRecognizers;
-(void)dealloc;
-(void)dragBegan;
-(void)dragChangedWithVerticalDelta:(CGFloat)arg0 ;
-(void)dragEndedWithAnimation:(id)arg0 ;
-(void)handleHeightGesture:(id)arg0 ;
-(void)handlePositionGesture:(id)arg0 ;
-(void)snapToHeight:(CGFloat)arg0 ;
-(void)updateCardHeightConstraintWithHeight:(CGFloat)arg0 ;


@end


#endif