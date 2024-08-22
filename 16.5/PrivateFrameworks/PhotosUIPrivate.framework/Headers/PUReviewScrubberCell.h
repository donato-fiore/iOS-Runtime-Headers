// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUREVIEWSCRUBBERCELL_H
#define PUREVIEWSCRUBBERCELL_H

@class UICollectionViewCell, UIImageView, UIImage;



@interface PUReviewScrubberCell : UICollectionViewCell

@property (readonly, nonatomic) UIImageView *_checkmarkImageView; // ivar: __checkmarkImageView
@property (readonly, nonatomic) UIImageView *_suggestedImageView; // ivar: __suggestedImageView
@property (readonly, nonatomic) UIImageView *_thumbnailImageView; // ivar: __thumbnailImageView
@property (nonatomic, getter=isFavorite) BOOL favorite; // ivar: _favorite
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic, getter=isSuggested) BOOL suggested; // ivar: _suggested
@property (nonatomic) BOOL wantsSmallSuggestionIndicators; // ivar: _wantsSmallSuggestionIndicators


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonPUReviewScrubberCellInitialization;
-(void)_updateFavoriteView;
-(void)_updateSuggestedView;
-(void)_updateThumbnailImageView;
-(void)layoutSubviews;


@end


#endif