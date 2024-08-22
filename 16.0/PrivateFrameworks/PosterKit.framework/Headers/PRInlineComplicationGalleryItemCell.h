// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRINLINECOMPLICATIONGALLERYITEMCELL_H
#define PRINLINECOMPLICATIONGALLERYITEMCELL_H

@class UICollectionViewCell, UIView, UIImageView, UILabel, NSLayoutConstraint, UIViewController, UIImage, NSString;



@interface PRInlineComplicationGalleryItemCell : UICollectionViewCell {
    UIView *_widgetContainerView;
    UIImageView *_iconImageView;
    UILabel *_label;
    UIView *_separatorView;
    NSLayoutConstraint *_leadingConstraint;
}


@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic, getter=isSeparatorVisible) BOOL separatorVisible; // ivar: _separatorVisible
@property (retain, nonatomic) NSString *title;


+(CGFloat)suggestionInset;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif