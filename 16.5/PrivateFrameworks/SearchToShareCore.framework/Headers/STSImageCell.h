// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSIMAGECELL_H
#define STSIMAGECELL_H

@class UICollectionViewCell, UIImageView, UIView, UILabel, UIImage, NSString, UIColor;


#import "STSCellDownloadOverlayView.h"
#import "STSAnimatedImageInfo.h"

@interface STSImageCell : UICollectionViewCell {
    UIImageView *_imageView;
    UIImageView *_badgeView;
    UIView *_placeholderColorView;
    STSCellDownloadOverlayView *_downloadProgressView;
    UILabel *_labelView;
    UIView *_labelBackgroundView;
    UIImageView *_debugBadgeView;
}


@property (retain, nonatomic) UIImage *badge;
@property (copy, nonatomic) NSString *category; // ivar: _category
@property (retain, nonatomic) UIImage *debugBadge;
@property (nonatomic) CGFloat downloadProgress; // ivar: _downloadProgress
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) STSAnimatedImageInfo *imageInfo; // ivar: _imageInfo
@property (retain, nonatomic) UIColor *placeholderColor; // ivar: _placeholderColor
@property (nonatomic) BOOL showDownloadIndicator; // ivar: _showDownloadIndicator


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateBadgeAnimated:(BOOL)arg0 ;
-(void)_updatePlaceholderViewAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif