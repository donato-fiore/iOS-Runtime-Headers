// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRINLINECOMPLICATIONGALLERYITEMCELL_H
#define PRINLINECOMPLICATIONGALLERYITEMCELL_H

@class UICollectionViewListCell, UIView, UIImageView, UILabel, UICellAccessory, NSLayoutConstraint, UIViewController, UIImage, NSString;



@interface PRInlineComplicationGalleryItemCell : UICollectionViewListCell {
    UIView *_widgetContainerView;
    UIImageView *_iconImageView;
    UILabel *_label;
    UICellAccessory *_checkmarkAccessory;
    NSLayoutConstraint *_leadingConstraint;
}


@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic, getter=isSeparatorVisible) BOOL separatorVisible; // ivar: _separatorVisible
@property (nonatomic) BOOL showsCheckmark;
@property (retain, nonatomic) NSString *title;


+(CGFloat)checkmarkInset;
+(CGFloat)suggestionInset;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForReuse;


@end


#endif