// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICONTENTCONSTRAINTSLAYOUTGUIDE_H
#define _UICONTENTCONSTRAINTSLAYOUTGUIDE_H

@class NSLayoutConstraint;


#import "UILayoutGuide.h"

@interface _UIContentConstraintsLayoutGuide : UILayoutGuide

@property (readonly, nonatomic) NSLayoutConstraint *bottomConstraint; // ivar: _bottomConstraint
@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (readonly, nonatomic) NSLayoutConstraint *leadingConstraint; // ivar: _leadingConstraint
@property (readonly, nonatomic) NSLayoutConstraint *maximumHeightConstraint; // ivar: _maximumHeightConstraint
@property (nonatomic) CGSize maximumSize; // ivar: _maximumSize
@property (readonly, nonatomic) NSLayoutConstraint *maximumWidthConstraint; // ivar: _maximumWidthConstraint
@property (readonly, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // ivar: _minimumHeightConstraint
@property (nonatomic) CGSize minimumSize; // ivar: _minimumSize
@property (readonly, nonatomic) NSLayoutConstraint *minimumWidthConstraint; // ivar: _minimumWidthConstraint
@property (readonly, nonatomic) NSLayoutConstraint *topConstraint; // ivar: _topConstraint
@property (readonly, nonatomic) NSLayoutConstraint *trailingConstraint; // ivar: _trailingConstraint
@property (readonly, nonatomic) BOOL wantsMaximumSizeConstraintsActive; // ivar: _wantsMaximumSizeConstraintsActive
@property (readonly, nonatomic) BOOL wantsMinimumSizeConstraintsActive; // ivar: _wantsMinimumSizeConstraintsActive


-(id)_allMarginConstraints;
-(id)_allSizeConstraints;
-(id)init;
-(void)_clearConstraints;
-(void)_setAllMarginConstraintsActive:(BOOL)arg0 ;
-(void)_setAllSizeConstraintsActive:(BOOL)arg0 ;
-(void)_updateAllMarginConstraintConstants;
-(void)_updateAllSizeConstraints;
-(void)setOwningView:(id)arg0 ;


@end


#endif