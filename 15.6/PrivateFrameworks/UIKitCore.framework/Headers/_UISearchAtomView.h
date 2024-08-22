// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISEARCHATOMVIEW_H
#define _UISEARCHATOMVIEW_H

@class UIFont, NSString, NSArray, NSLayoutConstraint;
@protocol _UIAtomTextViewAtomLayout;


#import "UIView.h"
#import "UIColor.h"
#import "_UISearchAtomBackgroundView.h"
#import "UIImageView.h"
#import "UILabel.h"

@interface _UISearchAtomView : UIView <_UIAtomTextViewAtomLayout>

 {
    ? _flags;
}


@property (retain, nonatomic) UIColor *atomBackgroundColor; // ivar: _atomBackgroundColor
@property (retain, nonatomic) UIFont *atomFont;
@property (retain, nonatomic) _UISearchAtomBackgroundView *backgroundView; // ivar: _backgroundView
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *defaultConstraints; // ivar: _defaultConstraints
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *imageBaselineConstraint; // ivar: _imageBaselineConstraint
@property (retain, nonatomic) NSLayoutConstraint *imageCenterYConstraint; // ivar: _imageCenterYConstraint
@property (retain) UIImageView *leadingImage; // ivar: _leadingImage
@property (retain, nonatomic) NSLayoutConstraint *maximumAtomWidthConstraint; // ivar: _maximumAtomWidthConstraint
@property (readonly, nonatomic) CGRect selectionBounds;
@property (nonatomic) NSInteger selectionStyle;
@property (readonly) Class superclass;
@property (retain) UILabel *textLabel; // ivar: _textLabel
@property (nonatomic) CGFloat viewportWidth;
@property (copy, nonatomic) NSArray *withImageConstraints; // ivar: _withImageConstraints
@property (copy, nonatomic) NSArray *withoutImageConstraints; // ivar: _withoutImageConstraints


+(BOOL)requiresConstraintBasedLayout;
+(id)_defaultFont;
+(id)defaultAtomBackgroundColorForTraitCollection:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForLastBaselineLayout;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateColors;
-(void)tintColorDidChange;
-(void)updateConstraints;


@end


#endif