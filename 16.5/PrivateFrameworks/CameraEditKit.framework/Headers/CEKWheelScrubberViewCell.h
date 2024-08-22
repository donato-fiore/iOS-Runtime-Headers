// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEKWHEELSCRUBBERVIEWCELL_H
#define CEKWHEELSCRUBBERVIEWCELL_H

@class UICollectionViewCell, UIView;



@interface CEKWheelScrubberViewCell : UICollectionViewCell

@property (readonly, nonatomic) UIView *_clippingView; // ivar: __clippingView
@property (readonly, nonatomic) UIView *_selectionDotView; // ivar: __selectionDotView
@property (nonatomic) NSInteger dotPlacement; // ivar: _dotPlacement
@property (readonly, nonatomic) UIView *itemView; // ivar: _itemView
@property (nonatomic) CGFloat selectionDotCenterTopSpacing; // ivar: _selectionDotCenterTopSpacing


+(CGFloat)borderInsetWidth;
+(struct CGSize )_defaultContentSize;
+(struct CGSize )defaultSize;
+(struct CGSize )screenScaleContentSize;
-(CGFloat)_selectionDotDiameter;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateSelectionDot;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif