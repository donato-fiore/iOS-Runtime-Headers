// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRCOMPLICATIONGALLERYSECTIONHEADERVIEW_H
#define PRCOMPLICATIONGALLERYSECTIONHEADERVIEW_H

@class UICollectionReusableView, UIImageView, UILabel, UIImage, NSString;



@interface PRComplicationGallerySectionHeaderView : UICollectionReusableView {
    UIImageView *_iconImageView;
    UILabel *_label;
}


@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSString *title;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForReuse;


@end


#endif