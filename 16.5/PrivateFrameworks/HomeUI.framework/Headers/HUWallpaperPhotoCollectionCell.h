// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUWALLPAPERPHOTOCOLLECTIONCELL_H
#define HUWALLPAPERPHOTOCOLLECTIONCELL_H

@class UITableViewCell, UILabel, NSString, NSArray, UIImage, NSLayoutConstraint, UIImageView;



@interface HUWallpaperPhotoCollectionCell : UITableViewCell

@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) NSArray *horizontalConstraints; // ivar: _horizontalConstraints
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSLayoutConstraint *imageHeightConstraint; // ivar: _imageHeightConstraint
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (retain, nonatomic) NSArray *imageSizeConstraints; // ivar: _imageSizeConstraints
@property (retain, nonatomic) UIImageView *imageThumbnailView; // ivar: _imageThumbnailView
@property (retain, nonatomic) NSLayoutConstraint *imageWidthConstraint; // ivar: _imageWidthConstraint
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSString *titleText;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(void)updateConstraints;


@end


#endif