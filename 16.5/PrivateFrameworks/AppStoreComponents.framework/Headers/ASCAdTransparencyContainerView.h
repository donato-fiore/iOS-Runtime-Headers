// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCADTRANSPARENCYCONTAINERVIEW_H
#define ASCADTRANSPARENCYCONTAINERVIEW_H

@class UIView, UIVisualEffectView, NSString, UILabel;


#import "ASCAdTransparencyButtonView.h"

@interface ASCAdTransparencyContainerView : UIView

@property (readonly, nonatomic) ASCAdTransparencyButtonView *adTransparencyButton; // ivar: _adTransparencyButton
@property (nonatomic, getter=isBackgroundHidden) BOOL backgroundHidden;
@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (copy, nonatomic) NSString *developerName; // ivar: _developerName
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(CGFloat)buttonTextPadding;
+(CGFloat)edgePadding;
+(id)developerNameFontCompatibleWithTraitCollection:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)addAdTransparencyTarget:(id)arg0 action:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateFont;


@end


#endif