// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPLACECOLLECTIONCELL_H
#define MKPLACECOLLECTIONCELL_H

@class UICollectionViewCell, UIImageView, UILabel, NSLayoutConstraint, UIStackView, UIVisualEffectView, NSUUID;


#import "MKPlaceCollectionViewModel.h"

@interface MKPlaceCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *checkMarkImageView; // ivar: _checkMarkImageView
@property (retain, nonatomic) UIImageView *collectionImageView; // ivar: _collectionImageView
@property (retain, nonatomic) UILabel *collectionLabel; // ivar: _collectionLabel
@property (retain, nonatomic) MKPlaceCollectionViewModel *item; // ivar: _item
@property (retain, nonatomic) NSLayoutConstraint *logoWidthConstraint; // ivar: _logoWidthConstraint
@property (retain, nonatomic) UIStackView *metadataStackView; // ivar: _metadataStackView
@property (retain, nonatomic) UIImageView *publisherLogoImageView; // ivar: _publisherLogoImageView
@property (retain, nonatomic) UILabel *savedCollectionLabel; // ivar: _savedCollectionLabel
@property (retain, nonatomic) UIVisualEffectView *savedView; // ivar: _savedView
@property (retain, nonatomic) NSUUID *updateIdentifier; // ivar: _updateIdentifier


+(id)reuseIdentifier;
-(BOOL)canBecomeFirstResponder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeForSavedPill;
-(void)addCollectionNameView;
-(void)addPublisherLogoImage;
-(void)addSavedCollectionView;
-(void)configureWithModel:(id)arg0 ;
-(void)prepareForReuse;
-(void)setImageMetadata;
-(void)setTextMetadata;
-(void)setUpCellUsingModel:(id)arg0 ;
-(void)setupAccessibility;
-(void)setupCollectionImage;
-(void)setupConstraints;
-(void)setupCornerRadius;
-(void)setupShadows;
-(void)setupStackView;
-(void)setupSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif