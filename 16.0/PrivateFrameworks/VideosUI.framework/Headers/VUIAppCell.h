// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIAPPCELL_H
#define VUIAPPCELL_H

@class UICollectionViewCell, UIImage, NSString, UIImageView, UILabel;



@interface VUIAppCell : UICollectionViewCell {
    UIImage *_image;
    NSString *_title;
    BOOL _didLayout;
    UIImageView *_imageView;
    UILabel *_titleLabel;
}




-(void)layoutSubviews;
-(void)setImage:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)updateConstraints;


@end


#endif