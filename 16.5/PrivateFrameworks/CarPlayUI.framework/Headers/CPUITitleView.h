// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPUITITLEVIEW_H
#define CPUITITLEVIEW_H

@class UIView, NSLayoutConstraint, UILabel, UIFont;



@interface CPUITitleView : UIView {
    NSLayoutConstraint *_badgeWidthConstraint;
}


@property (retain, nonatomic) UILabel *explicitLabel; // ivar: _explicitLabel
@property (nonatomic, getter=isExplicitTrack) BOOL explicitTrack; // ivar: _explicitTrack
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (nonatomic) BOOL shouldUseMusicExplicitGlyph; // ivar: _shouldUseMusicExplicitGlyph
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)_createLabelWithTextAlignment:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateExplicitTreatmentString;
-(void)setupConstraints;
-(void)updateConstraints;


@end


#endif