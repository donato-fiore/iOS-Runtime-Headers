// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLEBOOTSTRAPCOLLECTIONVIEWCELL_H
#define PXPEOPLEBOOTSTRAPCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImageView, UIImage, UIView;


#import "PXPersonImageRequest.h"
#import "PXRoundedCornerOverlayView.h"

@interface PXPeopleBootstrapCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UIImageView *badgeView; // ivar: _badgeView
@property (readonly, nonatomic) CGSize checkmarkImageSize; // ivar: _checkmarkImageSize
@property (nonatomic) BOOL confirmed; // ivar: _confirmed
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) PXPersonImageRequest *imageRequest; // ivar: _imageRequest
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL isMergeCandidate; // ivar: _isMergeCandidate
@property (nonatomic) BOOL isVerified; // ivar: _isVerified
@property (nonatomic) NSUInteger presentationStatus; // ivar: _presentationStatus
@property (readonly, nonatomic) PXRoundedCornerOverlayView *roundCornerOverlay; // ivar: _roundCornerOverlay
@property (readonly, nonatomic) UIView *selectedCheckmarkView; // ivar: _selectedCheckmarkView
@property (readonly, nonatomic) UIView *unselectedCheckmarkView; // ivar: _unselectedCheckmarkView


+(id)cloudErrorBadgeImage;
-(BOOL)_isRTL;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateCellSizing;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif