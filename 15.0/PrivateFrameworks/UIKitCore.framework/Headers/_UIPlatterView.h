// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPLATTERVIEW_H
#define _UIPLATTERVIEW_H

@class NSValue;


#import "UIView.h"
#import "_UIShapeView.h"
#import "_UIPortalView.h"
#import "_DUIPreview.h"
#import "_UIPlatterSoftShadowView.h"

@interface _UIPlatterView : UIView

@property (nonatomic) CGAffineTransform additionalTransform; // ivar: _additionalTransform
@property (retain, nonatomic) NSValue *anchorPointValueToAdjustToOnMoveToWindow; // ivar: _anchorPointValueToAdjustToOnMoveToWindow
@property (nonatomic) BOOL appliesOriginalRotation; // ivar: _appliesOriginalRotation
@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (nonatomic, getter=isBackgroundVisible) BOOL backgroundVisible; // ivar: _backgroundVisible
@property (readonly, nonatomic) CGPoint badgeLocation;
@property (retain, nonatomic) UIView *componentView; // ivar: _componentView
@property (nonatomic) BOOL constrainSize; // ivar: _constrainSize
@property (nonatomic) BOOL constrainSizeWhenNotLifted; // ivar: _constrainSizeWhenNotLifted
@property (nonatomic) CGAffineTransform containerCounterRotationTransform; // ivar: _containerCounterRotationTransform
@property (nonatomic) CGAffineTransform containerCounterScaleTransform; // ivar: _containerCounterScaleTransform
@property (readonly, nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, nonatomic) CGPoint contentOffset;
@property (readonly, nonatomic) CGSize contentSize; // ivar: _contentSize
@property (nonatomic, getter=isFlipped) BOOL flipped; // ivar: _flipped
@property (nonatomic, getter=isLifted) BOOL lifted; // ivar: _lifted
@property (nonatomic) CGPoint offset; // ivar: _offset
@property (nonatomic) CGFloat orientationRotation; // ivar: _orientationRotation
@property (nonatomic) CGSize overrideSize; // ivar: _overrideSize
@property (readonly, nonatomic) _UIShapeView *platterMaskView; // ivar: _platterMaskView
@property (readonly, nonatomic) _UIShapeView *portalMaskView; // ivar: _portalMaskView
@property (retain, nonatomic) _UIPortalView *portalView; // ivar: _portalView
@property (readonly, nonatomic) UIView *portalWrapperView; // ivar: _portalWrapperView
@property (nonatomic) BOOL precisionMode; // ivar: _precisionMode
@property (readonly, copy, nonatomic) _DUIPreview *preview; // ivar: _preview
@property (nonatomic) CGFloat rotation; // ivar: _rotation
@property (readonly, nonatomic) _UIPlatterSoftShadowView *shadowView; // ivar: _shadowView
@property (nonatomic, getter=isShadowVisible) BOOL shadowVisible; // ivar: _shadowVisible
@property (weak, nonatomic) UIView *sourceView;
@property (nonatomic) CGFloat stackRotation; // ivar: _stackRotation
@property (readonly, nonatomic) CATransform3D targetTransform;
@property (nonatomic) BOOL transformAppliedExternally; // ivar: _transformAppliedExternally


-(BOOL)_isEligibleForFocusOcclusion;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)scaleFactor;
-(id)initWithDUIPreview:(id)arg0 ;
-(id)initWithDUIPreview:(id)arg0 imageComponent:(id)arg1 ;
-(id)initWithDroppedItem:(id)arg0 ;
-(id)initWithPreview:(id)arg0 ;
-(struct CATransform3D )scaleTransform;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_unmaskPlatterView;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)takeCounterTransformsToAddToContainer:(id)arg0 ;
-(void)updateTransform;


@end


#endif