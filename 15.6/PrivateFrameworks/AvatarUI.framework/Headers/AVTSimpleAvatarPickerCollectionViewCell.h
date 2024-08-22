// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTSIMPLEAVATARPICKERCOLLECTIONVIEWCELL_H
#define AVTSIMPLEAVATARPICKERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSUUID, UIView;


#import "AVTUIAnimatingImageView.h"

@interface AVTSimpleAvatarPickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) NSUUID *displaySessionUUID; // ivar: _displaySessionUUID
@property (nonatomic) NSUInteger imageInsetSize; // ivar: _imageInsetSize
@property (readonly, nonatomic) AVTUIAnimatingImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) UIView *selectionLayer; // ivar: _selectionLayer
@property (nonatomic) BOOL showSelectedState; // ivar: _showSelectedState


+(CGFloat)imageInsetForInsetSize:(NSUInteger)arg0 ;
+(id)cellIdentifier;
+(struct CGPath *)selectionPathInBounds:(struct CGRect )arg0 ;
-(BOOL)shouldShowSelectionLayer;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateHighlightedState:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateSelectionLayerOpacityAnimated:(BOOL)arg0 ;
-(void)updateWithImage:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif