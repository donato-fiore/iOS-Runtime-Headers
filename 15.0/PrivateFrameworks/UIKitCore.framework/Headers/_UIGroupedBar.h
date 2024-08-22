// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIGROUPEDBAR_H
#define _UIGROUPEDBAR_H

@class NSLayoutConstraint, NSArray, NSString;
@protocol _UIButtonBarDelegate;


#import "UIView.h"
#import "_UIButtonBar.h"
#import "UIVisualEffectView.h"
#import "UIBlurEffect.h"
#import "_UIButtonBarButtonVisualProvider.h"

@interface _UIGroupedBar : UIView <_UIButtonBarDelegate>

 {
    _UIButtonBar *_leftBar;
    _UIButtonBar *_centerBar;
    _UIButtonBar *_rightBar;
    UIVisualEffectView *_backgroundView;
    NSLayoutConstraint *_centeringConstraint;
    NSLayoutConstraint *_leadingLimitConstraint;
    NSLayoutConstraint *_trailingLimitConstraint;
}


@property (copy, nonatomic) UIBlurEffect *backgroundEffect; // ivar: _backgroundEffect
@property (copy, nonatomic) NSArray *centerBarButtonGroups;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL independentGroupSizes; // ivar: _independentGroupSizes
@property (copy, nonatomic) NSArray *leadingBarButtonGroups;
@property (nonatomic) CGFloat leadingBarSizeLimit; // ivar: _leadingBarSizeLimit
@property (nonatomic) CGFloat margin; // ivar: _margin
@property (nonatomic) CGFloat minimumInterGroupSpace; // ivar: _minimumInterGroupSpace
@property (nonatomic) CGFloat minimumInterItemSpace; // ivar: _minimumInterItemSpace
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *trailingBarButtonGroups;
@property (nonatomic) CGFloat trailingBarSizeLimit; // ivar: _trailingBarSizeLimit
@property (copy, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider; // ivar: _visualProvider


-(id)_debug;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_setButtonAlpha:(CGFloat)arg0 ;
-(void)_updateBarMargins;
-(void)_updateVisualProvider;
-(void)buttonBarWillUpdateLayout:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)validateAllItems;


@end


#endif