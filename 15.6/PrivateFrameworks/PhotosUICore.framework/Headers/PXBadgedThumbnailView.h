// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXBADGEDTHUMBNAILVIEW_H
#define PXBADGEDTHUMBNAILVIEW_H

@class UIView, UIImage, UIImageView;


#import "PXCollageView.h"

@interface PXBadgedThumbnailView : UIView

@property (retain, nonatomic) UIImage *badgeImage; // ivar: _badgeImage
@property (retain, nonatomic) UIImageView *badgeView; // ivar: _badgeView
@property (retain, nonatomic) PXCollageView *collageView; // ivar: _collageView
@property (nonatomic) NSInteger numberOfItems;
@property (retain, nonatomic) UIImageView *placeholderImageView; // ivar: _placeholderImageView
@property (nonatomic, getter=shouldShowLikeBadge) BOOL showBadge; // ivar: _showBadge


-(BOOL)shouldShowBadge;
-(id)imageViewForItemAtIndex:(NSUInteger)arg0 ;
-(id)initWithplaceholderImageView:(id)arg0 ;
-(void)layoutSubviews;
-(void)setImage:(id)arg0 forItemAtIndex:(NSUInteger)arg1 ;
-(void)setImageHidden:(BOOL)arg0 forItemAtIndex:(NSUInteger)arg1 ;


@end


#endif