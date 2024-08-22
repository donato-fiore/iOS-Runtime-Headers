// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIACTIVITYGROUPACTIVITYCELL_H
#define _UIACTIVITYGROUPACTIVITYCELL_H

@class UICollectionViewCell, CALayer, UIImageView, UIView;


#import "_UIHostActivityProxy.h"
#import "_UIActivityGroupActivityCellTitleLabel.h"

@interface _UIActivityGroupActivityCell : UICollectionViewCell

@property (retain, nonatomic) _UIHostActivityProxy *activityProxy; // ivar: _activityProxy
@property (retain, nonatomic) CALayer *highlightLayer; // ivar: _highlightLayer
@property (retain, nonatomic) UIImageView *highlightedImageView; // ivar: _highlightedImageView
@property (retain, nonatomic) UIView *imageSlot; // ivar: _imageSlot
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) NSUInteger sequence; // ivar: _sequence
@property (retain, nonatomic) UIView *shadowView; // ivar: _shadowView
@property (retain, nonatomic) _UIActivityGroupActivityCellTitleLabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIView *titleSlot; // ivar: _titleSlot


+(struct CGSize )preferredSizeForSheetWidth:(CGFloat)arg0 sizeCategory:(id)arg1 titleLabelText:(id)arg2 screenScale:(CGFloat)arg3 ;
+(void)invalidatePreferredSizes;
-(id)draggingView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)initHighlightLayerIfNeeded;
-(void)initHighlightedImageViewIfNeeded;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateHighlightedImageViewIfNeeded;


@end


#endif