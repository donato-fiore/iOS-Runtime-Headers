// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFINTERACTIVEBANNERCELL_H
#define SFINTERACTIVEBANNERCELL_H

@class UICollectionViewCell, UIVisualEffectView, UIButton, UILayoutGuide, UILabel;



@interface SFInteractiveBannerCell : UICollectionViewCell {
    UIVisualEffectView *_backgroundEffectView;
    UIButton *_actionButton;
    UILayoutGuide *_textLayoutGuide;
    id *_buttonAction;
}


@property (readonly, nonatomic) UILabel *captionLabel; // ivar: _captionLabel
@property (readonly, nonatomic) UILabel *leadingLabel; // ivar: _leadingLabel


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_actionButtonTapped:(id)arg0 ;
-(void)_removeActionButton;
-(void)_updateActionButtonWithText:(id)arg0 ;
-(void)_updateVibrancy;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setModel:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif