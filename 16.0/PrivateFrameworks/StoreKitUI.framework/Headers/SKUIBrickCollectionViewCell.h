// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIBRICKCOLLECTIONVIEWCELL_H
#define SKUIBRICKCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIColor, UILabel, UIImageView, NSString, UIImage, UIView;


#import "SKUICountdownView.h"
#import "SKUIClientContext.h"
#import "SKUICountdown.h"

@interface SKUIBrickCollectionViewCell : UICollectionViewCell {
    SKUICountdownView *_countdownView;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    UIImageView *_overlayImageView;
}


@property (copy, nonatomic) NSString *accessibilityLabel; // ivar: _accessibilityLabel
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (retain, nonatomic) SKUICountdown *countdown;
@property (retain, nonatomic) UIImage *itemImage;
@property (nonatomic, getter=isItemImageHidden) BOOL itemImageHidden; // ivar: _itemImageHidden
@property (nonatomic) UIEdgeInsets itemImageInsets; // ivar: _itemImageInsets
@property (readonly, nonatomic) UIView *itemImageView; // ivar: _itemImageView
@property (copy, nonatomic) NSString *title;


-(void)_reloadHighlight;
-(void)_removeOverlay;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setColoringWithColorScheme:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif