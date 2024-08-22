// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDROPSHADOWVIEW_H
#define UIDROPSHADOWVIEW_H

@class NSArray;
@protocol UIDropShadowViewDelegate;


#import "UIView.h"
#import "_UIGrabber.h"
#import "_UIRoundedRectShadowView.h"

@interface UIDropShadowView : UIView

@property (readonly, nonatomic) _UIGrabber *_bottomGrabber; // ivar: __bottomGrabber
@property (weak, nonatomic) NSObject<UIDropShadowViewDelegate> *_delegate; // ivar: __delegate
@property (nonatomic, setter=_setGrabberAlpha:) CGFloat _grabberAlpha; // ivar: __grabberAlpha
@property (nonatomic, setter=_setGrabberEdge:) NSInteger _grabberEdge; // ivar: __grabberEdge
@property (nonatomic, setter=_setGrabberSpacing:) CGFloat _grabberSpacing; // ivar: __grabberSpacing
@property (readonly, nonatomic) BOOL _hasCreatedGrabbers;
@property (nonatomic, setter=_setHasGrabber:) BOOL _hasGrabber; // ivar: __hasGrabber
@property (readonly, nonatomic) _UIGrabber *_topGrabber; // ivar: __topGrabber
@property (nonatomic) UIEdgeInsets contentTouchInsets; // ivar: _contentTouchInsets
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) NSArray *cornerClippingDescendants; // ivar: _cornerClippingDescendants
@property (readonly, nonatomic) UIView *deepestClippingView;
@property (nonatomic) UIRectCornerRadii environmentMatchingCornerRadii; // ivar: _environmentMatchingCornerRadii
@property (readonly, weak, nonatomic) UIView *firstCornerClippingDescendant; // ivar: _firstCornerClippingDescendant
@property (readonly, nonatomic) NSInteger independentCorners; // ivar: _independentCorners
@property (readonly, nonatomic) _UIRoundedRectShadowView *magicShadowView; // ivar: _magicShadowView
@property (nonatomic) BOOL masksTopCornersOnly; // ivar: _masksTopCornersOnly
@property (retain, nonatomic) UIView *overlayView; // ivar: _overlayView
@property (readonly, nonatomic) BOOL supportsShadow; // ivar: _supportsShadow


-(BOOL)_isGrabber:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 independentCorners:(NSInteger)arg1 supportsShadow:(BOOL)arg2 stylesSheetsAsCards:(BOOL)arg3 ;
-(void)_grabberPrimaryAction;
-(void)_layoutGrabbers;
-(void)didFinishRotation;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setMagicShadowAlpha:(CGFloat)arg0 ;
-(void)updateCornerClippingViews;
-(void)willBeginRotationWithOriginalBounds:(struct CGRect )arg0 newBounds:(struct CGRect )arg1 ;


@end


#endif