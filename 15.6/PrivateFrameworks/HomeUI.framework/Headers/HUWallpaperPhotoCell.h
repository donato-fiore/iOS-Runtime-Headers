// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUWALLPAPERPHOTOCELL_H
#define HUWALLPAPERPHOTOCELL_H

@class UICollectionViewCell, NSString, CAShapeLayer, UILabel, UIButton, UIImage, UIImageView, NSLayoutConstraint, UIView, UIActivityIndicatorView, UIStackView;
@protocol HUWallpaperPhotoCellDelegate;



@interface HUWallpaperPhotoCell : UICollectionViewCell

@property (copy, nonatomic) NSString *assetIdentifier; // ivar: _assetIdentifier
@property (retain, nonatomic) CAShapeLayer *borderLayer; // ivar: _borderLayer
@property (nonatomic) BOOL busy; // ivar: _busy
@property (retain, nonatomic) UILabel *choosePhotoLabel; // ivar: _choosePhotoLabel
@property (nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (weak, nonatomic) NSObject<HUWallpaperPhotoCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIButton *deleteButton; // ivar: _deleteButton
@property (nonatomic) BOOL empty; // ivar: _empty
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) NSLayoutConstraint *imageWidthConstraint; // ivar: _imageWidthConstraint
@property (nonatomic) BOOL removable; // ivar: _removable
@property (retain, nonatomic) UIView *selectionOverlayView; // ivar: _selectionOverlayView
@property (nonatomic) BOOL showBorder; // ivar: _showBorder
@property (retain, nonatomic) UIActivityIndicatorView *spinnerView; // ivar: _spinnerView
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)showBorder:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateView;


@end


#endif