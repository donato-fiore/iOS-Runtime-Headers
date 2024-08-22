// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSIMAGEASSETVIEW_H
#define TPSIMAGEASSETVIEW_H

@class UIView, UIImageView, NSString, UIColor, UIImage, TPSURLSessionItem;
@protocol TPSImageAssetViewDelegate;



@interface TPSImageAssetView : UIView {
    UIView *_highlightView;
}


@property (nonatomic) BOOL aspectFillAsset; // ivar: _aspectFillAsset
@property (retain, nonatomic) UIImageView *backgroundImageView; // ivar: _backgroundImageView
@property (retain, nonatomic) NSString *currentDisplayIdentifier; // ivar: _currentDisplayIdentifier
@property (retain, nonatomic) NSString *currentImagePath; // ivar: _currentImagePath
@property (retain, nonatomic) UIColor *defaultBackgroundColor; // ivar: _defaultBackgroundColor
@property (weak, nonatomic) NSObject<TPSImageAssetViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL hideImageWhenNil; // ivar: _hideImageWhenNil
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) TPSURLSessionItem *imageURLSessionItem; // ivar: _imageURLSessionItem
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIColor *noImageBackgroundColor; // ivar: _noImageBackgroundColor
@property (retain, nonatomic) UIColor *overlayColor; // ivar: _overlayColor
@property (nonatomic) BOOL respectLoadingStatus; // ivar: _respectLoadingStatus
@property (nonatomic) BOOL roundedCorner; // ivar: _roundedCorner
@property (nonatomic) CGFloat roundedCornerRadius; // ivar: _roundedCornerRadius
@property (nonatomic) NSUInteger status; // ivar: _status


+(BOOL)cacheImageAvailableForIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDefaultBackgroundColor:(id)arg0 noImageBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)animateImageView:(BOOL)arg0 ;
-(void)cancel;
-(void)commonInit;
-(void)fetchImageWithIdentifier:(id)arg0 path:(id)arg1 ;
-(void)layoutSubviews;
-(void)showHighlight:(BOOL)arg0 ;
-(void)updateBackgroundColor;


@end


#endif