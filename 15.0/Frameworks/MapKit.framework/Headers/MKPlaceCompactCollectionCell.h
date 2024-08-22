// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACECOMPACTCOLLECTIONCELL_H
#define MKPLACECOMPACTCOLLECTIONCELL_H

@class UICollectionViewCell, UIImageView, UIStackView, NSLayoutConstraint, UILabel, NSUUID;


#import "OverlayView.h"
#import "MKPlaceCompactCollectionViewModel.h"

@interface MKPlaceCompactCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *collectionImageView; // ivar: _collectionImageView
@property (retain, nonatomic) OverlayView *imageOverlayView; // ivar: _imageOverlayView
@property (retain, nonatomic) MKPlaceCompactCollectionViewModel *item; // ivar: _item
@property (retain, nonatomic) UIStackView *metadataStackView; // ivar: _metadataStackView
@property (retain, nonatomic) NSLayoutConstraint *overlayHeightConstraint; // ivar: _overlayHeightConstraint
@property (retain, nonatomic) UILabel *subTitleLabel; // ivar: _subTitleLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSUUID *updateIdentifier; // ivar: _updateIdentifier


+(id)reuseIdentifier;
-(BOOL)canBecomeFirstResponder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWithModel:(id)arg0 ;
-(void)prepareForReuse;
-(void)setUpCellUsingModel:(id)arg0 ;
-(void)setupBorderHighlight;
-(void)setupCompactCollectionData;
-(void)setupCompactCollectionImage;
-(void)setupCompactCollectionImageOverlay;
-(void)setupConstraints;
-(void)setupCornerRadius;
-(void)setupShadows;
-(void)setupSubTitle;
-(void)setupSubviews;
-(void)setupTitle;


@end


#endif