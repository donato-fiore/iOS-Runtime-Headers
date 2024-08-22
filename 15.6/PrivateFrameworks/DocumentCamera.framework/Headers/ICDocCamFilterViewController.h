// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDOCCAMFILTERVIEWCONTROLLER_H
#define ICDOCCAMFILTERVIEWCONTROLLER_H

@class UIViewController, UIView, NSString, NSMutableArray, NSArray, UILongPressGestureRecognizer, UIScrollView, NSLayoutConstraint;
@protocol UIScrollViewDelegate, UIGestureRecognizerDelegate, ICDocCamFilterViewDelegate;


#import "DCSinglePixelHorizontalLineView.h"
#import "DCSinglePixelVerticalLineView.h"

@interface ICDocCamFilterViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate>



@property (weak, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (nonatomic) CGFloat bottomContentInset; // ivar: _bottomContentInset
@property (nonatomic) CGFloat bottomOffset; // ivar: _bottomOffset
@property (readonly, nonatomic) CGSize contentSize;
@property (nonatomic) short currentFilterType; // ivar: _currentFilterType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *filterButtons; // ivar: _filterButtons
@property (weak, nonatomic) NSObject<ICDocCamFilterViewDelegate> *filterViewDelegate; // ivar: _filterViewDelegate
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) DCSinglePixelHorizontalLineView *horizontalLineView; // ivar: _horizontalLineView
@property (nonatomic) CGFloat horizontalOffset; // ivar: _horizontalOffset
@property (copy, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // ivar: _longPressGesture
@property (weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) NSLayoutConstraint *scrollViewBottomConstraint; // ivar: _scrollViewBottomConstraint
@property (readonly, nonatomic) NSLayoutConstraint *scrollViewTrailingConstraint; // ivar: _scrollViewTrailingConstraint
@property (readonly) Class superclass;
@property (nonatomic) BOOL transitioning; // ivar: _transitioning
@property (weak, nonatomic) DCSinglePixelVerticalLineView *verticalLineView; // ivar: _verticalLineView


-(BOOL)_canShowWhileLocked;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)prefersStatusBarHidden;
-(NSUInteger)supportedInterfaceOrientations;
-(id)filterButtonFromLocation:(struct CGPoint )arg0 ;
-(id)init;
-(void)applyToAll:(short)arg0 ;
-(void)centerContent:(BOOL)arg0 isPortrait:(BOOL)arg1 ;
-(void)dealloc;
-(void)filterSelected:(id)arg0 ;
-(void)initializeFilters;
-(void)longPressGesture:(id)arg0 ;
-(void)prepareToAnimateIn:(BOOL)arg0 ;
-(void)setUpScrollView;
-(void)updateConstraints;
-(void)updateConstraintsPad;
-(void)updateConstraintsPhone;
-(void)updateScrollViewContentSize;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif