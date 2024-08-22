// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFCOMPOSEACTIONCARDTITLEVIEW_H
#define MFCOMPOSEACTIONCARDTITLEVIEW_H

@class UINavigationBarTitleView, UIButton, UILabel;



@interface MFComposeActionCardTitleView : UINavigationBarTitleView

@property (readonly, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(CGFloat)heightForTraitCollection:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateHeightForCurrentTraits;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif