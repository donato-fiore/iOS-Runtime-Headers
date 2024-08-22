// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSTARTPAGEBACKGROUNDIMAGECELL_H
#define SFSTARTPAGEBACKGROUNDIMAGECELL_H

@class UICollectionViewCell, UIImageView, UIView, UIButton, UIImage;
@protocol SFStartPageBackgroundImageCellDelegate;



@interface SFStartPageBackgroundImageCell : UICollectionViewCell {
    UIImageView *_imageView;
    UIView *_highlightView;
    UIView *_selectionIndicator;
    UIButton *_clearButton;
}


@property (weak, nonatomic) NSObject<SFStartPageBackgroundImageCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL showsCustomImageControls;
@property (nonatomic) BOOL showsSelectionRing;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didSelectClearButton:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateSelectionIndicatorColor;


@end


#endif