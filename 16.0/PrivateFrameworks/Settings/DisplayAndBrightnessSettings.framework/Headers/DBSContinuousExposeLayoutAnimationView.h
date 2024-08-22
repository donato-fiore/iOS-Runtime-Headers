// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSCONTINUOUSEXPOSELAYOUTANIMATIONVIEW_H
#define DBSCONTINUOUSEXPOSELAYOUTANIMATIONVIEW_H

@class UIView, CAState, CAPackage, CALayer, CAStateController;



@interface DBSContinuousExposeLayoutAnimationView : UIView

@property (retain, nonatomic) CAState *currentState; // ivar: _currentState
@property (retain, nonatomic) CAPackage *package; // ivar: _package
@property (retain, nonatomic) CALayer *packageLayer; // ivar: _packageLayer
@property (nonatomic) CGFloat scaleFactor; // ivar: _scaleFactor
@property (retain, nonatomic) CAStateController *stateController; // ivar: _stateController


-(CGFloat)scaleFactorForInterfaceOrientation:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)packageStateNameWithState:(NSUInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )preferredSize;
-(void)animateToState:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)configureView;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)updatePackageLayerWithPackage:(id)arg0 ;


@end


#endif