// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCURVEDPICKERVIEW_H
#define NTKCURVEDPICKERVIEW_H

@class UIView, NSMutableDictionary, NSString;
@protocol NTKEditOptionContainerView;



@interface NTKCurvedPickerView : UIView <NTKEditOptionContainerView>

 {
    NSMutableDictionary *_sideViews;
    NSUInteger _activeSide;
    NSUInteger _transitioningSide;
    CGFloat _currentFraction;
}


@property (readonly, nonatomic) CGFloat centerAngle; // ivar: _centerAngle
@property (readonly, nonatomic) CGPoint circleCenter; // ivar: _circleCenter
@property (readonly, nonatomic) CGFloat circleRadius; // ivar: _circleRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL interior; // ivar: _interior
@property (readonly, nonatomic) NSUInteger numberOfSides;
@property (readonly, nonatomic) NSUInteger numberOfVisibleSides;
@property (readonly) Class superclass;


-(CGFloat)_alphaForIndex:(NSUInteger)arg0 ;
-(CGFloat)_angleForIndex:(NSUInteger)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(id)viewForSideAtIndex:(NSUInteger)arg0 ;
-(struct CGAffineTransform )_transformForAngle:(CGFloat)arg0 ;
-(void)_setCurrentFraction:(CGFloat)arg0 ;
-(void)enumerateSideViewsWithBlock:(id)arg0 ;
-(void)layoutSubviews;
-(void)setView:(id)arg0 forSideAtIndex:(NSUInteger)arg1 ;
-(void)transitionToFraction:(CGFloat)arg0 fromSideAtIndex:(NSUInteger)arg1 toSideAtIndex:(NSUInteger)arg2 ;
-(void)transitionToSideAtIndex:(NSUInteger)arg0 ;


@end


#endif