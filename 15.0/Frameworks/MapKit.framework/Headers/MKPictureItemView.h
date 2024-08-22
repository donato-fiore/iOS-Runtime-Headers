// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPICTUREITEMVIEW_H
#define MKPICTUREITEMVIEW_H

@class UIView, UIVisualEffectView, UIImageView, NSString, UILabel;
@protocol GEOPictureItem;



@interface MKPictureItemView : UIView

@property (nonatomic) BOOL didDownloadImage; // ivar: _didDownloadImage
@property (readonly, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (readonly, nonatomic) CGSize imageSize; // ivar: _imageSize
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) NSObject<GEOPictureItem> *pictureItem; // ivar: _pictureItem
@property (copy, nonatomic) NSString *providerName; // ivar: _providerName
@property (readonly, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithPictureItem:(id)arg0 providerName:(id)arg1 ;
-(void)addShadowToLabel:(id)arg0 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)fetchImageIfNecessary;
-(void)setupSubviews;
-(void)updateLabelsSettings;
-(void)updateUIForTheme:(id)arg0 ;


@end


#endif