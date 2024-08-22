// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTSTICKERCOLLECTIONVIEWCELL_H
#define AVTSTICKERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSUUID, UIImageView, UILabel, CAShapeLayer;
@protocol AVTMSStickerViewDelegate, AVTStickerCollectionViewCellDelegate, AVTStickerDisclosureValidationDelegate;


#import "AVTMSStickerView.h"

@interface AVTStickerCollectionViewCell : UICollectionViewCell <AVTMSStickerViewDelegate>



@property (nonatomic) BOOL allowsPeel;
@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (weak, nonatomic) NSObject<AVTStickerCollectionViewCellDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) NSObject<AVTStickerDisclosureValidationDelegate> *disclosureValidationDelegate;
@property (retain, nonatomic) NSUUID *displaySessionUUID; // ivar: _displaySessionUUID
@property (nonatomic) CGSize fullImageSize; // ivar: _fullImageSize
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) UILabel *prereleaseLabel; // ivar: _prereleaseLabel
@property (retain, nonatomic) CAShapeLayer *selectionLayer; // ivar: _selectionLayer
@property (nonatomic) BOOL showPrereleaseSticker; // ivar: _showPrereleaseSticker
@property (nonatomic) BOOL showSelectionLayer; // ivar: _showSelectionLayer
@property (readonly, nonatomic) AVTMSStickerView *stickerView; // ivar: _stickerView
@property (nonatomic) BOOL stickerViewIsAnimating; // ivar: _stickerViewIsAnimating


+(CGFloat)imageInsetForWidth:(CGFloat)arg0 ;
+(id)cellIdentifier;
+(struct CGPath *)selectionPathInBounds:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )stickerViewFrameForImageSize:(struct CGSize )arg0 clippingRect:(struct CGRect )arg1 ;
-(struct CGSize )imageSizeFromURL:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)purgeImageContents;
-(void)setSelected:(BOOL)arg0 ;
-(void)setupPrereleaseLabelIfNeeded;
-(void)stickerViewDidBeginPeel:(id)arg0 ;
-(void)stickerViewWasTapped:(id)arg0 ;
-(void)updateWithImage:(id)arg0 sticker:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif