// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISYSTEMBACKGROUNDVIEW_H
#define _UISYSTEMBACKGROUNDVIEW_H

@protocol _UIBackgroundConfigurationInternal;


#import "UIView.h"
#import "UIVisualEffectView.h"
#import "UIImageView.h"
#import "_UISystemBackgroundStrokeView.h"

@interface _UISystemBackgroundView : UIView {
    UIView *_colorView;
    UIVisualEffectView *_visualEffectView;
    UIImageView *_imageView;
    _UISystemBackgroundStrokeView *_strokeView;
    UIView *_shadowView;
    CGFloat _currentlyAppliedCornerRadius;
    unsigned char _subviewInsertionIndices;
    ? _systemBackgroundViewFlags;
}


@property (copy, nonatomic) NSObject<_UIBackgroundConfigurationInternal> *configuration; // ivar: _configuration


-(id)_encodableSubviews;
-(id)currentBackgroundColor;
-(id)currentVisiblePathInContainerView:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)outlinePathInContainerView:(id)arg0 ;
-(struct CGRect )frameInContainerView:(id)arg0 ;
-(struct UIEdgeInsets )effectiveInsetsInContainerView:(id)arg0 ;
-(void)_searchForFocusRegionsInContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif