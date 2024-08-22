// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASVTHUMBNAILBUTTON_H
#define ASVTHUMBNAILBUTTON_H

@class UIButton, UIImageView, NSLayoutConstraint, NSError, UIImage;


#import "ASVLoadingView.h"
#import "ASVBadgeView.h"

@interface ASVThumbnailButton : UIButton {
    ASVLoadingView *_loadingView;
    ASVBadgeView *_badgeView;
    UIImageView *_imageView;
    NSLayoutConstraint *_badgeTopConstraint;
    NSLayoutConstraint *_badgeTrailingConstraint;
}


@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) UIImage *thumbnail;


-(void)_setupButton;
-(void)_updateSubviewVisibility;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif