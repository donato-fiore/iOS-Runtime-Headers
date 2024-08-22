// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOLORCELL_H
#define WFCOLORCELL_H

@class UICollectionViewCell, NSString, WFFloatingView, WFGradient, UIView;



@interface WFColorCell : UICollectionViewCell

@property (copy, nonatomic) NSString *colorName; // ivar: _colorName
@property (readonly, nonatomic) WFFloatingView *floatingView; // ivar: _floatingView
@property (retain, nonatomic) WFGradient *gradient;
@property (weak, nonatomic) UIView *selectedRingView; // ivar: _selectedRingView


-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif