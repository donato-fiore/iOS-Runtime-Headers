// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKIMAGEVIEWCELL_H
#define PKIMAGEVIEWCELL_H

@class UITableViewCell, UIImage, UIImageView;



@interface PKImageViewCell : UITableViewCell

@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIImageView *imageView;
@property (nonatomic) NSInteger imageViewContentMode; // ivar: _imageViewContentMode
@property (nonatomic) BOOL matchCellBackgroundToImage; // ivar: _matchCellBackgroundToImage


-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)layoutSubviews;
-(void)setContentMode:(NSInteger)arg0 ;


@end


#endif