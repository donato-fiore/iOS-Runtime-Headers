// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLTOOLBARCONTROLLER_H
#define QLTOOLBARCONTROLLER_H

@class NSLayoutConstraint, UIView, UIColor, UIToolbar;

#import <Foundation/Foundation.h>

#import "_UIToolbarConfiguration.h"

@interface QLToolbarController : NSObject {
    NSLayoutConstraint *_clippingExtensionContainerHeightConstraint;
    NSLayoutConstraint *_clippingExtensionContainerBottomConstraint;
    NSLayoutConstraint *_toolbarHeightConstraint;
    NSLayoutConstraint *_accessoryContainerHeightConstraint;
    NSLayoutConstraint *_toolbarBottomConstraint;
    UIView *_clippingExtensionContainer;
    UIView *_accessoryViewContainer;
    _UIToolbarConfiguration *_originalToolbarConfiguration;
    _UIToolbarConfiguration *_customToolbarConfiguration;
    CGFloat _derivedToolbarExtensionHeight;
}


@property (weak, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (nonatomic) CGFloat accessoryViewAlpha; // ivar: _accessoryViewAlpha
@property (nonatomic, getter=isAccessoryViewHidden) BOOL accessoryViewHidden; // ivar: _accessoryViewHidden
@property (nonatomic) CGFloat accessoryViewHiddenProgress; // ivar: _accessoryViewHiddenProgress
@property (retain, nonatomic) UIColor *barTintColor; // ivar: _barTintColor
@property (readonly) UIToolbar *customToolbar; // ivar: _customToolbar
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (nonatomic) CGFloat hiddenProgress; // ivar: _hiddenProgress
@property (weak, nonatomic) UIToolbar *originalToolbar; // ivar: _originalToolbar
@property (nonatomic) CGFloat originalToolbarAlpha; // ivar: _originalToolbarAlpha
@property (nonatomic, getter=isOriginalToolbarHidden) BOOL originalToolbarHidden;
@property (nonatomic) CGFloat preferredAccesoryViewHeight; // ivar: _preferredAccesoryViewHeight
@property (readonly, weak, nonatomic) UIView *preferredParentViewForSafeAreaInset; // ivar: _preferredParentViewForSafeAreaInset
@property (readonly, weak, nonatomic) UIView *preferredSuperview; // ivar: _preferredSuperview
@property (nonatomic) CGFloat toolbarAlpha; // ivar: _toolbarAlpha


-(BOOL)_tryToSetUp:(BOOL)arg0 ;
-(CGFloat)_computeClippingExtensionContainerBottomConstraint;
-(CGFloat)_computeClippingExtensionContainerHeightForCurrentHiddenProgress;
-(CGFloat)_originalToolbarHeightIncludingSafeAreaBottomInset:(BOOL)arg0 ;
-(CGFloat)_toolbarExtensionHeight;
-(CGFloat)_toolbarSafeAreaInsetBottom;
-(CGFloat)_totalHeight;
-(id)init;
-(void)_embedAccessoryView;
-(void)_layoutAccessoryView:(id)arg0 ;
-(void)restoreOriginalConfiguration;
-(void)restoreOriginalToolbar;
-(void)updateLayout;


@end


#endif