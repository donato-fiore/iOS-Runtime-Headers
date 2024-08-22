// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISELECTIONGRABBER_H
#define UISELECTIONGRABBER_H

@class CAShapeLayer;


#import "UIView.h"
#import "UISelectionGrabberDot.h"
#import "UISelectionGrabberCustomPath.h"
#import "UITextRangeView.h"

@interface UISelectionGrabber : UIView {
    CGFloat m_screenScale;
    UISelectionGrabberDot *m_dotView;
    int _applicationDeactivationReason;
}


@property (nonatomic) BOOL activeFlattened; // ivar: m_activeFlattened
@property (nonatomic) BOOL alertFlattened; // ivar: m_alertFlattened
@property (nonatomic) BOOL animating; // ivar: m_animating
@property (retain, nonatomic) UISelectionGrabberCustomPath *customPath; // ivar: _customPath
@property (readonly, nonatomic) UITextRangeView *hostView;
@property (nonatomic) BOOL isDotted; // ivar: m_isDotted
@property (nonatomic) BOOL navigationTransitionFlattened; // ivar: m_navigationTransitionFlattened
@property (nonatomic) NSInteger orientation; // ivar: m_orientation
@property (readonly, nonatomic) CAShapeLayer *shapeLayer;
@property (nonatomic) BOOL sheetFlattened; // ivar: _sheetFlattened


+(Class)layerClass;
+(id)_grabberDot;
-(BOOL)autoscrolled;
-(BOOL)clipDot:(struct CGRect )arg0 ;
-(BOOL)dotIsVisibleInDocument:(struct CGRect )arg0 ;
-(BOOL)inputViewIsChanging;
-(BOOL)isPointedDown;
-(BOOL)isPointedLeft;
-(BOOL)isPointedRight;
-(BOOL)isPointedUp;
-(BOOL)isRotating;
-(BOOL)isScaling;
-(BOOL)isScrolling;
-(BOOL)isVertical;
-(BOOL)scroller:(id)arg0 fullyContainSelectionRect:(struct CGRect )arg1 ;
-(id)_dotView;
-(id)bezierPathFromCustomPath:(id)arg0 ;
-(id)fillColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)animateGrabberInWithCompletion:(id)arg0 ;
-(void)animateGrabberOutWithCompletion:(id)arg0 ;
-(void)canExpandAfterAlert:(id)arg0 ;
-(void)canExpandAfterBecomeActive:(id)arg0 ;
-(void)canExpandAfterNavigationTransition:(id)arg0 ;
-(void)canExpandAfterSheet:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)mustFlattenForAlert:(id)arg0 ;
-(void)mustFlattenForNavigationTransition:(id)arg0 ;
-(void)mustFlattenForResignActive:(id)arg0 ;
-(void)mustFlattenForSheet:(id)arg0 ;
-(void)redrawDotForScale:(CGFloat)arg0 ;
-(void)removeFromSuperview;
-(void)saveDeactivationReason:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)transitionDot:(NSInteger)arg0 completion:(id)arg1 ;
-(void)updateDot;
-(void)updatePathForBoundsChangeIfNecessary;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif