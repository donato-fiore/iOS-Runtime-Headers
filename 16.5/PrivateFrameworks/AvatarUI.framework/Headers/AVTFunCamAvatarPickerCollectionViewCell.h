// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTFUNCAMAVATARPICKERCOLLECTIONVIEWCELL_H
#define AVTFUNCAMAVATARPICKERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIButton, NSUUID, CAShapeLayer;


#import "AVTUIAnimatingImageView.h"

@interface AVTFunCamAvatarPickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIButton *accessoryButton; // ivar: _accessoryButton
@property (retain, nonatomic) NSUUID *displaySessionUUID; // ivar: _displaySessionUUID
@property (nonatomic) CGSize engagedSize; // ivar: _engagedSize
@property (nonatomic) NSInteger imageContentMode; // ivar: _imageContentMode
@property (copy, nonatomic) id *imageInsetProvider; // ivar: _imageInsetProvider
@property (readonly, nonatomic) AVTUIAnimatingImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL roundImageCorners; // ivar: _roundImageCorners
@property (readonly, nonatomic) CAShapeLayer *selectionLayer; // ivar: _selectionLayer
@property (nonatomic) BOOL selectionVisible; // ivar: _selectionVisible
@property (nonatomic) BOOL showsTitle; // ivar: _showsTitle


+(id)cellIdentifier;
+(struct CGPath *)selectionPathInBounds:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setImageZoomFactor:(CGFloat)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateSelectionLayer;
-(void)updateWithImage:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateWithTintColor:(id)arg0 ;


@end


#endif