// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOEDITTOOLBAR_H
#define PUPHOTOEDITTOOLBAR_H

@class UIView, CAGradientLayer, NSArray, UILongPressGestureRecognizer, NSString, UIButton;
@protocol PUPhotoEditLayoutStaticAdaptable, PUPhotoEditToolbarDelegate;


#import "PUPhotoEditViewControllerSpec.h"

@interface PUPhotoEditToolbar : UIView <PUPhotoEditLayoutStaticAdaptable>

 {
    UIView *_gradientBackgroundView;
    CAGradientLayer *_gradientLayer;
    UIView *_underlineView;
    NSArray *_basicViewsConstraints;
    NSArray *_mainActionButtonConstraints;
    NSArray *_secondaryActionButtonConstraints;
    NSArray *_toolButtonsConstraints;
    NSArray *_toolButtonLayoutGuides;
    UILongPressGestureRecognizer *_accessibilityLongPressGestureRecognizer;
}


@property (nonatomic) NSInteger backgroundStyle; // ivar: _backgroundStyle
@property (readonly, nonatomic) NSInteger buttonSpacing; // ivar: _buttonSpacing
@property (nonatomic) UIEdgeInsets contentPadding; // ivar: _contentPadding
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUPhotoEditToolbarDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (readonly, nonatomic) NSInteger layoutOrientation; // ivar: _layoutOrientation
@property (nonatomic) CGFloat longSideMargin; // ivar: _longSideMargin
@property (readonly, nonatomic) UIButton *mainActionButton; // ivar: _mainActionButton
@property (retain, nonatomic) UIView *mainToolbarContainer; // ivar: _mainToolbarContainer
@property (retain, nonatomic) PUPhotoEditViewControllerSpec *photoEditSpec; // ivar: _photoEditSpec
@property (readonly, nonatomic) UIButton *secondaryActionButton; // ivar: _secondaryActionButton
@property (readonly, nonatomic) CGFloat shortSideSize;
@property (readonly, nonatomic) UIView *stretchableView; // ivar: _stretchableView
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *toolButtons; // ivar: _toolButtons
@property (nonatomic) BOOL useLargeShortSideHeight; // ivar: _useLargeShortSideHeight
@property (nonatomic) BOOL useTabBarHeight; // ivar: _useTabBarHeight


-(CGFloat)tabBarHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_addCenterConstraintsWithMetrics:(id)arg0 verticalLayout:(BOOL)arg1 ;
-(void)_addLeadingConstraintsWithMetrics:(id)arg0 verticalLayout:(BOOL)arg1 ;
-(void)_addTrailingConstraintsWithMetrics:(id)arg0 verticalLayout:(BOOL)arg1 ;
-(void)_invalidateAllConstraints;
-(void)_updateBackgroundAnimated:(BOOL)arg0 ;
-(void)accessibilityLongPressChanged:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setupWithLayoutOrientation:(NSInteger)arg0 ;
-(void)updateConstraints;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif